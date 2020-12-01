/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    
    inline ListRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    
    inline ListRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    
    inline ListRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    
    inline ListRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Recommendation> m_recommendations;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
