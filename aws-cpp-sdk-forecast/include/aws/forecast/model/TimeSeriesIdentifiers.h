/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/DataSource.h>
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
   * <p>Details about the import file that contains the time series for which you
   * want to create forecasts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeSeriesIdentifiers">AWS
   * API Reference</a></p>
   */
  class TimeSeriesIdentifiers
  {
  public:
    AWS_FORECASTSERVICE_API TimeSeriesIdentifiers();
    AWS_FORECASTSERVICE_API TimeSeriesIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    
    inline TimeSeriesIdentifiers& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    
    inline TimeSeriesIdentifiers& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    
    inline const Schema& GetSchema() const{ return m_schema; }

    
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    
    inline TimeSeriesIdentifiers& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    
    inline TimeSeriesIdentifiers& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline TimeSeriesIdentifiers& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline TimeSeriesIdentifiers& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the data, either CSV or PARQUET.</p>
     */
    inline TimeSeriesIdentifiers& WithFormat(const char* value) { SetFormat(value); return *this;}

  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
