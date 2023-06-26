/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A rule group that Firewall Manager tried to associate with a VPC has the same
   * priority as a rule group that's already associated. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DnsRuleGroupPriorityConflictViolation">AWS
   * API Reference</a></p>
   */
  class DnsRuleGroupPriorityConflictViolation
  {
  public:
    AWS_FMS_API DnsRuleGroupPriorityConflictViolation();
    AWS_FMS_API DnsRuleGroupPriorityConflictViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DnsRuleGroupPriorityConflictViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the VPC ID. </p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const{ return m_violationTargetDescription; }

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline void SetViolationTargetDescription(const Aws::String& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = value; }

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline void SetViolationTargetDescription(Aws::String&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::move(value); }

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline void SetViolationTargetDescription(const char* value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription.assign(value); }

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the violation that specifies the VPC and the rule group
     * that's already associated with it.</p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}


    /**
     * <p>The priority setting of the two conflicting rule groups.</p>
     */
    inline int GetConflictingPriority() const{ return m_conflictingPriority; }

    /**
     * <p>The priority setting of the two conflicting rule groups.</p>
     */
    inline bool ConflictingPriorityHasBeenSet() const { return m_conflictingPriorityHasBeenSet; }

    /**
     * <p>The priority setting of the two conflicting rule groups.</p>
     */
    inline void SetConflictingPriority(int value) { m_conflictingPriorityHasBeenSet = true; m_conflictingPriority = value; }

    /**
     * <p>The priority setting of the two conflicting rule groups.</p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithConflictingPriority(int value) { SetConflictingPriority(value); return *this;}


    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline const Aws::String& GetConflictingPolicyId() const{ return m_conflictingPolicyId; }

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline bool ConflictingPolicyIdHasBeenSet() const { return m_conflictingPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline void SetConflictingPolicyId(const Aws::String& value) { m_conflictingPolicyIdHasBeenSet = true; m_conflictingPolicyId = value; }

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline void SetConflictingPolicyId(Aws::String&& value) { m_conflictingPolicyIdHasBeenSet = true; m_conflictingPolicyId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline void SetConflictingPolicyId(const char* value) { m_conflictingPolicyIdHasBeenSet = true; m_conflictingPolicyId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithConflictingPolicyId(const Aws::String& value) { SetConflictingPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithConflictingPolicyId(Aws::String&& value) { SetConflictingPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager DNS Firewall policy that was already applied
     * to the VPC. This policy contains the rule group that's already associated with
     * the VPC. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithConflictingPolicyId(const char* value) { SetConflictingPolicyId(value); return *this;}


    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline const Aws::Vector<int>& GetUnavailablePriorities() const{ return m_unavailablePriorities; }

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline bool UnavailablePrioritiesHasBeenSet() const { return m_unavailablePrioritiesHasBeenSet; }

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline void SetUnavailablePriorities(const Aws::Vector<int>& value) { m_unavailablePrioritiesHasBeenSet = true; m_unavailablePriorities = value; }

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline void SetUnavailablePriorities(Aws::Vector<int>&& value) { m_unavailablePrioritiesHasBeenSet = true; m_unavailablePriorities = std::move(value); }

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithUnavailablePriorities(const Aws::Vector<int>& value) { SetUnavailablePriorities(value); return *this;}

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& WithUnavailablePriorities(Aws::Vector<int>&& value) { SetUnavailablePriorities(std::move(value)); return *this;}

    /**
     * <p>The priorities of rule groups that are already associated with the VPC. To
     * retry your operation, choose priority settings that aren't in this list for the
     * rule groups in your new DNS Firewall policy. </p>
     */
    inline DnsRuleGroupPriorityConflictViolation& AddUnavailablePriorities(int value) { m_unavailablePrioritiesHasBeenSet = true; m_unavailablePriorities.push_back(value); return *this; }

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet = false;

    int m_conflictingPriority;
    bool m_conflictingPriorityHasBeenSet = false;

    Aws::String m_conflictingPolicyId;
    bool m_conflictingPolicyIdHasBeenSet = false;

    Aws::Vector<int> m_unavailablePriorities;
    bool m_unavailablePrioritiesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
