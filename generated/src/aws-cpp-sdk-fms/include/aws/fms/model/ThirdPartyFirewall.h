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
  enum class ThirdPartyFirewall
  {
    NOT_SET,
    PALO_ALTO_NETWORKS_CLOUD_NGFW,
    FORTIGATE_CLOUD_NATIVE_FIREWALL
  };

namespace ThirdPartyFirewallMapper
{
AWS_FMS_API ThirdPartyFirewall GetThirdPartyFirewallForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForThirdPartyFirewall(ThirdPartyFirewall value);
} // namespace ThirdPartyFirewallMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
