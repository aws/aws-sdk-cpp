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
  enum class CampaignState
  {
    NOT_SET,
    Initialized,
    Running,
    Paused,
    Stopped,
    Failed,
    Completed
  };

namespace CampaignStateMapper
{
AWS_CONNECTCAMPAIGNSV2_API CampaignState GetCampaignStateForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForCampaignState(CampaignState value);
} // namespace CampaignStateMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
