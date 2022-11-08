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
  enum class SecurityServiceType
  {
    NOT_SET,
    WAF,
    WAFV2,
    SHIELD_ADVANCED,
    SECURITY_GROUPS_COMMON,
    SECURITY_GROUPS_CONTENT_AUDIT,
    SECURITY_GROUPS_USAGE_AUDIT,
    NETWORK_FIREWALL,
    DNS_FIREWALL,
    THIRD_PARTY_FIREWALL,
    IMPORT_NETWORK_FIREWALL
  };

namespace SecurityServiceTypeMapper
{
AWS_FMS_API SecurityServiceType GetSecurityServiceTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForSecurityServiceType(SecurityServiceType value);
} // namespace SecurityServiceTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
