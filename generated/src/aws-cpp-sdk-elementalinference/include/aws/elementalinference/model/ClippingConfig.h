/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/DataSourceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>A type of OutputConfig, used when the output in a feed is for the clip
 * feature.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ClippingConfig">AWS
 * API Reference</a></p>
 */
class ClippingConfig {
 public:
  AWS_ELEMENTALINFERENCE_API ClippingConfig() = default;
  AWS_ELEMENTALINFERENCE_API ClippingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ClippingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A string that you want Elemental Inference to always include in the event
   * clipping metadata for this output. The string might identify the sports event in
   * the source media, for example. </p>
   */
  inline const Aws::String& GetCallbackMetadata() const { return m_callbackMetadata; }
  inline bool CallbackMetadataHasBeenSet() const { return m_callbackMetadataHasBeenSet; }
  template <typename CallbackMetadataT = Aws::String>
  void SetCallbackMetadata(CallbackMetadataT&& value) {
    m_callbackMetadataHasBeenSet = true;
    m_callbackMetadata = std::forward<CallbackMetadataT>(value);
  }
  template <typename CallbackMetadataT = Aws::String>
  ClippingConfig& WithCallbackMetadata(CallbackMetadataT&& value) {
    SetCallbackMetadata(std::forward<CallbackMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source to map onto this clipping output. This parameter is optional.
   * When you include this parameter, Elemental Inference reads the event data for
   * the fixture that you specify, and includes that data in the event clipping
   * metadata for this output. </p> <p>If you omit this parameter, Elemental
   * Inference doesn't map a data source onto this output. </p>
   */
  inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
  inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
  template <typename DataSourceConfigurationT = DataSourceConfiguration>
  void SetDataSourceConfiguration(DataSourceConfigurationT&& value) {
    m_dataSourceConfigurationHasBeenSet = true;
    m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value);
  }
  template <typename DataSourceConfigurationT = DataSourceConfiguration>
  ClippingConfig& WithDataSourceConfiguration(DataSourceConfigurationT&& value) {
    SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callbackMetadata;

  DataSourceConfiguration m_dataSourceConfiguration;
  bool m_callbackMetadataHasBeenSet = false;
  bool m_dataSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
