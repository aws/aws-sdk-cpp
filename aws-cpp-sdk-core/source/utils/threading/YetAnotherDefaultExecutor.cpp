
#include <aws/core/utils/threading/YetAnotherDefaultExecutor.h>

#include <thread>

using namespace Aws::Utils::Threading;

YetAnotherDefaultExecutor::YetAnotherDefaultExecutor()
	: mStopRequested(false)
	, mWorkerThread([this]{RunExecutor(); }) ///< spawn a worker-thread
{

}

YetAnotherDefaultExecutor::~YetAnotherDefaultExecutor()
{
	mStopRequested = true;
	mWorkerThread.join();

	while (JobEntry* job = mJobQueue.Pop())
	{
		delete job;
	}
}


bool YetAnotherDefaultExecutor::SubmitToThread(std::function<void()>&& fx)
{
	JobEntry* job = new JobEntry(std::move(fx));
	mJobQueue.Push(job);
	return true;
}

void YetAnotherDefaultExecutor::RunExecutor()
{
	while (!mStopRequested)
	{
		if (JobEntry* job = mJobQueue.Pop())
		{
			job->mTask();
			delete job;
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::microseconds(1)); ///< optional
		}
	}
}
