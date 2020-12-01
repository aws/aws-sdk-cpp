/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ProactiveAnomalySummary.h>
#include <aws/devops-guru/model/ReactiveAnomalySummary.h>
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
  class AWS_DEVOPSGURU_API ListAnomaliesForInsightResult
  {
  public:
    ListAnomaliesForInsightResult();
    ListAnomaliesForInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAnomaliesForInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAnomaliesForInsightResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAnomaliesForInsightResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAnomaliesForInsightResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<ProactiveAnomalySummary>& GetProactiveAnomalies() const{ return m_proactiveAnomalies; }

    
    inline void SetProactiveAnomalies(const Aws::Vector<ProactiveAnomalySummary>& value) { m_proactiveAnomalies = value; }

    
    inline void SetProactiveAnomalies(Aws::Vector<ProactiveAnomalySummary>&& value) { m_proactiveAnomalies = std::move(value); }

    
    inline ListAnomaliesForInsightResult& WithProactiveAnomalies(const Aws::Vector<ProactiveAnomalySummary>& value) { SetProactiveAnomalies(value); return *this;}

    
    inline ListAnomaliesForInsightResult& WithProactiveAnomalies(Aws::Vector<ProactiveAnomalySummary>&& value) { SetProactiveAnomalies(std::move(value)); return *this;}

    
    inline ListAnomaliesForInsightResult& AddProactiveAnomalies(const ProactiveAnomalySummary& value) { m_proactiveAnomalies.push_back(value); return *this; }

    
    inline ListAnomaliesForInsightResult& AddProactiveAnomalies(ProactiveAnomalySummary&& value) { m_proactiveAnomalies.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<ReactiveAnomalySummary>& GetReactiveAnomalies() const{ return m_reactiveAnomalies; }

    
    inline void SetReactiveAnomalies(const Aws::Vector<ReactiveAnomalySummary>& value) { m_reactiveAnomalies = value; }

    
    inline void SetReactiveAnomalies(Aws::Vector<ReactiveAnomalySummary>&& value) { m_reactiveAnomalies = std::move(value); }

    
    inline ListAnomaliesForInsightResult& WithReactiveAnomalies(const Aws::Vector<ReactiveAnomalySummary>& value) { SetReactiveAnomalies(value); return *this;}

    
    inline ListAnomaliesForInsightResult& WithReactiveAnomalies(Aws::Vector<ReactiveAnomalySummary>&& value) { SetReactiveAnomalies(std::move(value)); return *this;}

    
    inline ListAnomaliesForInsightResult& AddReactiveAnomalies(const ReactiveAnomalySummary& value) { m_reactiveAnomalies.push_back(value); return *this; }

    
    inline ListAnomaliesForInsightResult& AddReactiveAnomalies(ReactiveAnomalySummary&& value) { m_reactiveAnomalies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProactiveAnomalySummary> m_proactiveAnomalies;

    Aws::Vector<ReactiveAnomalySummary> m_reactiveAnomalies;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
