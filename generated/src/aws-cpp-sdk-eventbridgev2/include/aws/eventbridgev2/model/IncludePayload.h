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
enum class IncludePayload { NOT_SET, FULL, ON_ERROR_ONLY };

namespace IncludePayloadMapper {
AWS_EVENTBRIDGEV2_API IncludePayload GetIncludePayloadForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForIncludePayload(IncludePayload value);
}  // namespace IncludePayloadMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
