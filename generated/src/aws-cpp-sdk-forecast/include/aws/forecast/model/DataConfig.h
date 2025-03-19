/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/AttributeConfig.h>
#include <aws/forecast/model/AdditionalDataset.h>
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
   * <p>The data configuration for your dataset group and any additional
   * datasets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DataConfig">AWS
   * API Reference</a></p>
   */
  class DataConfig
  {
  public:
    AWS_FORECASTSERVICE_API DataConfig() = default;
    AWS_FORECASTSERVICE_API DataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the dataset group used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    DataConfig& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation and filling options for attributes in your dataset group.</p>
     */
    inline const Aws::Vector<AttributeConfig>& GetAttributeConfigs() const { return m_attributeConfigs; }
    inline bool AttributeConfigsHasBeenSet() const { return m_attributeConfigsHasBeenSet; }
    template<typename AttributeConfigsT = Aws::Vector<AttributeConfig>>
    void SetAttributeConfigs(AttributeConfigsT&& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs = std::forward<AttributeConfigsT>(value); }
    template<typename AttributeConfigsT = Aws::Vector<AttributeConfig>>
    DataConfig& WithAttributeConfigs(AttributeConfigsT&& value) { SetAttributeConfigs(std::forward<AttributeConfigsT>(value)); return *this;}
    template<typename AttributeConfigsT = AttributeConfig>
    DataConfig& AddAttributeConfigs(AttributeConfigsT&& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs.emplace_back(std::forward<AttributeConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional built-in datasets like Holidays and the Weather Index.</p>
     */
    inline const Aws::Vector<AdditionalDataset>& GetAdditionalDatasets() const { return m_additionalDatasets; }
    inline bool AdditionalDatasetsHasBeenSet() const { return m_additionalDatasetsHasBeenSet; }
    template<typename AdditionalDatasetsT = Aws::Vector<AdditionalDataset>>
    void SetAdditionalDatasets(AdditionalDatasetsT&& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets = std::forward<AdditionalDatasetsT>(value); }
    template<typename AdditionalDatasetsT = Aws::Vector<AdditionalDataset>>
    DataConfig& WithAdditionalDatasets(AdditionalDatasetsT&& value) { SetAdditionalDatasets(std::forward<AdditionalDatasetsT>(value)); return *this;}
    template<typename AdditionalDatasetsT = AdditionalDataset>
    DataConfig& AddAdditionalDatasets(AdditionalDatasetsT&& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets.emplace_back(std::forward<AdditionalDatasetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<AttributeConfig> m_attributeConfigs;
    bool m_attributeConfigsHasBeenSet = false;

    Aws::Vector<AdditionalDataset> m_additionalDatasets;
    bool m_additionalDatasetsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
