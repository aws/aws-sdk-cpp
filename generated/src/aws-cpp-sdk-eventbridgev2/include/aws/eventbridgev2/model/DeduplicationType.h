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
enum class DeduplicationType { NOT_SET, CONTENT_BASED };

namespace DeduplicationTypeMapper {
AWS_EVENTBRIDGEV2_API DeduplicationType GetDeduplicationTypeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForDeduplicationType(DeduplicationType value);
}  // namespace DeduplicationTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
