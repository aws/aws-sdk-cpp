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
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult();
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfForecastExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline const Aws::Vector<WhatIfForecastExportSummary>& GetWhatIfForecastExports() const{ return m_whatIfForecastExports; }

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline void SetWhatIfForecastExports(const Aws::Vector<WhatIfForecastExportSummary>& value) { m_whatIfForecastExports = value; }

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline void SetWhatIfForecastExports(Aws::Vector<WhatIfForecastExportSummary>&& value) { m_whatIfForecastExports = std::move(value); }

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline ListWhatIfForecastExportsResult& WithWhatIfForecastExports(const Aws::Vector<WhatIfForecastExportSummary>& value) { SetWhatIfForecastExports(value); return *this;}

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline ListWhatIfForecastExportsResult& WithWhatIfForecastExports(Aws::Vector<WhatIfForecastExportSummary>&& value) { SetWhatIfForecastExports(std::move(value)); return *this;}

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline ListWhatIfForecastExportsResult& AddWhatIfForecastExports(const WhatIfForecastExportSummary& value) { m_whatIfForecastExports.push_back(value); return *this; }

    /**
     * <p>An array of <code>WhatIfForecastExports</code> objects that describe the
     * matched forecast exports.</p>
     */
    inline ListWhatIfForecastExportsResult& AddWhatIfForecastExports(WhatIfForecastExportSummary&& value) { m_whatIfForecastExports.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListWhatIfForecastExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListWhatIfForecastExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListWhatIfForecastExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WhatIfForecastExportSummary> m_whatIfForecastExports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
