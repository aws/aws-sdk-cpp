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
    AWS_FMS_API AwsVPCSecurityGroupViolation();
    AWS_FMS_API AwsVPCSecurityGroupViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsVPCSecurityGroupViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const{ return m_violationTargetDescription; }
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }
    inline void SetViolationTargetDescription(const Aws::String& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = value; }
    inline void SetViolationTargetDescription(Aws::String&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::move(value); }
    inline void SetViolationTargetDescription(const char* value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription.assign(value); }
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline const Aws::Vector<PartialMatch>& GetPartialMatches() const{ return m_partialMatches; }
    inline bool PartialMatchesHasBeenSet() const { return m_partialMatchesHasBeenSet; }
    inline void SetPartialMatches(const Aws::Vector<PartialMatch>& value) { m_partialMatchesHasBeenSet = true; m_partialMatches = value; }
    inline void SetPartialMatches(Aws::Vector<PartialMatch>&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches = std::move(value); }
    inline AwsVPCSecurityGroupViolation& WithPartialMatches(const Aws::Vector<PartialMatch>& value) { SetPartialMatches(value); return *this;}
    inline AwsVPCSecurityGroupViolation& WithPartialMatches(Aws::Vector<PartialMatch>&& value) { SetPartialMatches(std::move(value)); return *this;}
    inline AwsVPCSecurityGroupViolation& AddPartialMatches(const PartialMatch& value) { m_partialMatchesHasBeenSet = true; m_partialMatches.push_back(value); return *this; }
    inline AwsVPCSecurityGroupViolation& AddPartialMatches(PartialMatch&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline const Aws::Vector<SecurityGroupRemediationAction>& GetPossibleSecurityGroupRemediationActions() const{ return m_possibleSecurityGroupRemediationActions; }
    inline bool PossibleSecurityGroupRemediationActionsHasBeenSet() const { return m_possibleSecurityGroupRemediationActionsHasBeenSet; }
    inline void SetPossibleSecurityGroupRemediationActions(const Aws::Vector<SecurityGroupRemediationAction>& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions = value; }
    inline void SetPossibleSecurityGroupRemediationActions(Aws::Vector<SecurityGroupRemediationAction>&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions = std::move(value); }
    inline AwsVPCSecurityGroupViolation& WithPossibleSecurityGroupRemediationActions(const Aws::Vector<SecurityGroupRemediationAction>& value) { SetPossibleSecurityGroupRemediationActions(value); return *this;}
    inline AwsVPCSecurityGroupViolation& WithPossibleSecurityGroupRemediationActions(Aws::Vector<SecurityGroupRemediationAction>&& value) { SetPossibleSecurityGroupRemediationActions(std::move(value)); return *this;}
    inline AwsVPCSecurityGroupViolation& AddPossibleSecurityGroupRemediationActions(const SecurityGroupRemediationAction& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions.push_back(value); return *this; }
    inline AwsVPCSecurityGroupViolation& AddPossibleSecurityGroupRemediationActions(SecurityGroupRemediationAction&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions.push_back(std::move(value)); return *this; }
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
