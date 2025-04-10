﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/JsonConfiguration.h>
#include <aws/iotanalytics/model/ParquetConfiguration.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Contains the configuration information of file formats. IoT Analytics data
   * stores support JSON and <a href="https://parquet.apache.org/">Parquet</a>.</p>
   * <p>The default file format is JSON. You can specify only one format.</p> <p>You
   * can't change the file format after you create the data store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/FileFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class FileFormatConfiguration
  {
  public:
    AWS_IOTANALYTICS_API FileFormatConfiguration() = default;
    AWS_IOTANALYTICS_API FileFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API FileFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the configuration information of the JSON format.</p>
     */
    inline const JsonConfiguration& GetJsonConfiguration() const { return m_jsonConfiguration; }
    inline bool JsonConfigurationHasBeenSet() const { return m_jsonConfigurationHasBeenSet; }
    template<typename JsonConfigurationT = JsonConfiguration>
    void SetJsonConfiguration(JsonConfigurationT&& value) { m_jsonConfigurationHasBeenSet = true; m_jsonConfiguration = std::forward<JsonConfigurationT>(value); }
    template<typename JsonConfigurationT = JsonConfiguration>
    FileFormatConfiguration& WithJsonConfiguration(JsonConfigurationT&& value) { SetJsonConfiguration(std::forward<JsonConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of the Parquet format.</p>
     */
    inline const ParquetConfiguration& GetParquetConfiguration() const { return m_parquetConfiguration; }
    inline bool ParquetConfigurationHasBeenSet() const { return m_parquetConfigurationHasBeenSet; }
    template<typename ParquetConfigurationT = ParquetConfiguration>
    void SetParquetConfiguration(ParquetConfigurationT&& value) { m_parquetConfigurationHasBeenSet = true; m_parquetConfiguration = std::forward<ParquetConfigurationT>(value); }
    template<typename ParquetConfigurationT = ParquetConfiguration>
    FileFormatConfiguration& WithParquetConfiguration(ParquetConfigurationT&& value) { SetParquetConfiguration(std::forward<ParquetConfigurationT>(value)); return *this;}
    ///@}
  private:

    JsonConfiguration m_jsonConfiguration;
    bool m_jsonConfigurationHasBeenSet = false;

    ParquetConfiguration m_parquetConfiguration;
    bool m_parquetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
