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
enum class EntitlementStatus { NOT_SET, CREATING, CREATED, DELETED, AT_RISK, ENTITLEMENT_REMOVED, CREATE_FAILED };

namespace EntitlementStatusMapper {
AWS_EVS_API EntitlementStatus GetEntitlementStatusForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForEntitlementStatus(EntitlementStatus value);
}  // namespace EntitlementStatusMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
