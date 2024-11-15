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
  enum class GetCampaignStateBatchFailureCode
  {
    NOT_SET,
    ResourceNotFound,
    UnknownError
  };

namespace GetCampaignStateBatchFailureCodeMapper
{
AWS_CONNECTCAMPAIGNSV2_API GetCampaignStateBatchFailureCode GetGetCampaignStateBatchFailureCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForGetCampaignStateBatchFailureCode(GetCampaignStateBatchFailureCode value);
} // namespace GetCampaignStateBatchFailureCodeMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
