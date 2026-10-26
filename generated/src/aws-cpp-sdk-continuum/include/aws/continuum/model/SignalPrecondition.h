/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalBasis.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>One assessed precondition with the basis behind it.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalPrecondition">AWS
 * API Reference</a></p>
 */
class SignalPrecondition {
 public:
  AWS_CONTINUUM_API SignalPrecondition() = default;
  AWS_CONTINUUM_API SignalPrecondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalPrecondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The producer's determination.</p> <p>A Boolean rather than an enum, against
   * the Common Terms preference for enums on extensibility grounds. The question
   * each precondition answers is closed — is the code reachable, is configuration
   * required, must a user other than the attacker interact — and the only third
   * state, &quot;not determined&quot;, is already expressed by omitting this member,
   * which the projection does whenever the stored value is not a bool. An enum would
   * give two ways to say the same thing, while <code>basis</code> and
   * <code>missingInfo</code> already qualify how firm the answer is.</p>
   */
  inline bool GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(bool value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline SignalPrecondition& WithValue(bool value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where the producer's determination came from.</p>
   */
  inline SignalBasis GetBasis() const { return m_basis; }
  inline bool BasisHasBeenSet() const { return m_basisHasBeenSet; }
  inline void SetBasis(SignalBasis value) {
    m_basisHasBeenSet = true;
    m_basis = value;
  }
  inline SignalPrecondition& WithBasis(SignalBasis value) {
    SetBasis(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's explanation.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  SignalPrecondition& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the producer could not determine, when anything was missing.</p>
   */
  inline const Aws::String& GetMissingInfo() const { return m_missingInfo; }
  inline bool MissingInfoHasBeenSet() const { return m_missingInfoHasBeenSet; }
  template <typename MissingInfoT = Aws::String>
  void SetMissingInfo(MissingInfoT&& value) {
    m_missingInfoHasBeenSet = true;
    m_missingInfo = std::forward<MissingInfoT>(value);
  }
  template <typename MissingInfoT = Aws::String>
  SignalPrecondition& WithMissingInfo(MissingInfoT&& value) {
    SetMissingInfo(std::forward<MissingInfoT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_value{false};

  SignalBasis m_basis{SignalBasis::NOT_SET};

  Aws::String m_reason;

  Aws::String m_missingInfo;
  bool m_valueHasBeenSet = false;
  bool m_basisHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_missingInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
