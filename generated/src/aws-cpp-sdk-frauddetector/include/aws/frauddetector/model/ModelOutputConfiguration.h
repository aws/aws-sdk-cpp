/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/ModelOutputDataFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>Provides the Amazon Sagemaker model output configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelOutputConfiguration
  {
  public:
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration();
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the model output configuration.</p>
     */
    inline const ModelOutputDataFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const ModelOutputDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(ModelOutputDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline ModelOutputConfiguration& WithFormat(const ModelOutputDataFormat& value) { SetFormat(value); return *this;}
    inline ModelOutputConfiguration& WithFormat(ModelOutputDataFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of JSON keys in response from SageMaker to the Amazon Fraud Detector
     * variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJsonKeyToVariableMap() const{ return m_jsonKeyToVariableMap; }
    inline bool JsonKeyToVariableMapHasBeenSet() const { return m_jsonKeyToVariableMapHasBeenSet; }
    inline void SetJsonKeyToVariableMap(const Aws::Map<Aws::String, Aws::String>& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap = value; }
    inline void SetJsonKeyToVariableMap(Aws::Map<Aws::String, Aws::String>&& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap = std::move(value); }
    inline ModelOutputConfiguration& WithJsonKeyToVariableMap(const Aws::Map<Aws::String, Aws::String>& value) { SetJsonKeyToVariableMap(value); return *this;}
    inline ModelOutputConfiguration& WithJsonKeyToVariableMap(Aws::Map<Aws::String, Aws::String>&& value) { SetJsonKeyToVariableMap(std::move(value)); return *this;}
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(const Aws::String& key, const Aws::String& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(key, value); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(Aws::String&& key, const Aws::String& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(std::move(key), value); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(const Aws::String& key, Aws::String&& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(key, std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(Aws::String&& key, Aws::String&& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(const char* key, Aws::String&& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(key, std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(Aws::String&& key, const char* value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(std::move(key), value); return *this; }
    inline ModelOutputConfiguration& AddJsonKeyToVariableMap(const char* key, const char* value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of CSV index values in the SageMaker response to the Amazon Fraud
     * Detector variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCsvIndexToVariableMap() const{ return m_csvIndexToVariableMap; }
    inline bool CsvIndexToVariableMapHasBeenSet() const { return m_csvIndexToVariableMapHasBeenSet; }
    inline void SetCsvIndexToVariableMap(const Aws::Map<Aws::String, Aws::String>& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap = value; }
    inline void SetCsvIndexToVariableMap(Aws::Map<Aws::String, Aws::String>&& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap = std::move(value); }
    inline ModelOutputConfiguration& WithCsvIndexToVariableMap(const Aws::Map<Aws::String, Aws::String>& value) { SetCsvIndexToVariableMap(value); return *this;}
    inline ModelOutputConfiguration& WithCsvIndexToVariableMap(Aws::Map<Aws::String, Aws::String>&& value) { SetCsvIndexToVariableMap(std::move(value)); return *this;}
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(const Aws::String& key, const Aws::String& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(key, value); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(Aws::String&& key, const Aws::String& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(std::move(key), value); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(const Aws::String& key, Aws::String&& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(key, std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(Aws::String&& key, Aws::String&& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(std::move(key), std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(const char* key, Aws::String&& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(key, std::move(value)); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(Aws::String&& key, const char* value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(std::move(key), value); return *this; }
    inline ModelOutputConfiguration& AddCsvIndexToVariableMap(const char* key, const char* value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(key, value); return *this; }
    ///@}
  private:

    ModelOutputDataFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jsonKeyToVariableMap;
    bool m_jsonKeyToVariableMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_csvIndexToVariableMap;
    bool m_csvIndexToVariableMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
