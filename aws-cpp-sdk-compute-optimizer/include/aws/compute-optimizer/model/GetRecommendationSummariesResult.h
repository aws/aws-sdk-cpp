/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationSummary.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetRecommendationSummariesResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult();
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline GetRecommendationSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline GetRecommendationSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline GetRecommendationSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetRecommendationSummaries() const{ return m_recommendationSummaries; }

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline void SetRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { m_recommendationSummaries = value; }

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline void SetRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { m_recommendationSummaries = std::move(value); }

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline GetRecommendationSummariesResult& WithRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { SetRecommendationSummaries(value); return *this;}

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline GetRecommendationSummariesResult& WithRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { SetRecommendationSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline GetRecommendationSummariesResult& AddRecommendationSummaries(const RecommendationSummary& value) { m_recommendationSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline GetRecommendationSummariesResult& AddRecommendationSummaries(RecommendationSummary&& value) { m_recommendationSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecommendationSummary> m_recommendationSummaries;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
