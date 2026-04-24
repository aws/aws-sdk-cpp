/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/MembershipInferenceAttackVersion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>A score that measures the vulnerability of synthetic data to membership
 * inference attacks and provides both the numerical score and the version of the
 * attack methodology used for evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/MembershipInferenceAttackScore">AWS
 * API Reference</a></p>
 */
class MembershipInferenceAttackScore {
 public:
  AWS_CLEANROOMSML_API MembershipInferenceAttackScore() = default;
  AWS_CLEANROOMSML_API MembershipInferenceAttackScore(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API MembershipInferenceAttackScore& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the membership inference attack, which consists of the attack
   * type and its version number, used to generate this privacy score.</p>
   */
  inline MembershipInferenceAttackVersion GetAttackVersion() const { return m_attackVersion; }
  inline bool AttackVersionHasBeenSet() const { return m_attackVersionHasBeenSet; }
  inline void SetAttackVersion(MembershipInferenceAttackVersion value) {
    m_attackVersionHasBeenSet = true;
    m_attackVersion = value;
  }
  inline MembershipInferenceAttackScore& WithAttackVersion(MembershipInferenceAttackVersion value) {
    SetAttackVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numerical score representing the vulnerability to membership inference
   * attacks.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline MembershipInferenceAttackScore& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  MembershipInferenceAttackVersion m_attackVersion{MembershipInferenceAttackVersion::NOT_SET};

  double m_score{0.0};
  bool m_attackVersionHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
