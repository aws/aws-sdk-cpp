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
enum class ExternalCampaignType { NOT_SET, MANAGED, JOURNEY };

namespace ExternalCampaignTypeMapper {
AWS_CONNECTCAMPAIGNSV2_API ExternalCampaignType GetExternalCampaignTypeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForExternalCampaignType(ExternalCampaignType value);
}  // namespace ExternalCampaignTypeMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
