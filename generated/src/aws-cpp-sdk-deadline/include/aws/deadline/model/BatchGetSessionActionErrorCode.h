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
enum class BatchGetSessionActionErrorCode { NOT_SET, InternalServerErrorException, ResourceNotFoundException, ValidationException };

namespace BatchGetSessionActionErrorCodeMapper {
AWS_DEADLINE_API BatchGetSessionActionErrorCode GetBatchGetSessionActionErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBatchGetSessionActionErrorCode(BatchGetSessionActionErrorCode value);
}  // namespace BatchGetSessionActionErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
