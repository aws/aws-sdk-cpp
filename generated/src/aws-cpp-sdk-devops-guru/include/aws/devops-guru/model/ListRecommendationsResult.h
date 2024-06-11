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
  class ListRecommendationsResult
  {
  public:
    AWS_DEVOPSGURU_API ListRecommendationsResult();
    AWS_DEVOPSGURU_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of the requested recommendations. </p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }
    inline ListRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}
    inline ListRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}
    inline ListRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }
    inline ListRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Recommendation> m_recommendations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
