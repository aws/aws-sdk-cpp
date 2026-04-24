/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAccessControlConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains granular access control configuration for security profiles,
 * including data table access permissions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GranularAccessControlConfiguration">AWS
 * API Reference</a></p>
 */
class GranularAccessControlConfiguration {
 public:
  AWS_CONNECT_API GranularAccessControlConfiguration() = default;
  AWS_CONNECT_API GranularAccessControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API GranularAccessControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access control configuration for data tables.</p>
   */
  inline const DataTableAccessControlConfiguration& GetDataTableAccessControlConfiguration() const {
    return m_dataTableAccessControlConfiguration;
  }
  inline bool DataTableAccessControlConfigurationHasBeenSet() const { return m_dataTableAccessControlConfigurationHasBeenSet; }
  template <typename DataTableAccessControlConfigurationT = DataTableAccessControlConfiguration>
  void SetDataTableAccessControlConfiguration(DataTableAccessControlConfigurationT&& value) {
    m_dataTableAccessControlConfigurationHasBeenSet = true;
    m_dataTableAccessControlConfiguration = std::forward<DataTableAccessControlConfigurationT>(value);
  }
  template <typename DataTableAccessControlConfigurationT = DataTableAccessControlConfiguration>
  GranularAccessControlConfiguration& WithDataTableAccessControlConfiguration(DataTableAccessControlConfigurationT&& value) {
    SetDataTableAccessControlConfiguration(std::forward<DataTableAccessControlConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  DataTableAccessControlConfiguration m_dataTableAccessControlConfiguration;
  bool m_dataTableAccessControlConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
