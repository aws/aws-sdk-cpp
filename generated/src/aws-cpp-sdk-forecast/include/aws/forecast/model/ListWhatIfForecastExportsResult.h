/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/WhatIfForecastExportSummary.h>
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
  class ListWhatIfForecastExportsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult() = default;
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline const Aws::Vector<WhatIfForecastExportSummary>& GetWhatIfForecastExports() const { return m_whatIfForecastExports; }
    template<typename WhatIfForecastExportsT = Aws::Vector<WhatIfForecastExportSummary>>
    void SetWhatIfForecastExports(WhatIfForecastExportsT&& value) { m_whatIfForecastExportsHasBeenSet = true; m_whatIfForecastExports = std::forward<WhatIfForecastExportsT>(value); }
    template<typename WhatIfForecastExportsT = Aws::Vector<WhatIfForecastExportSummary>>
    ListWhatIfForecastExportsResult& WithWhatIfForecastExports(WhatIfForecastExportsT&& value) { SetWhatIfForecastExports(std::forward<WhatIfForecastExportsT>(value)); return *this;}
    template<typename WhatIfForecastExportsT = WhatIfForecastExportSummary>
    ListWhatIfForecastExportsResult& AddWhatIfForecastExports(WhatIfForecastExportsT&& value) { m_whatIfForecastExportsHasBeenSet = true; m_whatIfForecastExports.emplace_back(std::forward<WhatIfForecastExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWhatIfForecastExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWhatIfForecastExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WhatIfForecastExportSummary> m_whatIfForecastExports;
    bool m_whatIfForecastExportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
