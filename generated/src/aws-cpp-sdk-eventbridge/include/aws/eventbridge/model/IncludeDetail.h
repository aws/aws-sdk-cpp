/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/EventBridge_EXPORTS.h>

namespace Aws {
namespace EventBridge {
namespace Model {
enum class IncludeDetail { NOT_SET, NONE, FULL };

namespace IncludeDetailMapper {
AWS_EVENTBRIDGE_API IncludeDetail GetIncludeDetailForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForIncludeDetail(IncludeDetail value);
}  // namespace IncludeDetailMapper
}  // namespace Model
}  // namespace EventBridge
}  // namespace Aws
