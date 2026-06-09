/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {
enum class LocalTimeZoneDetectionScope { NOT_SET, PRIMARY_ONLY, ALL_AVAILABLE };

namespace LocalTimeZoneDetectionScopeMapper {
AWS_CONNECTCAMPAIGNSV2_API LocalTimeZoneDetectionScope GetLocalTimeZoneDetectionScopeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForLocalTimeZoneDetectionScope(LocalTimeZoneDetectionScope value);
}  // namespace LocalTimeZoneDetectionScopeMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
