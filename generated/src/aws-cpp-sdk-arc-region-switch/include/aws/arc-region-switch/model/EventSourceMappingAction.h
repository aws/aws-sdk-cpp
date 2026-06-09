/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
enum class EventSourceMappingAction { NOT_SET, enable, disable };

namespace EventSourceMappingActionMapper {
AWS_ARCREGIONSWITCH_API EventSourceMappingAction GetEventSourceMappingActionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForEventSourceMappingAction(EventSourceMappingAction value);
}  // namespace EventSourceMappingActionMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
