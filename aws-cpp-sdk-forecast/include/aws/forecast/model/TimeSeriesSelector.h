/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/TimeSeriesIdentifiers.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Defines the set of time series that are used to create the forecasts in a
   * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
   * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
   * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
   * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeSeriesSelector">AWS
   * API Reference</a></p>
   */
  class TimeSeriesSelector
  {
  public:
    AWS_FORECASTSERVICE_API TimeSeriesSelector();
    AWS_FORECASTSERVICE_API TimeSeriesSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline const TimeSeriesIdentifiers& GetTimeSeriesIdentifiers() const{ return m_timeSeriesIdentifiers; }

    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline bool TimeSeriesIdentifiersHasBeenSet() const { return m_timeSeriesIdentifiersHasBeenSet; }

    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline void SetTimeSeriesIdentifiers(const TimeSeriesIdentifiers& value) { m_timeSeriesIdentifiersHasBeenSet = true; m_timeSeriesIdentifiers = value; }

    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline void SetTimeSeriesIdentifiers(TimeSeriesIdentifiers&& value) { m_timeSeriesIdentifiersHasBeenSet = true; m_timeSeriesIdentifiers = std::move(value); }

    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline TimeSeriesSelector& WithTimeSeriesIdentifiers(const TimeSeriesIdentifiers& value) { SetTimeSeriesIdentifiers(value); return *this;}

    /**
     * <p>Details about the import file that contains the time series for which you
     * want to create forecasts.</p>
     */
    inline TimeSeriesSelector& WithTimeSeriesIdentifiers(TimeSeriesIdentifiers&& value) { SetTimeSeriesIdentifiers(std::move(value)); return *this;}

  private:

    TimeSeriesIdentifiers m_timeSeriesIdentifiers;
    bool m_timeSeriesIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
