/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class ApiSelectionMode { NOT_SET, CUSTOM, RULE_BASED };

namespace ApiSelectionModeMapper {
AWS_APIPORTAL_API ApiSelectionMode GetApiSelectionModeForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForApiSelectionMode(ApiSelectionMode value);
}  // namespace ApiSelectionModeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
