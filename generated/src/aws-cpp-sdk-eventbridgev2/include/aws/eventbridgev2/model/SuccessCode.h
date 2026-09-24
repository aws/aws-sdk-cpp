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
enum class SuccessCode { NOT_SET, PUBLISHED, DEDUPLICATED };

namespace SuccessCodeMapper {
AWS_EVENTBRIDGEV2_API SuccessCode GetSuccessCodeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForSuccessCode(SuccessCode value);
}  // namespace SuccessCodeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
