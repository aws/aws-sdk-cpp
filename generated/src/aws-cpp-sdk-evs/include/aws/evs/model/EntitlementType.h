/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>

namespace Aws {
namespace EVS {
namespace Model {
enum class EntitlementType { NOT_SET, WINDOWS_SERVER };

namespace EntitlementTypeMapper {
AWS_EVS_API EntitlementType GetEntitlementTypeForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForEntitlementType(EntitlementType value);
}  // namespace EntitlementTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
