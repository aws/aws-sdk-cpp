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
 * <p>Attaches a game to an event clipping output at the action's scheduled time.
 * This is a type of ScheduleActionOperation, and the output must be an event
 * clipping output. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateClippingDataSourceConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateClippingDataSourceConfiguration {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateClippingDataSourceConfiguration() = default;
  AWS_ELEMENTALINFERENCE_API UpdateClippingDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API UpdateClippingDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the output that you want to attach the game to.</p>
   */
  inline const Aws::String& GetOutputName() const { return m_outputName; }
  inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
  template <typename OutputNameT = Aws::String>
  void SetOutputName(OutputNameT&& value) {
    m_outputNameHasBeenSet = true;
    m_outputName = std::forward<OutputNameT>(value);
  }
  template <typename OutputNameT = Aws::String>
  UpdateClippingDataSourceConfiguration& WithOutputName(OutputNameT&& value) {
    SetOutputName(std::forward<OutputNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The game that you want to attach to the output.</p>
   */
  inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
  inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
  template <typename DataSourceConfigurationT = DataSourceConfiguration>
  void SetDataSourceConfiguration(DataSourceConfigurationT&& value) {
    m_dataSourceConfigurationHasBeenSet = true;
    m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value);
  }
  template <typename DataSourceConfigurationT = DataSourceConfiguration>
  UpdateClippingDataSourceConfiguration& WithDataSourceConfiguration(DataSourceConfigurationT&& value) {
    SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputName;

  DataSourceConfiguration m_dataSourceConfiguration;
  bool m_outputNameHasBeenSet = false;
  bool m_dataSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
