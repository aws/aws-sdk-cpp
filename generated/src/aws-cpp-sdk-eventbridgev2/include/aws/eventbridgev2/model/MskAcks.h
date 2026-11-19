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
enum class MskAcks { NOT_SET, ALL, LEADER };

namespace MskAcksMapper {
AWS_EVENTBRIDGEV2_API MskAcks GetMskAcksForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForMskAcks(MskAcks value);
}  // namespace MskAcksMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
