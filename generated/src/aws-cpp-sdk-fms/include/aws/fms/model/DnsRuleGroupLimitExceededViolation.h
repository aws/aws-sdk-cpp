/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The VPC that Firewall Manager was applying a DNS Fireall policy to reached
   * the limit for associated DNS Firewall rule groups. Firewall Manager tried to
   * associate another rule group with the VPC and failed due to the limit.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DnsRuleGroupLimitExceededViolation">AWS
   * API Reference</a></p>
   */
  class DnsRuleGroupLimitExceededViolation
  {
  public:
    AWS_FMS_API DnsRuleGroupLimitExceededViolation();
    AWS_FMS_API DnsRuleGroupLimitExceededViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DnsRuleGroupLimitExceededViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DnsRuleGroupLimitExceededViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC ID. </p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const{ return m_violationTargetDescription; }

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline void SetViolationTargetDescription(const Aws::String& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = value; }

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline void SetViolationTargetDescription(Aws::String&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::move(value); }

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline void SetViolationTargetDescription(const char* value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription.assign(value); }

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}


    /**
     * <p>The number of rule groups currently associated with the VPC. </p>
     */
    inline int GetNumberOfRuleGroupsAlreadyAssociated() const{ return m_numberOfRuleGroupsAlreadyAssociated; }

    /**
     * <p>The number of rule groups currently associated with the VPC. </p>
     */
    inline bool NumberOfRuleGroupsAlreadyAssociatedHasBeenSet() const { return m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet; }

    /**
     * <p>The number of rule groups currently associated with the VPC. </p>
     */
    inline void SetNumberOfRuleGroupsAlreadyAssociated(int value) { m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet = true; m_numberOfRuleGroupsAlreadyAssociated = value; }

    /**
     * <p>The number of rule groups currently associated with the VPC. </p>
     */
    inline DnsRuleGroupLimitExceededViolation& WithNumberOfRuleGroupsAlreadyAssociated(int value) { SetNumberOfRuleGroupsAlreadyAssociated(value); return *this;}

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet = false;

    int m_numberOfRuleGroupsAlreadyAssociated;
    bool m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
