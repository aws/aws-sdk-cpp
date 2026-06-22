/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CodeCaptureConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A union that defines what data to capture when the instrumentation point is
 * hit. Specify <code>CodeCapture</code> for code-level capture
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CaptureConfiguration">AWS
 * API Reference</a></p>
 */
class CaptureConfiguration {
 public:
  AWS_APPLICATIONSIGNALS_API CaptureConfiguration() = default;
  AWS_APPLICATIONSIGNALS_API CaptureConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CaptureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Capture settings for code-level instrumentation, including arguments, return
   * values, stack traces, local variables, and safety limits.</p>
   */
  inline const CodeCaptureConfiguration& GetCodeCapture() const { return m_codeCapture; }
  inline bool CodeCaptureHasBeenSet() const { return m_codeCaptureHasBeenSet; }
  template <typename CodeCaptureT = CodeCaptureConfiguration>
  void SetCodeCapture(CodeCaptureT&& value) {
    m_codeCaptureHasBeenSet = true;
    m_codeCapture = std::forward<CodeCaptureT>(value);
  }
  template <typename CodeCaptureT = CodeCaptureConfiguration>
  CaptureConfiguration& WithCodeCapture(CodeCaptureT&& value) {
    SetCodeCapture(std::forward<CodeCaptureT>(value));
    return *this;
  }
  ///@}
 private:
  CodeCaptureConfiguration m_codeCapture;
  bool m_codeCaptureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
