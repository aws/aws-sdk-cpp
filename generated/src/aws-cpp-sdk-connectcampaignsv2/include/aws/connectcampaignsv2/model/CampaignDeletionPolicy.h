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
  enum class CampaignDeletionPolicy
  {
    NOT_SET,
    RETAIN_ALL,
    DELETE_ALL
  };

namespace CampaignDeletionPolicyMapper
{
AWS_CONNECTCAMPAIGNSV2_API CampaignDeletionPolicy GetCampaignDeletionPolicyForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForCampaignDeletionPolicy(CampaignDeletionPolicy value);
} // namespace CampaignDeletionPolicyMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
