﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/WhatIfForecastSummary.h>
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
  class ListWhatIfForecastsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult();
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WhatIfForecasts</code> objects that describe the matched
     * forecasts.</p>
     */
    inline const Aws::Vector<WhatIfForecastSummary>& GetWhatIfForecasts() const{ return m_whatIfForecasts; }
    inline void SetWhatIfForecasts(const Aws::Vector<WhatIfForecastSummary>& value) { m_whatIfForecasts = value; }
    inline void SetWhatIfForecasts(Aws::Vector<WhatIfForecastSummary>&& value) { m_whatIfForecasts = std::move(value); }
    inline ListWhatIfForecastsResult& WithWhatIfForecasts(const Aws::Vector<WhatIfForecastSummary>& value) { SetWhatIfForecasts(value); return *this;}
    inline ListWhatIfForecastsResult& WithWhatIfForecasts(Aws::Vector<WhatIfForecastSummary>&& value) { SetWhatIfForecasts(std::move(value)); return *this;}
    inline ListWhatIfForecastsResult& AddWhatIfForecasts(const WhatIfForecastSummary& value) { m_whatIfForecasts.push_back(value); return *this; }
    inline ListWhatIfForecastsResult& AddWhatIfForecasts(WhatIfForecastSummary&& value) { m_whatIfForecasts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next&#x2028; request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWhatIfForecastsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWhatIfForecastsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWhatIfForecastsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWhatIfForecastsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWhatIfForecastsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWhatIfForecastsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WhatIfForecastSummary> m_whatIfForecasts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
