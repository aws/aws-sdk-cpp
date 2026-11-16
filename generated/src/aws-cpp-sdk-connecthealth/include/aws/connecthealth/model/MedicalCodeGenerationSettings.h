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
 * <p>Settings for generating medical codes from the clinical note after the
 * session ends. Medical code generation is in preview release and is subject to
 * change. Medical code generation is available in the US East (N. Virginia) and US
 * West (Oregon) AWS Regions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodeGenerationSettings">AWS
 * API Reference</a></p>
 */
class MedicalCodeGenerationSettings {
 public:
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettings() = default;
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodeGenerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to generate medical codes for the session. If you set this
   * to true, the service generates medical codes from the clinical note after the
   * session ends, using your permissions for medical coding, the output Amazon S3
   * location, and the AWS KMS key. You can set this to true only in a Region where
   * medical code generation is available. To provide a medicalCodingContext, you
   * must set this to true.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline MedicalCodeGenerationSettings& WithEnabled(bool value) {
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
