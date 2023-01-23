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
    AWS_FORECASTSERVICE_API ExplainabilityConfig();
    AWS_FORECASTSERVICE_API ExplainabilityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline const TimeSeriesGranularity& GetTimeSeriesGranularity() const{ return m_timeSeriesGranularity; }

    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline bool TimeSeriesGranularityHasBeenSet() const { return m_timeSeriesGranularityHasBeenSet; }

    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline void SetTimeSeriesGranularity(const TimeSeriesGranularity& value) { m_timeSeriesGranularityHasBeenSet = true; m_timeSeriesGranularity = value; }

    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline void SetTimeSeriesGranularity(TimeSeriesGranularity&& value) { m_timeSeriesGranularityHasBeenSet = true; m_timeSeriesGranularity = std::move(value); }

    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline ExplainabilityConfig& WithTimeSeriesGranularity(const TimeSeriesGranularity& value) { SetTimeSeriesGranularity(value); return *this;}

    /**
     * <p>To create an Explainability for all time series in your datasets, use
     * <code>ALL</code>. To create an Explainability for specific time series in your
     * datasets, use <code>SPECIFIC</code>.</p> <p>Specify time series by uploading a
     * CSV or Parquet file to an Amazon S3 bucket and set the location within the
     * <a>DataDestination</a> data type.</p>
     */
    inline ExplainabilityConfig& WithTimeSeriesGranularity(TimeSeriesGranularity&& value) { SetTimeSeriesGranularity(std::move(value)); return *this;}


    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline const TimePointGranularity& GetTimePointGranularity() const{ return m_timePointGranularity; }

    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline bool TimePointGranularityHasBeenSet() const { return m_timePointGranularityHasBeenSet; }

    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline void SetTimePointGranularity(const TimePointGranularity& value) { m_timePointGranularityHasBeenSet = true; m_timePointGranularity = value; }

    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline void SetTimePointGranularity(TimePointGranularity&& value) { m_timePointGranularityHasBeenSet = true; m_timePointGranularity = std::move(value); }

    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline ExplainabilityConfig& WithTimePointGranularity(const TimePointGranularity& value) { SetTimePointGranularity(value); return *this;}

    /**
     * <p>To create an Explainability for all time points in your forecast horizon, use
     * <code>ALL</code>. To create an Explainability for specific time points in your
     * forecast horizon, use <code>SPECIFIC</code>.</p> <p>Specify time points with the
     * <code>StartDateTime</code> and <code>EndDateTime</code> parameters within the
     * <a>CreateExplainability</a> operation.</p>
     */
    inline ExplainabilityConfig& WithTimePointGranularity(TimePointGranularity&& value) { SetTimePointGranularity(std::move(value)); return *this;}

  private:

    TimeSeriesGranularity m_timeSeriesGranularity;
    bool m_timeSeriesGranularityHasBeenSet = false;

    TimePointGranularity m_timePointGranularity;
    bool m_timePointGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
