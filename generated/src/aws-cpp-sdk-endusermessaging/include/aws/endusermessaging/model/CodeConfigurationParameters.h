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
 * <p>The passcode policy parameters that are grouped for reuse across a notify
 * code configuration and its create request. Each member is optional. When you
 * omit a member on a create request, no value is applied at create time and the
 * default is applied when a passcode is sent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CodeConfigurationParameters">AWS
 * API Reference</a></p>
 */
class CodeConfigurationParameters {
 public:
  AWS_ENDUSERMESSAGING_API CodeConfigurationParameters() = default;
  AWS_ENDUSERMESSAGING_API CodeConfigurationParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API CodeConfigurationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The character set used to generate the one-time passcode. Valid values are
   * NUMERIC (digits only), ALPHA (uppercase letters only), and ALPHANUMERIC
   * (uppercase letters and digits). When you do not specify a value, the default is
   * applied when a passcode is sent.</p>
   */
  inline CodeType GetCodeType() const { return m_codeType; }
  inline bool CodeTypeHasBeenSet() const { return m_codeTypeHasBeenSet; }
  inline void SetCodeType(CodeType value) {
    m_codeTypeHasBeenSet = true;
    m_codeType = value;
  }
  inline CodeConfigurationParameters& WithCodeType(CodeType value) {
    SetCodeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of characters in the one-time passcode. Valid values range from 4
   * through 8. When you do not specify a value, the default is applied when a
   * passcode is sent.</p>
   */
  inline int GetCodeLength() const { return m_codeLength; }
  inline bool CodeLengthHasBeenSet() const { return m_codeLengthHasBeenSet; }
  inline void SetCodeLength(int value) {
    m_codeLengthHasBeenSet = true;
    m_codeLength = value;
  }
  inline CodeConfigurationParameters& WithCodeLength(int value) {
    SetCodeLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of time, in minutes, that the one-time passcode remains valid.
   * Valid values range from 1 through 60. When you do not specify a value, the
   * default is applied when a passcode is sent.</p>
   */
  inline int GetValidityPeriodMinutes() const { return m_validityPeriodMinutes; }
  inline bool ValidityPeriodMinutesHasBeenSet() const { return m_validityPeriodMinutesHasBeenSet; }
  inline void SetValidityPeriodMinutes(int value) {
    m_validityPeriodMinutesHasBeenSet = true;
    m_validityPeriodMinutes = value;
  }
  inline CodeConfigurationParameters& WithValidityPeriodMinutes(int value) {
    SetValidityPeriodMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of validation attempts that are allowed before the
   * verification is locked. Valid values range from 1 through 5. When you do not
   * specify a value, the default is applied when a passcode is sent.</p>
   */
  inline int GetMaxAttempts() const { return m_maxAttempts; }
  inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
  inline void SetMaxAttempts(int value) {
    m_maxAttemptsHasBeenSet = true;
    m_maxAttempts = value;
  }
  inline CodeConfigurationParameters& WithMaxAttempts(int value) {
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
