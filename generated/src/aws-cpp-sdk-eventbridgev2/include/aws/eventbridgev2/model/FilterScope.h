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
enum class FilterScope { NOT_SET, DATA, METADATA, SYSTEM_METADATA };

namespace FilterScopeMapper {
AWS_EVENTBRIDGEV2_API FilterScope GetFilterScopeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForFilterScope(FilterScope value);
}  // namespace FilterScopeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
