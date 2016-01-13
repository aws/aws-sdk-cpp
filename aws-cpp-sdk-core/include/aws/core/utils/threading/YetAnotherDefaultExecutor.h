#pragma once

#include <functional>
#include <atomic>
#include <memory>
#include <thread>
#include <chrono>
#include <assert.h>

#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/memory/ObjectPool.h>

namespace Aws
{
namespace Utils
{
namespace Threading
{

	struct NodeEntry
	{
		NodeEntry() : mNext(nullptr) {}
		NodeEntry* volatile mNext;
	};

	struct JobEntry : public Aws::Utils::Memory::ObjectPool<JobEntry>
	{
		JobEntry(std::function<void()>&& job) : mTask(std::move(job)) {}
		virtual ~JobEntry() {}

		NodeEntry mNodeEntry;

		std::function<void()> mTask;
	};

	class JobQueue
	{
	public:
		JobQueue() : mHead(&mStub), mTail(&mStub)
		{
			mOffset = offsetof(struct JobEntry, mNodeEntry);
			assert(mHead.is_lock_free());
		}
		~JobQueue() {}

		/// mutiple produce
		void Push(JobEntry* newData)
		{
			NodeEntry* prevNode = (NodeEntry*)std::atomic_exchange_explicit(&mHead,
				&newData->mNodeEntry, std::memory_order_acq_rel);

			prevNode->mNext = &(newData->mNodeEntry);
		}

		/// single consume
		JobEntry* Pop()
		{
			NodeEntry* tail = mTail;
			NodeEntry* next = tail->mNext;

			if (tail == &mStub)
			{
				/// in case of empty
				if (nullptr == next)
					return nullptr;

				/// first pop
				mTail = next;
				tail = next;
				next = next->mNext;
			}

			/// in most cases...
			if (next)
			{
				mTail = next;

				return reinterpret_cast<JobEntry*>(reinterpret_cast<int64_t>(tail)-mOffset);
			}

			NodeEntry* head = mHead;
			if (tail != head)
				return nullptr;

			/// last pop
			mStub.mNext = nullptr;

			NodeEntry* prevNode = (NodeEntry*)std::atomic_exchange_explicit(&mHead,
				&mStub, std::memory_order_acq_rel);

			prevNode->mNext = &mStub;

			next = tail->mNext;
			if (next)
			{
				mTail = next;

				return reinterpret_cast<JobEntry*>(reinterpret_cast<int64_t>(tail)-mOffset);
			}

			return nullptr;
		}

	private:

		std::atomic<NodeEntry*> mHead;

		NodeEntry*			mTail;
		NodeEntry			mStub;

		int64_t				mOffset;
	};


	class AWS_CORE_API YetAnotherDefaultExecutor : public Executor
	{
	public:
		YetAnotherDefaultExecutor();
		~YetAnotherDefaultExecutor();

	protected:
		bool SubmitToThread(std::function<void()>&&); ///< Push a task (multi-produce)

	private:
		void RunExecutor(); ///< Run (single-consume)

	private:
		bool mStopRequested;

		JobQueue mJobQueue;
		std::thread mWorkerThread;
	};


} // namespace Threading
} // namespace Utils
} // namespace Aws