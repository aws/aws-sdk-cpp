/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class ViolationReason
  {
    NOT_SET,
    WEB_ACL_MISSING_RULE_GROUP,
    RESOURCE_MISSING_WEB_ACL,
    RESOURCE_INCORRECT_WEB_ACL,
    RESOURCE_MISSING_SHIELD_PROTECTION,
    RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION,
    RESOURCE_MISSING_SECURITY_GROUP,
    RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP,
    SECURITY_GROUP_UNUSED,
    SECURITY_GROUP_REDUNDANT,
    MISSING_FIREWALL,
    MISSING_FIREWALL_SUBNET_IN_AZ,
    MISSING_EXPECTED_ROUTE_TABLE,
    NETWORK_FIREWALL_POLICY_MODIFIED
  };

namespace ViolationReasonMapper
{
AWS_FMS_API ViolationReason GetViolationReasonForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForViolationReason(ViolationReason value);
} // namespace ViolationReasonMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
