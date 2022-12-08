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
    AWS_BATCH_API DescribeJobQueuesResult();
    AWS_BATCH_API DescribeJobQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeJobQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of job queues.</p>
     */
    inline const Aws::Vector<JobQueueDetail>& GetJobQueues() const{ return m_jobQueues; }

    /**
     * <p>The list of job queues.</p>
     */
    inline void SetJobQueues(const Aws::Vector<JobQueueDetail>& value) { m_jobQueues = value; }

    /**
     * <p>The list of job queues.</p>
     */
    inline void SetJobQueues(Aws::Vector<JobQueueDetail>&& value) { m_jobQueues = std::move(value); }

    /**
     * <p>The list of job queues.</p>
     */
    inline DescribeJobQueuesResult& WithJobQueues(const Aws::Vector<JobQueueDetail>& value) { SetJobQueues(value); return *this;}

    /**
     * <p>The list of job queues.</p>
     */
    inline DescribeJobQueuesResult& WithJobQueues(Aws::Vector<JobQueueDetail>&& value) { SetJobQueues(std::move(value)); return *this;}

    /**
     * <p>The list of job queues.</p>
     */
    inline DescribeJobQueuesResult& AddJobQueues(const JobQueueDetail& value) { m_jobQueues.push_back(value); return *this; }

    /**
     * <p>The list of job queues.</p>
     */
    inline DescribeJobQueuesResult& AddJobQueues(JobQueueDetail&& value) { m_jobQueues.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobQueueDetail> m_jobQueues;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
