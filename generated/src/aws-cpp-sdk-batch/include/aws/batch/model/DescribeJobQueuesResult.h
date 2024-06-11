﻿/**
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


    ///@{
    /**
     * <p>The list of job queues.</p>
     */
    inline const Aws::Vector<JobQueueDetail>& GetJobQueues() const{ return m_jobQueues; }
    inline void SetJobQueues(const Aws::Vector<JobQueueDetail>& value) { m_jobQueues = value; }
    inline void SetJobQueues(Aws::Vector<JobQueueDetail>&& value) { m_jobQueues = std::move(value); }
    inline DescribeJobQueuesResult& WithJobQueues(const Aws::Vector<JobQueueDetail>& value) { SetJobQueues(value); return *this;}
    inline DescribeJobQueuesResult& WithJobQueues(Aws::Vector<JobQueueDetail>&& value) { SetJobQueues(std::move(value)); return *this;}
    inline DescribeJobQueuesResult& AddJobQueues(const JobQueueDetail& value) { m_jobQueues.push_back(value); return *this; }
    inline DescribeJobQueuesResult& AddJobQueues(JobQueueDetail&& value) { m_jobQueues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobQueues</code> request. When the results of a
     * <code>DescribeJobQueues</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeJobQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeJobQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeJobQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobQueuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobQueuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobQueuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobQueueDetail> m_jobQueues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
