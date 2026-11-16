/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectScheduling {
namespace Model {
enum class ApprovalType { NOT_SET, AWAIT_APPROVAL, AUTOMATIC };

namespace ApprovalTypeMapper {
AWS_CONNECTSCHEDULING_API ApprovalType GetApprovalTypeForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForApprovalType(ApprovalType value);
}  // namespace ApprovalTypeMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
