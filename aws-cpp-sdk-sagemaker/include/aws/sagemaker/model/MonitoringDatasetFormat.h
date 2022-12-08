/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringCsvDatasetFormat.h>
#include <aws/sagemaker/model/MonitoringJsonDatasetFormat.h>
#include <aws/sagemaker/model/MonitoringParquetDatasetFormat.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the dataset format used when running a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringDatasetFormat">AWS
   * API Reference</a></p>
   */
  class MonitoringDatasetFormat
  {
  public:
    AWS_SAGEMAKER_API MonitoringDatasetFormat();
    AWS_SAGEMAKER_API MonitoringDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline const MonitoringCsvDatasetFormat& GetCsv() const{ return m_csv; }

    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }

    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline void SetCsv(const MonitoringCsvDatasetFormat& value) { m_csvHasBeenSet = true; m_csv = value; }

    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline void SetCsv(MonitoringCsvDatasetFormat&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }

    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline MonitoringDatasetFormat& WithCsv(const MonitoringCsvDatasetFormat& value) { SetCsv(value); return *this;}

    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline MonitoringDatasetFormat& WithCsv(MonitoringCsvDatasetFormat&& value) { SetCsv(std::move(value)); return *this;}


    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline const MonitoringJsonDatasetFormat& GetJson() const{ return m_json; }

    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }

    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline void SetJson(const MonitoringJsonDatasetFormat& value) { m_jsonHasBeenSet = true; m_json = value; }

    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline void SetJson(MonitoringJsonDatasetFormat&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }

    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline MonitoringDatasetFormat& WithJson(const MonitoringJsonDatasetFormat& value) { SetJson(value); return *this;}

    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline MonitoringDatasetFormat& WithJson(MonitoringJsonDatasetFormat&& value) { SetJson(std::move(value)); return *this;}


    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline const MonitoringParquetDatasetFormat& GetParquet() const{ return m_parquet; }

    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }

    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline void SetParquet(const MonitoringParquetDatasetFormat& value) { m_parquetHasBeenSet = true; m_parquet = value; }

    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline void SetParquet(MonitoringParquetDatasetFormat&& value) { m_parquetHasBeenSet = true; m_parquet = std::move(value); }

    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline MonitoringDatasetFormat& WithParquet(const MonitoringParquetDatasetFormat& value) { SetParquet(value); return *this;}

    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline MonitoringDatasetFormat& WithParquet(MonitoringParquetDatasetFormat&& value) { SetParquet(std::move(value)); return *this;}

  private:

    MonitoringCsvDatasetFormat m_csv;
    bool m_csvHasBeenSet = false;

    MonitoringJsonDatasetFormat m_json;
    bool m_jsonHasBeenSet = false;

    MonitoringParquetDatasetFormat m_parquet;
    bool m_parquetHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
