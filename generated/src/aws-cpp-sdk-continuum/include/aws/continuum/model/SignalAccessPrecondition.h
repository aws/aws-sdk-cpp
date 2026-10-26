/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalAccessLevel.h>
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
 * <p>The assessed access-level precondition with the basis behind
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalAccessPrecondition">AWS
 * API Reference</a></p>
 */
class SignalAccessPrecondition {
 public:
  AWS_CONTINUUM_API SignalAccessPrecondition() = default;
  AWS_CONTINUUM_API SignalAccessPrecondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalAccessPrecondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The level of access exploitation requires. Absent when the producer reported
   * a level with no mapping yet.</p>
   */
  inline SignalAccessLevel GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(SignalAccessLevel value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline SignalAccessPrecondition& WithValue(SignalAccessLevel value) {
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
  inline SignalAccessPrecondition& WithBasis(SignalBasis value) {
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
  SignalAccessPrecondition& WithReason(ReasonT&& value) {
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
  SignalAccessPrecondition& WithMissingInfo(MissingInfoT&& value) {
    SetMissingInfo(std::forward<MissingInfoT>(value));
    return *this;
  }
  ///@}
 private:
  SignalAccessLevel m_value{SignalAccessLevel::NOT_SET};

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
