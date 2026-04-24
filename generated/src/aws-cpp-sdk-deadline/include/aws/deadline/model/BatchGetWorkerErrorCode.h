/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class BatchGetWorkerErrorCode { NOT_SET, InternalServerErrorException, ResourceNotFoundException, ValidationException };

namespace BatchGetWorkerErrorCodeMapper {
AWS_DEADLINE_API BatchGetWorkerErrorCode GetBatchGetWorkerErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBatchGetWorkerErrorCode(BatchGetWorkerErrorCode value);
}  // namespace BatchGetWorkerErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
