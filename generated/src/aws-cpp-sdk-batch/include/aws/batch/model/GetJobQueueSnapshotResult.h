/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/FrontOfQueueDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class GetJobQueueSnapshotResult
  {
  public:
    AWS_BATCH_API GetJobQueueSnapshotResult();
    AWS_BATCH_API GetJobQueueSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API GetJobQueueSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the first 100 <code>RUNNABLE</code> jobs in each job queue. For
     * first-in-first-out (FIFO) job queues, jobs are ordered based on their submission
     * time. For fair share scheduling (FSS) job queues, jobs are ordered based on
     * their job priority and share usage.</p>
     */
    inline const FrontOfQueueDetail& GetFrontOfQueue() const{ return m_frontOfQueue; }
    inline void SetFrontOfQueue(const FrontOfQueueDetail& value) { m_frontOfQueue = value; }
    inline void SetFrontOfQueue(FrontOfQueueDetail&& value) { m_frontOfQueue = std::move(value); }
    inline GetJobQueueSnapshotResult& WithFrontOfQueue(const FrontOfQueueDetail& value) { SetFrontOfQueue(value); return *this;}
    inline GetJobQueueSnapshotResult& WithFrontOfQueue(FrontOfQueueDetail&& value) { SetFrontOfQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobQueueSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobQueueSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobQueueSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FrontOfQueueDetail m_frontOfQueue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
