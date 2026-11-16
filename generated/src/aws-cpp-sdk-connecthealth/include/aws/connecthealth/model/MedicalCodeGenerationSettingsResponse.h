/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Response containing settings for medical code generation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodeGenerationSettingsResponse">AWS
 * API Reference</a></p>
 */
class MedicalCodeGenerationSettingsResponse {
 public:
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettingsResponse() = default;
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether medical code generation was requested for the session.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline MedicalCodeGenerationSettingsResponse& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
