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
enum class PointType { NOT_SET, HORIZON, TIMESTAMP };

namespace PointTypeMapper {
AWS_EVENTBRIDGEV2_API PointType GetPointTypeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForPointType(PointType value);
}  // namespace PointTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
