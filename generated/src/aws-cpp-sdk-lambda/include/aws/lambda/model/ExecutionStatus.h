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
enum class ExecutionStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED, TIMED_OUT, STOPPED };

namespace ExecutionStatusMapper {
AWS_LAMBDA_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
