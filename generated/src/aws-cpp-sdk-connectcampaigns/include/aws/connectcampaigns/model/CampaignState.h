/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCampaigns
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
    Failed
  };

namespace CampaignStateMapper
{
AWS_CONNECTCAMPAIGNS_API CampaignState GetCampaignStateForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForCampaignState(CampaignState value);
} // namespace CampaignStateMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
