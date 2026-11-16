/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/CheckEffect.h>
#include <aws/iam-toolbox/model/CheckType.h>
#include <aws/iam-toolbox/model/MatchedPolicy.h>
#include <aws/iam-toolbox/model/PolicyType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {

/**
 * <p>Represents one authorization requirement considered during an evaluation and
 * its result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/Check">AWS
 * API Reference</a></p>
 */
class Check {
 public:
  AWS_IAMTOOLBOX_API Check() = default;
  AWS_IAMTOOLBOX_API Check(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Check& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of requirement that the check evaluates. Valid values:</p> <ul> <li>
   * <p> <code>SERVICE_CONTROL_POLICY</code> - The service control policies (SCPs)
   * attached to one organization target, such as a root, organizational unit, or
   * account, that apply to the principal.</p> </li> <li> <p>
   * <code>RESOURCE_CONTROL_POLICY</code> - The resource control policies (RCPs)
   * attached to one organization target that apply to the resource.</p> </li> <li>
   * <p> <code>VPC_ENDPOINT</code> - The VPC endpoint policy for the endpoint through
   * which the request passes.</p> </li> <li> <p> <code>RESOURCE</code> - The
   * resource owner's resource-based policies, when the owner must allow the request
   * separately, such as a cross-account request or a request to an AWS KMS key.</p>
   * </li> <li> <p> <code>PRINCIPAL</code> - The principal's identity-based policies
   * attached to the IAM user or role.</p> </li> <li> <p>
   * <code>PERMISSIONS_BOUNDARY</code> - The permissions boundary on the IAM user or
   * role.</p> </li> <li> <p> <code>SESSION</code> - The role session that made the
   * request, decided by its session policies.</p> </li> </ul>
   */
  inline CheckType GetCheckType() const { return m_checkType; }
  inline bool CheckTypeHasBeenSet() const { return m_checkTypeHasBeenSet; }
  inline void SetCheckType(CheckType value) {
    m_checkTypeHasBeenSet = true;
    m_checkType = value;
  }
  inline Check& WithCheckType(CheckType value) {
    SetCheckType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of evaluating this requirement. Valid values:</p> <ul> <li> <p>
   * <code>ALLOW</code> - A statement that applies to this check allows the
   * request.</p> </li> <li> <p> <code>EXPLICIT_DENY</code> - A deny statement that
   * applies to this check matches.</p> </li> <li> <p> <code>IMPLICIT_DENY</code> -
   * The check required an allow and nothing that applies to it allows the
   * request.</p> </li> <li> <p> <code>NO_IMPACT</code> - No statement in this check
   * matched, and no allow was needed because another path allowed the request.</p>
   * </li> </ul>
   */
  inline CheckEffect GetEvaluatedEffect() const { return m_evaluatedEffect; }
  inline bool EvaluatedEffectHasBeenSet() const { return m_evaluatedEffectHasBeenSet; }
  inline void SetEvaluatedEffect(CheckEffect value) {
    m_evaluatedEffectHasBeenSet = true;
    m_evaluatedEffect = value;
  }
  inline Check& WithEvaluatedEffect(CheckEffect value) {
    SetEvaluatedEffect(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN that distinguishes this check from other checks of the same type.
   * This value is absent when the check type alone identifies the check. For SCP and
   * RCP checks, this is the AWS Organizations ARN of the root, organizational unit,
   * or account that the evaluated policies are attached to.</p>
   */
  inline const Aws::String& GetTargetArn() const { return m_targetArn; }
  inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
  template <typename TargetArnT = Aws::String>
  void SetTargetArn(TargetArnT&& value) {
    m_targetArnHasBeenSet = true;
    m_targetArn = std::forward<TargetArnT>(value);
  }
  template <typename TargetArnT = Aws::String>
  Check& WithTargetArn(TargetArnT&& value) {
    SetTargetArn(std::forward<TargetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy types used to satisfy this check, plus the type of every policy
   * with a statement that matched in it. <code>matchedPolicies</code> lists matching
   * policies in the top-level <code>policies</code> list.</p>
   */
  inline const Aws::Vector<PolicyType>& GetRelevantPolicyTypes() const { return m_relevantPolicyTypes; }
  inline bool RelevantPolicyTypesHasBeenSet() const { return m_relevantPolicyTypesHasBeenSet; }
  template <typename RelevantPolicyTypesT = Aws::Vector<PolicyType>>
  void SetRelevantPolicyTypes(RelevantPolicyTypesT&& value) {
    m_relevantPolicyTypesHasBeenSet = true;
    m_relevantPolicyTypes = std::forward<RelevantPolicyTypesT>(value);
  }
  template <typename RelevantPolicyTypesT = Aws::Vector<PolicyType>>
  Check& WithRelevantPolicyTypes(RelevantPolicyTypesT&& value) {
    SetRelevantPolicyTypes(std::forward<RelevantPolicyTypesT>(value));
    return *this;
  }
  inline Check& AddRelevantPolicyTypes(PolicyType value) {
    m_relevantPolicyTypesHasBeenSet = true;
    m_relevantPolicyTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Policies in this list have statements that matched for this check. Each URI
   * corresponds to an entry in the top-level <code>policies</code> list. Only
   * policies in the top-level list are included. The check effect can reflect a
   * matched policy omitted from this list, so this list can be empty even when the
   * effect is <code>ALLOW</code>.</p>
   */
  inline const Aws::Vector<MatchedPolicy>& GetMatchedPolicies() const { return m_matchedPolicies; }
  inline bool MatchedPoliciesHasBeenSet() const { return m_matchedPoliciesHasBeenSet; }
  template <typename MatchedPoliciesT = Aws::Vector<MatchedPolicy>>
  void SetMatchedPolicies(MatchedPoliciesT&& value) {
    m_matchedPoliciesHasBeenSet = true;
    m_matchedPolicies = std::forward<MatchedPoliciesT>(value);
  }
  template <typename MatchedPoliciesT = Aws::Vector<MatchedPolicy>>
  Check& WithMatchedPolicies(MatchedPoliciesT&& value) {
    SetMatchedPolicies(std::forward<MatchedPoliciesT>(value));
    return *this;
  }
  template <typename MatchedPoliciesT = MatchedPolicy>
  Check& AddMatchedPolicies(MatchedPoliciesT&& value) {
    m_matchedPoliciesHasBeenSet = true;
    m_matchedPolicies.emplace_back(std::forward<MatchedPoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  CheckType m_checkType{CheckType::NOT_SET};

  CheckEffect m_evaluatedEffect{CheckEffect::NOT_SET};

  Aws::String m_targetArn;

  Aws::Vector<PolicyType> m_relevantPolicyTypes;

  Aws::Vector<MatchedPolicy> m_matchedPolicies;
  bool m_checkTypeHasBeenSet = false;
  bool m_evaluatedEffectHasBeenSet = false;
  bool m_targetArnHasBeenSet = false;
  bool m_relevantPolicyTypesHasBeenSet = false;
  bool m_matchedPoliciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
