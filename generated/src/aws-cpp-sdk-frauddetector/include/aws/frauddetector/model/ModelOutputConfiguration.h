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
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration() = default;
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the model output configuration.</p>
     */
    inline ModelOutputDataFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ModelOutputDataFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ModelOutputConfiguration& WithFormat(ModelOutputDataFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of JSON keys in response from SageMaker to the Amazon Fraud Detector
     * variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJsonKeyToVariableMap() const { return m_jsonKeyToVariableMap; }
    inline bool JsonKeyToVariableMapHasBeenSet() const { return m_jsonKeyToVariableMapHasBeenSet; }
    template<typename JsonKeyToVariableMapT = Aws::Map<Aws::String, Aws::String>>
    void SetJsonKeyToVariableMap(JsonKeyToVariableMapT&& value) { m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap = std::forward<JsonKeyToVariableMapT>(value); }
    template<typename JsonKeyToVariableMapT = Aws::Map<Aws::String, Aws::String>>
    ModelOutputConfiguration& WithJsonKeyToVariableMap(JsonKeyToVariableMapT&& value) { SetJsonKeyToVariableMap(std::forward<JsonKeyToVariableMapT>(value)); return *this;}
    template<typename JsonKeyToVariableMapKeyT = Aws::String, typename JsonKeyToVariableMapValueT = Aws::String>
    ModelOutputConfiguration& AddJsonKeyToVariableMap(JsonKeyToVariableMapKeyT&& key, JsonKeyToVariableMapValueT&& value) {
      m_jsonKeyToVariableMapHasBeenSet = true; m_jsonKeyToVariableMap.emplace(std::forward<JsonKeyToVariableMapKeyT>(key), std::forward<JsonKeyToVariableMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of CSV index values in the SageMaker response to the Amazon Fraud
     * Detector variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCsvIndexToVariableMap() const { return m_csvIndexToVariableMap; }
    inline bool CsvIndexToVariableMapHasBeenSet() const { return m_csvIndexToVariableMapHasBeenSet; }
    template<typename CsvIndexToVariableMapT = Aws::Map<Aws::String, Aws::String>>
    void SetCsvIndexToVariableMap(CsvIndexToVariableMapT&& value) { m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap = std::forward<CsvIndexToVariableMapT>(value); }
    template<typename CsvIndexToVariableMapT = Aws::Map<Aws::String, Aws::String>>
    ModelOutputConfiguration& WithCsvIndexToVariableMap(CsvIndexToVariableMapT&& value) { SetCsvIndexToVariableMap(std::forward<CsvIndexToVariableMapT>(value)); return *this;}
    template<typename CsvIndexToVariableMapKeyT = Aws::String, typename CsvIndexToVariableMapValueT = Aws::String>
    ModelOutputConfiguration& AddCsvIndexToVariableMap(CsvIndexToVariableMapKeyT&& key, CsvIndexToVariableMapValueT&& value) {
      m_csvIndexToVariableMapHasBeenSet = true; m_csvIndexToVariableMap.emplace(std::forward<CsvIndexToVariableMapKeyT>(key), std::forward<CsvIndexToVariableMapValueT>(value)); return *this;
    }
    ///@}
  private:

    ModelOutputDataFormat m_format{ModelOutputDataFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jsonKeyToVariableMap;
    bool m_jsonKeyToVariableMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_csvIndexToVariableMap;
    bool m_csvIndexToVariableMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
