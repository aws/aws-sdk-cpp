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
  enum class GetCampaignStateBatchFailureCode
  {
    NOT_SET,
    ResourceNotFound,
    UnknownError
  };

namespace GetCampaignStateBatchFailureCodeMapper
{
AWS_CONNECTCAMPAIGNS_API GetCampaignStateBatchFailureCode GetGetCampaignStateBatchFailureCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForGetCampaignStateBatchFailureCode(GetCampaignStateBatchFailureCode value);
} // namespace GetCampaignStateBatchFailureCodeMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
