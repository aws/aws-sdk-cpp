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
enum class OperationAction { NOT_SET, START, SUCCEED, FAIL, RETRY, CANCEL };

namespace OperationActionMapper {
AWS_LAMBDA_API OperationAction GetOperationActionForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForOperationAction(OperationAction value);
}  // namespace OperationActionMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
