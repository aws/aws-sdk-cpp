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
enum class ConnectionStartPoint { NOT_SET, CONNECTED_TO_SYSTEM, GREETING_START, GREETING_END };

namespace ConnectionStartPointMapper {
AWS_CONNECTCAMPAIGNSV2_API ConnectionStartPoint GetConnectionStartPointForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForConnectionStartPoint(ConnectionStartPoint value);
}  // namespace ConnectionStartPointMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
