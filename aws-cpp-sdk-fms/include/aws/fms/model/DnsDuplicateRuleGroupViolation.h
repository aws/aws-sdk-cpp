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
   * <p>A DNS Firewall rule group that Firewall Manager tried to associate with a VPC
   * is already associated with the VPC and can't be associated again. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DnsDuplicateRuleGroupViolation">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API DnsDuplicateRuleGroupViolation
  {
  public:
    DnsDuplicateRuleGroupViolation();
    DnsDuplicateRuleGroupViolation(Aws::Utils::Json::JsonView jsonValue);
    DnsDuplicateRuleGroupViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the VPC. </p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The ID of the VPC. </p>
     */
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC. </p>
     */
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


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
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
