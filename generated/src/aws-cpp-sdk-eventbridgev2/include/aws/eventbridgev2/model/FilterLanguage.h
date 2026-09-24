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
enum class FilterLanguage { NOT_SET, EVENT_BRIDGE_PATTERN };

namespace FilterLanguageMapper {
AWS_EVENTBRIDGEV2_API FilterLanguage GetFilterLanguageForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForFilterLanguage(FilterLanguage value);
}  // namespace FilterLanguageMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
