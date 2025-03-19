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
    AWS_FMS_API DnsRuleGroupLimitExceededViolation() = default;
    AWS_FMS_API DnsRuleGroupLimitExceededViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DnsRuleGroupLimitExceededViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the VPC ID. </p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    DnsRuleGroupLimitExceededViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const { return m_violationTargetDescription; }
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }
    template<typename ViolationTargetDescriptionT = Aws::String>
    void SetViolationTargetDescription(ViolationTargetDescriptionT&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::forward<ViolationTargetDescriptionT>(value); }
    template<typename ViolationTargetDescriptionT = Aws::String>
    DnsRuleGroupLimitExceededViolation& WithViolationTargetDescription(ViolationTargetDescriptionT&& value) { SetViolationTargetDescription(std::forward<ViolationTargetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rule groups currently associated with the VPC. </p>
     */
    inline int GetNumberOfRuleGroupsAlreadyAssociated() const { return m_numberOfRuleGroupsAlreadyAssociated; }
    inline bool NumberOfRuleGroupsAlreadyAssociatedHasBeenSet() const { return m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet; }
    inline void SetNumberOfRuleGroupsAlreadyAssociated(int value) { m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet = true; m_numberOfRuleGroupsAlreadyAssociated = value; }
    inline DnsRuleGroupLimitExceededViolation& WithNumberOfRuleGroupsAlreadyAssociated(int value) { SetNumberOfRuleGroupsAlreadyAssociated(value); return *this;}
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet = false;

    int m_numberOfRuleGroupsAlreadyAssociated{0};
    bool m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
