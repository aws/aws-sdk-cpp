/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/CodeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>The loose variant of the passcode policy parameters that is used only when
 * you update a notify code configuration. When you omit a member, its current
 * value is preserved.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateCodeConfigurationParameters">AWS
 * API Reference</a></p>
 */
class UpdateCodeConfigurationParameters {
 public:
  AWS_ENDUSERMESSAGING_API UpdateCodeConfigurationParameters() = default;
  AWS_ENDUSERMESSAGING_API UpdateCodeConfigurationParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API UpdateCodeConfigurationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated character set used to generate the one-time passcode. Omit this
   * member to preserve the current value.</p>
   */
  inline CodeType GetCodeType() const { return m_codeType; }
  inline bool CodeTypeHasBeenSet() const { return m_codeTypeHasBeenSet; }
  inline void SetCodeType(CodeType value) {
    m_codeTypeHasBeenSet = true;
    m_codeType = value;
  }
  inline UpdateCodeConfigurationParameters& WithCodeType(CodeType value) {
    SetCodeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated number of characters in the one-time passcode. Valid values range
   * from 4 through 8. Omit this member to preserve the current value.</p>
   */
  inline int GetCodeLength() const { return m_codeLength; }
  inline bool CodeLengthHasBeenSet() const { return m_codeLengthHasBeenSet; }
  inline void SetCodeLength(int value) {
    m_codeLengthHasBeenSet = true;
    m_codeLength = value;
  }
  inline UpdateCodeConfigurationParameters& WithCodeLength(int value) {
    SetCodeLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated length of time, in minutes, that the one-time passcode remains
   * valid. Valid values range from 1 through 60. Omit this member to preserve the
   * current value.</p>
   */
  inline int GetValidityPeriodMinutes() const { return m_validityPeriodMinutes; }
  inline bool ValidityPeriodMinutesHasBeenSet() const { return m_validityPeriodMinutesHasBeenSet; }
  inline void SetValidityPeriodMinutes(int value) {
    m_validityPeriodMinutesHasBeenSet = true;
    m_validityPeriodMinutes = value;
  }
  inline UpdateCodeConfigurationParameters& WithValidityPeriodMinutes(int value) {
    SetValidityPeriodMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated maximum number of validation attempts that are allowed before the
   * verification is locked. Valid values range from 1 through 5. Omit this member to
   * preserve the current value.</p>
   */
  inline int GetMaxAttempts() const { return m_maxAttempts; }
  inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
  inline void SetMaxAttempts(int value) {
    m_maxAttemptsHasBeenSet = true;
    m_maxAttempts = value;
  }
  inline UpdateCodeConfigurationParameters& WithMaxAttempts(int value) {
    SetMaxAttempts(value);
    return *this;
  }
  ///@}
 private:
  CodeType m_codeType{CodeType::NOT_SET};

  int m_codeLength{0};

  int m_validityPeriodMinutes{0};

  int m_maxAttempts{0};
  bool m_codeTypeHasBeenSet = false;
  bool m_codeLengthHasBeenSet = false;
  bool m_validityPeriodMinutesHasBeenSet = false;
  bool m_maxAttemptsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
