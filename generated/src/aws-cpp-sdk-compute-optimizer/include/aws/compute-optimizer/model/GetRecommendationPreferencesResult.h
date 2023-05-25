/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationPreferencesDetail.h>
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
  class GetRecommendationPreferencesResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult();
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline GetRecommendationPreferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline GetRecommendationPreferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline GetRecommendationPreferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline const Aws::Vector<RecommendationPreferencesDetail>& GetRecommendationPreferencesDetails() const{ return m_recommendationPreferencesDetails; }

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline void SetRecommendationPreferencesDetails(const Aws::Vector<RecommendationPreferencesDetail>& value) { m_recommendationPreferencesDetails = value; }

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline void SetRecommendationPreferencesDetails(Aws::Vector<RecommendationPreferencesDetail>&& value) { m_recommendationPreferencesDetails = std::move(value); }

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesResult& WithRecommendationPreferencesDetails(const Aws::Vector<RecommendationPreferencesDetail>& value) { SetRecommendationPreferencesDetails(value); return *this;}

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesResult& WithRecommendationPreferencesDetails(Aws::Vector<RecommendationPreferencesDetail>&& value) { SetRecommendationPreferencesDetails(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesResult& AddRecommendationPreferencesDetails(const RecommendationPreferencesDetail& value) { m_recommendationPreferencesDetails.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesResult& AddRecommendationPreferencesDetails(RecommendationPreferencesDetail&& value) { m_recommendationPreferencesDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRecommendationPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRecommendationPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRecommendationPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecommendationPreferencesDetail> m_recommendationPreferencesDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
