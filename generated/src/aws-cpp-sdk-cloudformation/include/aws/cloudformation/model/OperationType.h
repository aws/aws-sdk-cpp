/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class OperationType { NOT_SET, CREATE_STACK, UPDATE_STACK, DELETE_STACK, CONTINUE_ROLLBACK, ROLLBACK, CREATE_CHANGESET };

namespace OperationTypeMapper {
AWS_CLOUDFORMATION_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForOperationType(OperationType value);
}  // namespace OperationTypeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
