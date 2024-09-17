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
    AWS_FORECASTSERVICE_API DataConfig();
    AWS_FORECASTSERVICE_API DataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the dataset group used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline DataConfig& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline DataConfig& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline DataConfig& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation and filling options for attributes in your dataset group.</p>
     */
    inline const Aws::Vector<AttributeConfig>& GetAttributeConfigs() const{ return m_attributeConfigs; }
    inline bool AttributeConfigsHasBeenSet() const { return m_attributeConfigsHasBeenSet; }
    inline void SetAttributeConfigs(const Aws::Vector<AttributeConfig>& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs = value; }
    inline void SetAttributeConfigs(Aws::Vector<AttributeConfig>&& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs = std::move(value); }
    inline DataConfig& WithAttributeConfigs(const Aws::Vector<AttributeConfig>& value) { SetAttributeConfigs(value); return *this;}
    inline DataConfig& WithAttributeConfigs(Aws::Vector<AttributeConfig>&& value) { SetAttributeConfigs(std::move(value)); return *this;}
    inline DataConfig& AddAttributeConfigs(const AttributeConfig& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs.push_back(value); return *this; }
    inline DataConfig& AddAttributeConfigs(AttributeConfig&& value) { m_attributeConfigsHasBeenSet = true; m_attributeConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional built-in datasets like Holidays and the Weather Index.</p>
     */
    inline const Aws::Vector<AdditionalDataset>& GetAdditionalDatasets() const{ return m_additionalDatasets; }
    inline bool AdditionalDatasetsHasBeenSet() const { return m_additionalDatasetsHasBeenSet; }
    inline void SetAdditionalDatasets(const Aws::Vector<AdditionalDataset>& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets = value; }
    inline void SetAdditionalDatasets(Aws::Vector<AdditionalDataset>&& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets = std::move(value); }
    inline DataConfig& WithAdditionalDatasets(const Aws::Vector<AdditionalDataset>& value) { SetAdditionalDatasets(value); return *this;}
    inline DataConfig& WithAdditionalDatasets(Aws::Vector<AdditionalDataset>&& value) { SetAdditionalDatasets(std::move(value)); return *this;}
    inline DataConfig& AddAdditionalDatasets(const AdditionalDataset& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets.push_back(value); return *this; }
    inline DataConfig& AddAdditionalDatasets(AdditionalDataset&& value) { m_additionalDatasetsHasBeenSet = true; m_additionalDatasets.push_back(std::move(value)); return *this; }
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
