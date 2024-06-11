﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilitySummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListExplainabilitiesResult
  {
  public:
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult();
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * resource.</p>
     */
    inline const Aws::Vector<ExplainabilitySummary>& GetExplainabilities() const{ return m_explainabilities; }
    inline void SetExplainabilities(const Aws::Vector<ExplainabilitySummary>& value) { m_explainabilities = value; }
    inline void SetExplainabilities(Aws::Vector<ExplainabilitySummary>&& value) { m_explainabilities = std::move(value); }
    inline ListExplainabilitiesResult& WithExplainabilities(const Aws::Vector<ExplainabilitySummary>& value) { SetExplainabilities(value); return *this;}
    inline ListExplainabilitiesResult& WithExplainabilities(Aws::Vector<ExplainabilitySummary>&& value) { SetExplainabilities(std::move(value)); return *this;}
    inline ListExplainabilitiesResult& AddExplainabilities(const ExplainabilitySummary& value) { m_explainabilities.push_back(value); return *this; }
    inline ListExplainabilitiesResult& AddExplainabilities(ExplainabilitySummary&& value) { m_explainabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExplainabilitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExplainabilitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExplainabilitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExplainabilitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExplainabilitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExplainabilitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExplainabilitySummary> m_explainabilities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
