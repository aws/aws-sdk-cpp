/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchSegmentJobSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListBatchSegmentJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult();
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline const Aws::Vector<BatchSegmentJobSummary>& GetBatchSegmentJobs() const{ return m_batchSegmentJobs; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline void SetBatchSegmentJobs(const Aws::Vector<BatchSegmentJobSummary>& value) { m_batchSegmentJobs = value; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline void SetBatchSegmentJobs(Aws::Vector<BatchSegmentJobSummary>&& value) { m_batchSegmentJobs = std::move(value); }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchSegmentJobsResult& WithBatchSegmentJobs(const Aws::Vector<BatchSegmentJobSummary>& value) { SetBatchSegmentJobs(value); return *this;}

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchSegmentJobsResult& WithBatchSegmentJobs(Aws::Vector<BatchSegmentJobSummary>&& value) { SetBatchSegmentJobs(std::move(value)); return *this;}

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchSegmentJobsResult& AddBatchSegmentJobs(const BatchSegmentJobSummary& value) { m_batchSegmentJobs.push_back(value); return *this; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchSegmentJobsResult& AddBatchSegmentJobs(BatchSegmentJobSummary&& value) { m_batchSegmentJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchSegmentJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchSegmentJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchSegmentJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchSegmentJobSummary> m_batchSegmentJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
