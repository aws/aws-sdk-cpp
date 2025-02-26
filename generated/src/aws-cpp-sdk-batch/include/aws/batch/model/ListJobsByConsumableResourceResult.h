/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ListJobsByConsumableResourceSummary.h>
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
  class ListJobsByConsumableResourceResult
  {
  public:
    AWS_BATCH_API ListJobsByConsumableResourceResult();
    AWS_BATCH_API ListJobsByConsumableResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListJobsByConsumableResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of jobs that require the specified consumable resources.</p>
     */
    inline const Aws::Vector<ListJobsByConsumableResourceSummary>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<ListJobsByConsumableResourceSummary>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<ListJobsByConsumableResourceSummary>&& value) { m_jobs = std::move(value); }
    inline ListJobsByConsumableResourceResult& WithJobs(const Aws::Vector<ListJobsByConsumableResourceSummary>& value) { SetJobs(value); return *this;}
    inline ListJobsByConsumableResourceResult& WithJobs(Aws::Vector<ListJobsByConsumableResourceSummary>&& value) { SetJobs(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceResult& AddJobs(const ListJobsByConsumableResourceSummary& value) { m_jobs.push_back(value); return *this; }
    inline ListJobsByConsumableResourceResult& AddJobs(ListJobsByConsumableResourceSummary&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListJobsByConsumableResource</code> request. When the results of a
     * <code>ListJobsByConsumableResource</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobsByConsumableResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobsByConsumableResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobsByConsumableResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobsByConsumableResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListJobsByConsumableResourceSummary> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
