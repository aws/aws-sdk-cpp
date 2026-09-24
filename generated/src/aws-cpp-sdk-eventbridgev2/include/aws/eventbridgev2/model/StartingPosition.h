/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class StartingPosition { NOT_SET, LATEST, POINT_IN_TIME };

namespace StartingPositionMapper {
AWS_EVENTBRIDGEV2_API StartingPosition GetStartingPositionForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForStartingPosition(StartingPosition value);
}  // namespace StartingPositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
