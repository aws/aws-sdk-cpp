/**
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
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult() = default;
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfForecastsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WhatIfForecasts</code> objects that describe the matched
     * forecasts.</p>
     */
    inline const Aws::Vector<WhatIfForecastSummary>& GetWhatIfForecasts() const { return m_whatIfForecasts; }
    template<typename WhatIfForecastsT = Aws::Vector<WhatIfForecastSummary>>
    void SetWhatIfForecasts(WhatIfForecastsT&& value) { m_whatIfForecastsHasBeenSet = true; m_whatIfForecasts = std::forward<WhatIfForecastsT>(value); }
    template<typename WhatIfForecastsT = Aws::Vector<WhatIfForecastSummary>>
    ListWhatIfForecastsResult& WithWhatIfForecasts(WhatIfForecastsT&& value) { SetWhatIfForecasts(std::forward<WhatIfForecastsT>(value)); return *this;}
    template<typename WhatIfForecastsT = WhatIfForecastSummary>
    ListWhatIfForecastsResult& AddWhatIfForecasts(WhatIfForecastsT&& value) { m_whatIfForecastsHasBeenSet = true; m_whatIfForecasts.emplace_back(std::forward<WhatIfForecastsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next&#x2028; request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWhatIfForecastsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWhatIfForecastsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WhatIfForecastSummary> m_whatIfForecasts;
    bool m_whatIfForecastsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
