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
  enum class CommunicationLimitsConfigType
  {
    NOT_SET,
    ALL_CHANNEL_SUBTYPES
  };

namespace CommunicationLimitsConfigTypeMapper
{
AWS_CONNECTCAMPAIGNSV2_API CommunicationLimitsConfigType GetCommunicationLimitsConfigTypeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForCommunicationLimitsConfigType(CommunicationLimitsConfigType value);
} // namespace CommunicationLimitsConfigTypeMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
