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
enum class BatchGetStepErrorCode {
  NOT_SET,
  InternalServerErrorException,
  ResourceNotFoundException,
  ValidationException,
  AccessDeniedException,
  ThrottlingException
};

namespace BatchGetStepErrorCodeMapper {
AWS_DEADLINE_API BatchGetStepErrorCode GetBatchGetStepErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBatchGetStepErrorCode(BatchGetStepErrorCode value);
}  // namespace BatchGetStepErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
