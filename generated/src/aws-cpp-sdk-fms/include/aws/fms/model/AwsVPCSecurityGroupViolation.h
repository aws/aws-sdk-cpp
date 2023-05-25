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


    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The security group rule that is being evaluated.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const{ return m_violationTargetDescription; }

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline void SetViolationTargetDescription(const Aws::String& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = value; }

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline void SetViolationTargetDescription(Aws::String&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::move(value); }

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline void SetViolationTargetDescription(const char* value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription.assign(value); }

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security group that violates the policy.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}


    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline const Aws::Vector<PartialMatch>& GetPartialMatches() const{ return m_partialMatches; }

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline bool PartialMatchesHasBeenSet() const { return m_partialMatchesHasBeenSet; }

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline void SetPartialMatches(const Aws::Vector<PartialMatch>& value) { m_partialMatchesHasBeenSet = true; m_partialMatches = value; }

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline void SetPartialMatches(Aws::Vector<PartialMatch>&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches = std::move(value); }

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithPartialMatches(const Aws::Vector<PartialMatch>& value) { SetPartialMatches(value); return *this;}

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithPartialMatches(Aws::Vector<PartialMatch>&& value) { SetPartialMatches(std::move(value)); return *this;}

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline AwsVPCSecurityGroupViolation& AddPartialMatches(const PartialMatch& value) { m_partialMatchesHasBeenSet = true; m_partialMatches.push_back(value); return *this; }

    /**
     * <p>List of rules specified in the security group of the Firewall Manager policy
     * that partially match the <code>ViolationTarget</code> rule.</p>
     */
    inline AwsVPCSecurityGroupViolation& AddPartialMatches(PartialMatch&& value) { m_partialMatchesHasBeenSet = true; m_partialMatches.push_back(std::move(value)); return *this; }


    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline const Aws::Vector<SecurityGroupRemediationAction>& GetPossibleSecurityGroupRemediationActions() const{ return m_possibleSecurityGroupRemediationActions; }

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline bool PossibleSecurityGroupRemediationActionsHasBeenSet() const { return m_possibleSecurityGroupRemediationActionsHasBeenSet; }

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline void SetPossibleSecurityGroupRemediationActions(const Aws::Vector<SecurityGroupRemediationAction>& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions = value; }

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline void SetPossibleSecurityGroupRemediationActions(Aws::Vector<SecurityGroupRemediationAction>&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions = std::move(value); }

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithPossibleSecurityGroupRemediationActions(const Aws::Vector<SecurityGroupRemediationAction>& value) { SetPossibleSecurityGroupRemediationActions(value); return *this;}

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline AwsVPCSecurityGroupViolation& WithPossibleSecurityGroupRemediationActions(Aws::Vector<SecurityGroupRemediationAction>&& value) { SetPossibleSecurityGroupRemediationActions(std::move(value)); return *this;}

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline AwsVPCSecurityGroupViolation& AddPossibleSecurityGroupRemediationActions(const SecurityGroupRemediationAction& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions.push_back(value); return *this; }

    /**
     * <p>Remediation options for the rule specified in the
     * <code>ViolationTarget</code>.</p>
     */
    inline AwsVPCSecurityGroupViolation& AddPossibleSecurityGroupRemediationActions(SecurityGroupRemediationAction&& value) { m_possibleSecurityGroupRemediationActionsHasBeenSet = true; m_possibleSecurityGroupRemediationActions.push_back(std::move(value)); return *this; }

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
