﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/Recommendation.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API ListRecommendationsResult
  {
  public:
    ListRecommendationsResult();
    ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline ListRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline ListRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline ListRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline ListRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Recommendation> m_recommendations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
