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
    AWS_BATCH_API GetJobQueueSnapshotResult() = default;
    AWS_BATCH_API GetJobQueueSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API GetJobQueueSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the first 100 <code>RUNNABLE</code> jobs in each job queue. For
     * first-in-first-out (FIFO) job queues, jobs are ordered based on their submission
     * time. For fair-share scheduling (FSS) job queues, jobs are ordered based on
     * their job priority and share usage.</p>
     */
    inline const FrontOfQueueDetail& GetFrontOfQueue() const { return m_frontOfQueue; }
    template<typename FrontOfQueueT = FrontOfQueueDetail>
    void SetFrontOfQueue(FrontOfQueueT&& value) { m_frontOfQueueHasBeenSet = true; m_frontOfQueue = std::forward<FrontOfQueueT>(value); }
    template<typename FrontOfQueueT = FrontOfQueueDetail>
    GetJobQueueSnapshotResult& WithFrontOfQueue(FrontOfQueueT&& value) { SetFrontOfQueue(std::forward<FrontOfQueueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobQueueSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FrontOfQueueDetail m_frontOfQueue;
    bool m_frontOfQueueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
