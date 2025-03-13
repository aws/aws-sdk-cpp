/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/S3Config.h>
#include <aws/forecast/model/Schema.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A replacement dataset is a modified version of the baseline related time
   * series that contains only the values that you want to include in a what-if
   * forecast. The replacement dataset must contain the forecast dimensions and item
   * identifiers in the baseline related time series as well as at least 1 changed
   * time series. This dataset is merged with the baseline related time series to
   * create a transformed dataset that is used for the what-if
   * forecast.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeSeriesReplacementsDataSource">AWS
   * API Reference</a></p>
   */
  class TimeSeriesReplacementsDataSource
  {
  public:
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource() = default;
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    TimeSeriesReplacementsDataSource& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Schema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Schema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Schema>
    TimeSeriesReplacementsDataSource& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    TimeSeriesReplacementsDataSource& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    TimeSeriesReplacementsDataSource& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}
  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
