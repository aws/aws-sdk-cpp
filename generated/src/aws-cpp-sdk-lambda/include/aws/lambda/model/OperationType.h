/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class OperationType { NOT_SET, EXECUTION, CONTEXT, STEP, WAIT, CALLBACK, CHAINED_INVOKE };

namespace OperationTypeMapper {
AWS_LAMBDA_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForOperationType(OperationType value);
}  // namespace OperationTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
