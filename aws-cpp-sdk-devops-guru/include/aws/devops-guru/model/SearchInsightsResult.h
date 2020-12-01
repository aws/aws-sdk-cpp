/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ProactiveInsightSummary.h>
#include <aws/devops-guru/model/ReactiveInsightSummary.h>
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
  class AWS_DEVOPSGURU_API SearchInsightsResult
  {
  public:
    SearchInsightsResult();
    SearchInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline SearchInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline SearchInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline SearchInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<ProactiveInsightSummary>& GetProactiveInsights() const{ return m_proactiveInsights; }

    
    inline void SetProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { m_proactiveInsights = value; }

    
    inline void SetProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { m_proactiveInsights = std::move(value); }

    
    inline SearchInsightsResult& WithProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { SetProactiveInsights(value); return *this;}

    
    inline SearchInsightsResult& WithProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { SetProactiveInsights(std::move(value)); return *this;}

    
    inline SearchInsightsResult& AddProactiveInsights(const ProactiveInsightSummary& value) { m_proactiveInsights.push_back(value); return *this; }

    
    inline SearchInsightsResult& AddProactiveInsights(ProactiveInsightSummary&& value) { m_proactiveInsights.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<ReactiveInsightSummary>& GetReactiveInsights() const{ return m_reactiveInsights; }

    
    inline void SetReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { m_reactiveInsights = value; }

    
    inline void SetReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { m_reactiveInsights = std::move(value); }

    
    inline SearchInsightsResult& WithReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { SetReactiveInsights(value); return *this;}

    
    inline SearchInsightsResult& WithReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { SetReactiveInsights(std::move(value)); return *this;}

    
    inline SearchInsightsResult& AddReactiveInsights(const ReactiveInsightSummary& value) { m_reactiveInsights.push_back(value); return *this; }

    
    inline SearchInsightsResult& AddReactiveInsights(ReactiveInsightSummary&& value) { m_reactiveInsights.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProactiveInsightSummary> m_proactiveInsights;

    Aws::Vector<ReactiveInsightSummary> m_reactiveInsights;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
