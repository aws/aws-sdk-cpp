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
enum class TransformerType { NOT_SET, RAW, WITH_METADATA, JSONATA };

namespace TransformerTypeMapper {
AWS_EVENTBRIDGEV2_API TransformerType GetTransformerTypeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForTransformerType(TransformerType value);
}  // namespace TransformerTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
