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
  enum class ThirdPartyFirewallAssociationStatus
  {
    NOT_SET,
    ONBOARDING,
    ONBOARD_COMPLETE,
    OFFBOARDING,
    OFFBOARD_COMPLETE,
    NOT_EXIST
  };

namespace ThirdPartyFirewallAssociationStatusMapper
{
AWS_FMS_API ThirdPartyFirewallAssociationStatus GetThirdPartyFirewallAssociationStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForThirdPartyFirewallAssociationStatus(ThirdPartyFirewallAssociationStatus value);
} // namespace ThirdPartyFirewallAssociationStatusMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
