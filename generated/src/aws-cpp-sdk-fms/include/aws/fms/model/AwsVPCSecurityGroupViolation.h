/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/PartialMatch.h>
#include <aws/fms/model/SecurityGroupRemediationAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail for the rule violation in a security group when compared to
   * the primary security group of the Firewall Manager policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AwsVPCSecurityGroupViolation">AWS
   * API Reference</a></p>
   */
  class AwsVPCSecurityGroupViolation
  {
  public:
    AWS_FMS_API AwsVPCSecurityGroupViolation() = default;
    AWS_FMS_API AwsVPCSecurityGroupViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsVPCSecurityGroupViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    AwsVPCSecurityGroupViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const { return m_violationTargetDescription; }
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }
    template<typename ViolationTargetDescriptionT = Aws::String>
    void SetViolationTargetDescription(ViolationTargetDescriptionT&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::forward<ViolationTargetDescriptionT>(value); }
    template<typename ViolationTargetDescriptionT = Aws::String>
    AwsVPCSecurityGroupViolation& WithViolationTargetDescription(ViolationTargetDescriptionT&& value) { SetViolationTargetDescription(std::forward<ViolationTargetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline const Aws::Vector<PartialMatch>& GetPartialMatches() const { return m_partialMatches; }
    inline bool PartialMatchesHasBeenSet() const { return m_partialMatchesHasBeenSet; }
    template<typename PartialMatchesT = Aws::Vector<PartialMatch>>
    void SetPartialMatches(PartialMatchesT&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches = std::forward<PartialMatchesT>(value); }
    template<typename PartialMatchesT = Aws::Vector<PartialMatch>>
    AwsVPCSecurityGroupViolation& WithPartialMatches(PartialMatchesT&& value) { SetPartialMatches(std::forward<PartialMatchesT>(value)); return *this;}
    template<typename PartialMatchesT = PartialMatch>
    AwsVPCSecurityGroupViolation& AddPartialMatches(PartialMatchesT&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches.emplace_back(std::forward<PartialMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline const Aws::Vector<SecurityGroupRemediationAction>& GetPossibleSecurityGroupRemediationActions() const { return m_possibleSecurityGroupRemediationActions; }
    inline bool PossibleSecurityGroupRemediationActionsHasBeenSet() const { return m_possibleSecurityGroupRemediationActionsHasBeenSet; }
    template<typename PossibleSecurityGroupRemediationActionsT = Aws::Vector<SecurityGroupRemediationAction>>
    void SetPossibleSecurityGroupRemediationActions(PossibleSecurityGroupRemediationActionsT&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions = std::forward<PossibleSecurityGroupRemediationActionsT>(value); }
    template<typename PossibleSecurityGroupRemediationActionsT = Aws::Vector<SecurityGroupRemediationAction>>
    AwsVPCSecurityGroupViolation& WithPossibleSecurityGroupRemediationActions(PossibleSecurityGroupRemediationActionsT&& value) { SetPossibleSecurityGroupRemediationActions(std::forward<PossibleSecurityGroupRemediationActionsT>(value)); return *this;}
    template<typename PossibleSecurityGroupRemediationActionsT = SecurityGroupRemediationAction>
    AwsVPCSecurityGroupViolation& AddPossibleSecurityGroupRemediationActions(PossibleSecurityGroupRemediationActionsT&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions.emplace_back(std::forward<PossibleSecurityGroupRemediationActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet = false;

    Aws::Vector<PartialMatch> m_partialMatches;
    bool m_partialMatchesHasBeenSet = false;

    Aws::Vector<SecurityGroupRemediationAction> m_possibleSecurityGroupRemediationActions;
    bool m_possibleSecurityGroupRemediationActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
