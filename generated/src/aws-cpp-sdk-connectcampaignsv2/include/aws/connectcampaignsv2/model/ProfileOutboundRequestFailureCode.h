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
  enum class ProfileOutboundRequestFailureCode
  {
    NOT_SET,
    UnknownError,
    ResourceNotFound,
    Conflict,
    RequestThrottled,
    InvalidInput
  };

namespace ProfileOutboundRequestFailureCodeMapper
{
AWS_CONNECTCAMPAIGNSV2_API ProfileOutboundRequestFailureCode GetProfileOutboundRequestFailureCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForProfileOutboundRequestFailureCode(ProfileOutboundRequestFailureCode value);
} // namespace ProfileOutboundRequestFailureCodeMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
