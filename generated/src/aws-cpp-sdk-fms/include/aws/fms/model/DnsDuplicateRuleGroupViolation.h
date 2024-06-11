﻿/**
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
  class DnsDuplicateRuleGroupViolation
  {
  public:
    AWS_FMS_API DnsDuplicateRuleGroupViolation();
    AWS_FMS_API DnsDuplicateRuleGroupViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DnsDuplicateRuleGroupViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the VPC ID. </p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}
    inline DnsDuplicateRuleGroupViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the violation that specifies the rule group and VPC.</p>
     */
    inline const Aws::String& GetViolationTargetDescription() const{ return m_violationTargetDescription; }
    inline bool ViolationTargetDescriptionHasBeenSet() const { return m_violationTargetDescriptionHasBeenSet; }
    inline void SetViolationTargetDescription(const Aws::String& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = value; }
    inline void SetViolationTargetDescription(Aws::String&& value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription = std::move(value); }
    inline void SetViolationTargetDescription(const char* value) { m_violationTargetDescriptionHasBeenSet = true; m_violationTargetDescription.assign(value); }
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(const Aws::String& value) { SetViolationTargetDescription(value); return *this;}
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(Aws::String&& value) { SetViolationTargetDescription(std::move(value)); return *this;}
    inline DnsDuplicateRuleGroupViolation& WithViolationTargetDescription(const char* value) { SetViolationTargetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_violationTargetDescription;
    bool m_violationTargetDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
