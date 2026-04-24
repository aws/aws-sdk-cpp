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
enum class OperationStatus { NOT_SET, STARTED, PENDING, READY, SUCCEEDED, FAILED, CANCELLED, TIMED_OUT, STOPPED };

namespace OperationStatusMapper {
AWS_LAMBDA_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForOperationStatus(OperationStatus value);
}  // namespace OperationStatusMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
