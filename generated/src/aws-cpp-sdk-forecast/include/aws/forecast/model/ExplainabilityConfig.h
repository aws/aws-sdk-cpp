/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/TimeSeriesGranularity.h>
#include <aws/forecast/model/TimePointGranularity.h>
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
   * <p>The ExplainabilityConfig data type defines the number of time series and time
   * points included in <a>CreateExplainability</a>.</p> <p>If you provide a
   * predictor ARN for <code>ResourceArn</code>, you must set both
   * <code>TimePointGranularity</code> and <code>TimeSeriesGranularity</code> to
   * “ALL”. When creating Predictor Explainability, Amazon Forecast considers all
   * time series and time points.</p> <p>If you provide a forecast ARN for
   * <code>ResourceArn</code>, you can set <code>TimePointGranularity</code> and
   * <code>TimeSeriesGranularity</code> to either “ALL” or “Specific”.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ExplainabilityConfig">AWS
   * API Reference</a></p>
   */
  class ExplainabilityConfig
  {
  public:
    AWS_FORECASTSERVICE_API ExplainabilityConfig() = default;
    AWS_FORECASTSERVICE_API ExplainabilityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline TimeSeriesGranularity GetTimeSeriesGranularity() const { return m_timeSeriesGranularity; }
    inline bool TimeSeriesGranularityHasBeenSet() const { return m_timeSeriesGranularityHasBeenSet; }
    inline void SetTimeSeriesGranularity(TimeSeriesGranularity value) { m_timeSeriesGranularityHasBeenSet = true; m_timeSeriesGranularity = value; }
    inline ExplainabilityConfig& WithTimeSeriesGranularity(TimeSeriesGranularity value) { SetTimeSeriesGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline TimePointGranularity GetTimePointGranularity() const { return m_timePointGranularity; }
    inline bool TimePointGranularityHasBeenSet() const { return m_timePointGranularityHasBeenSet; }
    inline void SetTimePointGranularity(TimePointGranularity value) { m_timePointGranularityHasBeenSet = true; m_timePointGranularity = value; }
    inline ExplainabilityConfig& WithTimePointGranularity(TimePointGranularity value) { SetTimePointGranularity(value); return *this;}
    ///@}
  private:

    TimeSeriesGranularity m_timeSeriesGranularity{TimeSeriesGranularity::NOT_SET};
    bool m_timeSeriesGranularityHasBeenSet = false;

    TimePointGranularity m_timePointGranularity{TimePointGranularity::NOT_SET};
    bool m_timePointGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
