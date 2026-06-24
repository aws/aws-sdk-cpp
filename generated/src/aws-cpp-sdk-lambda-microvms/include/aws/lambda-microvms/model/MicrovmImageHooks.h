/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/HookState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Configuration for hooks invoked during MicroVM image build events such as
 * ready and validate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmImageHooks">AWS
 * API Reference</a></p>
 */
class MicrovmImageHooks {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmImageHooks() = default;
  AWS_LAMBDAMICROVMS_API MicrovmImageHooks(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmImageHooks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the hook invoked when the MicroVM image build is ready.</p>
   */
  inline HookState GetReady() const { return m_ready; }
  inline bool ReadyHasBeenSet() const { return m_readyHasBeenSet; }
  inline void SetReady(HookState value) {
    m_readyHasBeenSet = true;
    m_ready = value;
  }
  inline MicrovmImageHooks& WithReady(HookState value) {
    SetReady(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the ready hook to complete.</p>
   */
  inline int GetReadyTimeoutInSeconds() const { return m_readyTimeoutInSeconds; }
  inline bool ReadyTimeoutInSecondsHasBeenSet() const { return m_readyTimeoutInSecondsHasBeenSet; }
  inline void SetReadyTimeoutInSeconds(int value) {
    m_readyTimeoutInSecondsHasBeenSet = true;
    m_readyTimeoutInSeconds = value;
  }
  inline MicrovmImageHooks& WithReadyTimeoutInSeconds(int value) {
    SetReadyTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the hook invoked to validate the MicroVM image build.</p>
   */
  inline HookState GetValidate() const { return m_validate; }
  inline bool ValidateHasBeenSet() const { return m_validateHasBeenSet; }
  inline void SetValidate(HookState value) {
    m_validateHasBeenSet = true;
    m_validate = value;
  }
  inline MicrovmImageHooks& WithValidate(HookState value) {
    SetValidate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the validate hook to complete.</p>
   */
  inline int GetValidateTimeoutInSeconds() const { return m_validateTimeoutInSeconds; }
  inline bool ValidateTimeoutInSecondsHasBeenSet() const { return m_validateTimeoutInSecondsHasBeenSet; }
  inline void SetValidateTimeoutInSeconds(int value) {
    m_validateTimeoutInSecondsHasBeenSet = true;
    m_validateTimeoutInSeconds = value;
  }
  inline MicrovmImageHooks& WithValidateTimeoutInSeconds(int value) {
    SetValidateTimeoutInSeconds(value);
    return *this;
  }
  ///@}
 private:
  HookState m_ready{HookState::NOT_SET};

  int m_readyTimeoutInSeconds{0};

  HookState m_validate{HookState::NOT_SET};

  int m_validateTimeoutInSeconds{0};
  bool m_readyHasBeenSet = false;
  bool m_readyTimeoutInSecondsHasBeenSet = false;
  bool m_validateHasBeenSet = false;
  bool m_validateTimeoutInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
