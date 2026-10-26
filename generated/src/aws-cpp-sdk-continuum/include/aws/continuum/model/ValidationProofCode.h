/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ValidationProofMaterial.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The executed proof's program. Further members, such as command,
 * workingDirectory and supportingInputs, can be added later as optional
 * details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationProofCode">AWS
 * API Reference</a></p>
 */
class ValidationProofCode {
 public:
  AWS_CONTINUUM_API ValidationProofCode() = default;
  AWS_CONTINUUM_API ValidationProofCode(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationProofCode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Proof program files, main file first, in their retained order.</p>
   */
  inline const Aws::Vector<ValidationProofMaterial>& GetProofCode() const { return m_proofCode; }
  inline bool ProofCodeHasBeenSet() const { return m_proofCodeHasBeenSet; }
  template <typename ProofCodeT = Aws::Vector<ValidationProofMaterial>>
  void SetProofCode(ProofCodeT&& value) {
    m_proofCodeHasBeenSet = true;
    m_proofCode = std::forward<ProofCodeT>(value);
  }
  template <typename ProofCodeT = Aws::Vector<ValidationProofMaterial>>
  ValidationProofCode& WithProofCode(ProofCodeT&& value) {
    SetProofCode(std::forward<ProofCodeT>(value));
    return *this;
  }
  template <typename ProofCodeT = ValidationProofMaterial>
  ValidationProofCode& AddProofCode(ProofCodeT&& value) {
    m_proofCodeHasBeenSet = true;
    m_proofCode.emplace_back(std::forward<ProofCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ValidationProofMaterial> m_proofCode;
  bool m_proofCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
