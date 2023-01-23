/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/RecommendationSummary.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class ListRecommendationsResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult();
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetRecommendationSummaries() const{ return m_recommendationSummaries; }

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline void SetRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { m_recommendationSummaries = value; }

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline void SetRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { m_recommendationSummaries = std::move(value); }

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline ListRecommendationsResult& WithRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { SetRecommendationSummaries(value); return *this;}

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline ListRecommendationsResult& WithRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { SetRecommendationSummaries(std::move(value)); return *this;}

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline ListRecommendationsResult& AddRecommendationSummaries(const RecommendationSummary& value) { m_recommendationSummaries.push_back(value); return *this; }

    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline ListRecommendationsResult& AddRecommendationSummaries(RecommendationSummary&& value) { m_recommendationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RecommendationSummary> m_recommendationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
