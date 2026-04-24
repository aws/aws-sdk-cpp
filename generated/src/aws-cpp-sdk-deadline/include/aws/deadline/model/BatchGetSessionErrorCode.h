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
enum class BatchGetSessionErrorCode { NOT_SET, InternalServerErrorException, ResourceNotFoundException, ValidationException };

namespace BatchGetSessionErrorCodeMapper {
AWS_DEADLINE_API BatchGetSessionErrorCode GetBatchGetSessionErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBatchGetSessionErrorCode(BatchGetSessionErrorCode value);
}  // namespace BatchGetSessionErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
