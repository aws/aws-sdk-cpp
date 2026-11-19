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
enum class MskCompression { NOT_SET, NONE, GZIP, SNAPPY, LZ4, ZSTD };

namespace MskCompressionMapper {
AWS_EVENTBRIDGEV2_API MskCompression GetMskCompressionForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForMskCompression(MskCompression value);
}  // namespace MskCompressionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
