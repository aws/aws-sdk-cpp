/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseEntryPointType.h>
#include <aws/connect/model/VoiceCallEntryPointParameters.h>

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
 * <p>Defines the starting point for a test case.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TestCaseEntryPoint">AWS
 * API Reference</a></p>
 */
class TestCaseEntryPoint {
 public:
  AWS_CONNECT_API TestCaseEntryPoint() = default;
  AWS_CONNECT_API TestCaseEntryPoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API TestCaseEntryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of entry point.</p>
   */
  inline TestCaseEntryPointType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TestCaseEntryPointType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TestCaseEntryPoint& WithType(TestCaseEntryPointType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters for voice call entry point.</p>
   */
  inline const VoiceCallEntryPointParameters& GetVoiceCallEntryPointParameters() const { return m_voiceCallEntryPointParameters; }
  inline bool VoiceCallEntryPointParametersHasBeenSet() const { return m_voiceCallEntryPointParametersHasBeenSet; }
  template <typename VoiceCallEntryPointParametersT = VoiceCallEntryPointParameters>
  void SetVoiceCallEntryPointParameters(VoiceCallEntryPointParametersT&& value) {
    m_voiceCallEntryPointParametersHasBeenSet = true;
    m_voiceCallEntryPointParameters = std::forward<VoiceCallEntryPointParametersT>(value);
  }
  template <typename VoiceCallEntryPointParametersT = VoiceCallEntryPointParameters>
  TestCaseEntryPoint& WithVoiceCallEntryPointParameters(VoiceCallEntryPointParametersT&& value) {
    SetVoiceCallEntryPointParameters(std::forward<VoiceCallEntryPointParametersT>(value));
    return *this;
  }
  ///@}
 private:
  TestCaseEntryPointType m_type{TestCaseEntryPointType::NOT_SET};

  VoiceCallEntryPointParameters m_voiceCallEntryPointParameters;
  bool m_typeHasBeenSet = false;
  bool m_voiceCallEntryPointParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
