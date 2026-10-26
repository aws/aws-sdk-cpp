/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ExploitEffect.h>
#include <aws/continuum/model/ValidationProofCode.h>
#include <aws/continuum/model/ValidationProofOutput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Proof of exploitability the validation agent produced by executing code
 * against the repository under test, with the output that execution
 * produced.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationExecutedProof">AWS
 * API Reference</a></p>
 */
class ValidationExecutedProof {
 public:
  AWS_CONTINUUM_API ValidationExecutedProof() = default;
  AWS_CONTINUUM_API ValidationExecutedProof(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationExecutedProof& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The code that was run. Not a request payload: it imports the repository's own
   * modules and drives the vulnerable code path directly.</p>
   */
  inline const ValidationProofCode& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = ValidationProofCode>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = ValidationProofCode>
  ValidationExecutedProof& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the execution printed, including the agent's own PASS/FAIL assertions.
   * Absent when the run printed nothing retained.</p>
   */
  inline const ValidationProofOutput& GetOutput() const { return m_output; }
  inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
  template <typename OutputT = ValidationProofOutput>
  void SetOutput(OutputT&& value) {
    m_outputHasBeenSet = true;
    m_output = std::forward<OutputT>(value);
  }
  template <typename OutputT = ValidationProofOutput>
  ValidationExecutedProof& WithOutput(OutputT&& value) {
    SetOutput(std::forward<OutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Effect the execution actually produced. <code>observedEffect</code> rather
   * than <code>effect</code>: this one was witnessed, and the name has to stay
   * distinguishable from <code>ValidationSourceAnalysis.inferredEffect</code>, which
   * was not.</p>
   */
  inline ExploitEffect GetObservedEffect() const { return m_observedEffect; }
  inline bool ObservedEffectHasBeenSet() const { return m_observedEffectHasBeenSet; }
  inline void SetObservedEffect(ExploitEffect value) {
    m_observedEffectHasBeenSet = true;
    m_observedEffect = value;
  }
  inline ValidationExecutedProof& WithObservedEffect(ExploitEffect value) {
    SetObservedEffect(value);
    return *this;
  }
  ///@}
 private:
  ValidationProofCode m_code;

  ValidationProofOutput m_output;

  ExploitEffect m_observedEffect{ExploitEffect::NOT_SET};
  bool m_codeHasBeenSet = false;
  bool m_outputHasBeenSet = false;
  bool m_observedEffectHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
