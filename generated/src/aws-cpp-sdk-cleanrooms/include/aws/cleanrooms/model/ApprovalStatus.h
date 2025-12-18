/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class ApprovalStatus { NOT_SET, APPROVED, DENIED, PENDING };

namespace ApprovalStatusMapper {
AWS_CLEANROOMS_API ApprovalStatus GetApprovalStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForApprovalStatus(ApprovalStatus value);
}  // namespace ApprovalStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
