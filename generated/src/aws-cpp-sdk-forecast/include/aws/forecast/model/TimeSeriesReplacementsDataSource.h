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
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource();
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesReplacementsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    
    inline TimeSeriesReplacementsDataSource& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline TimeSeriesReplacementsDataSource& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    
    inline const Schema& GetSchema() const{ return m_schema; }

    
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    
    inline TimeSeriesReplacementsDataSource& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    
    inline TimeSeriesReplacementsDataSource& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the replacement data, CSV or PARQUET.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = value; }

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::move(value); }

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormatHasBeenSet = true; m_timestampFormat.assign(value); }

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The timestamp format of the replacement data.</p>
     */
    inline TimeSeriesReplacementsDataSource& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}

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
