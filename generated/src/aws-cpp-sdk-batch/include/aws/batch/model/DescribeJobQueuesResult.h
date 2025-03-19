/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobQueueDetail.h>
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
  class DescribeJobQueuesResult
  {
  public:
    AWS_BATCH_API DescribeJobQueuesResult() = default;
    AWS_BATCH_API DescribeJobQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeJobQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of job queues.</p>
     */
    inline const Aws::Vector<JobQueueDetail>& GetJobQueues() const { return m_jobQueues; }
    template<typename JobQueuesT = Aws::Vector<JobQueueDetail>>
    void SetJobQueues(JobQueuesT&& value) { m_jobQueuesHasBeenSet = true; m_jobQueues = std::forward<JobQueuesT>(value); }
    template<typename JobQueuesT = Aws::Vector<JobQueueDetail>>
    DescribeJobQueuesResult& WithJobQueues(JobQueuesT&& value) { SetJobQueues(std::forward<JobQueuesT>(value)); return *this;}
    template<typename JobQueuesT = JobQueueDetail>
    DescribeJobQueuesResult& AddJobQueues(JobQueuesT&& value) { m_jobQueuesHasBeenSet = true; m_jobQueues.emplace_back(std::forward<JobQueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeJobQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobQueueDetail> m_jobQueues;
    bool m_jobQueuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
