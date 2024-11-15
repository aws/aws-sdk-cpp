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
  enum class LocalTimeZoneDetectionType
  {
    NOT_SET,
    ZIP_CODE,
    AREA_CODE
  };

namespace LocalTimeZoneDetectionTypeMapper
{
AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneDetectionType GetLocalTimeZoneDetectionTypeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForLocalTimeZoneDetectionType(LocalTimeZoneDetectionType value);
} // namespace LocalTimeZoneDetectionTypeMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
