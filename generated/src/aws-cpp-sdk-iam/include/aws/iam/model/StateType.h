/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class StateType { NOT_SET, UNASSIGNED, ASSIGNED, PENDING_APPROVAL, FINALIZED, ACCEPTED, REJECTED, EXPIRED };

namespace StateTypeMapper {
AWS_IAM_API StateType GetStateTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForStateType(StateType value);
}  // namespace StateTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
