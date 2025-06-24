/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{
  enum class InstanceLimitsHandling
  {
    NOT_SET,
    OPT_IN,
    OPT_OUT
  };

namespace InstanceLimitsHandlingMapper
{
AWS_CONNECTCAMPAIGNSV2_API InstanceLimitsHandling GetInstanceLimitsHandlingForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForInstanceLimitsHandling(InstanceLimitsHandling value);
} // namespace InstanceLimitsHandlingMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
