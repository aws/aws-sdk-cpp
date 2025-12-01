/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PrimaryAttributeAccessControlConfigurationItem.h>

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
 * <p>A data table access control configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableAccessControlConfiguration">AWS
 * API Reference</a></p>
 */
class DataTableAccessControlConfiguration {
 public:
  AWS_CONNECT_API DataTableAccessControlConfiguration() = default;
  AWS_CONNECT_API DataTableAccessControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableAccessControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration's primary attribute access control configuration.</p>
   */
  inline const PrimaryAttributeAccessControlConfigurationItem& GetPrimaryAttributeAccessControlConfiguration() const {
    return m_primaryAttributeAccessControlConfiguration;
  }
  inline bool PrimaryAttributeAccessControlConfigurationHasBeenSet() const {
    return m_primaryAttributeAccessControlConfigurationHasBeenSet;
  }
  template <typename PrimaryAttributeAccessControlConfigurationT = PrimaryAttributeAccessControlConfigurationItem>
  void SetPrimaryAttributeAccessControlConfiguration(PrimaryAttributeAccessControlConfigurationT&& value) {
    m_primaryAttributeAccessControlConfigurationHasBeenSet = true;
    m_primaryAttributeAccessControlConfiguration = std::forward<PrimaryAttributeAccessControlConfigurationT>(value);
  }
  template <typename PrimaryAttributeAccessControlConfigurationT = PrimaryAttributeAccessControlConfigurationItem>
  DataTableAccessControlConfiguration& WithPrimaryAttributeAccessControlConfiguration(PrimaryAttributeAccessControlConfigurationT&& value) {
    SetPrimaryAttributeAccessControlConfiguration(std::forward<PrimaryAttributeAccessControlConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  PrimaryAttributeAccessControlConfigurationItem m_primaryAttributeAccessControlConfiguration;
  bool m_primaryAttributeAccessControlConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
