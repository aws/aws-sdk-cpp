/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>Configuration settings for vended metrics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/VendedMetricsSettings">AWS
 * API Reference</a></p>
 */
class VendedMetricsSettings {
 public:
  AWS_APPCONFIG_API VendedMetricsSettings() = default;
  AWS_APPCONFIG_API VendedMetricsSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API VendedMetricsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether vended metrics are enabled for the account.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline VendedMetricsSettings& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
