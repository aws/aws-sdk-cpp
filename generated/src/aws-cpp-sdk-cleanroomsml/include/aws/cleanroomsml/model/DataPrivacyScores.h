/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/MembershipInferenceAttackScore.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Privacy evaluation scores that measure the privacy characteristics of the
 * generated synthetic data, including assessments of potential privacy risks such
 * as membership inference attacks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DataPrivacyScores">AWS
 * API Reference</a></p>
 */
class DataPrivacyScores {
 public:
  AWS_CLEANROOMSML_API DataPrivacyScores() = default;
  AWS_CLEANROOMSML_API DataPrivacyScores(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API DataPrivacyScores& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Scores that evaluate the vulnerability of the synthetic data to membership
   * inference attacks, which attempt to determine whether a specific individual was
   * a member of the original dataset.</p>
   */
  inline const Aws::Vector<MembershipInferenceAttackScore>& GetMembershipInferenceAttackScores() const {
    return m_membershipInferenceAttackScores;
  }
  inline bool MembershipInferenceAttackScoresHasBeenSet() const { return m_membershipInferenceAttackScoresHasBeenSet; }
  template <typename MembershipInferenceAttackScoresT = Aws::Vector<MembershipInferenceAttackScore>>
  void SetMembershipInferenceAttackScores(MembershipInferenceAttackScoresT&& value) {
    m_membershipInferenceAttackScoresHasBeenSet = true;
    m_membershipInferenceAttackScores = std::forward<MembershipInferenceAttackScoresT>(value);
  }
  template <typename MembershipInferenceAttackScoresT = Aws::Vector<MembershipInferenceAttackScore>>
  DataPrivacyScores& WithMembershipInferenceAttackScores(MembershipInferenceAttackScoresT&& value) {
    SetMembershipInferenceAttackScores(std::forward<MembershipInferenceAttackScoresT>(value));
    return *this;
  }
  template <typename MembershipInferenceAttackScoresT = MembershipInferenceAttackScore>
  DataPrivacyScores& AddMembershipInferenceAttackScores(MembershipInferenceAttackScoresT&& value) {
    m_membershipInferenceAttackScoresHasBeenSet = true;
    m_membershipInferenceAttackScores.emplace_back(std::forward<MembershipInferenceAttackScoresT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MembershipInferenceAttackScore> m_membershipInferenceAttackScores;
  bool m_membershipInferenceAttackScoresHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
