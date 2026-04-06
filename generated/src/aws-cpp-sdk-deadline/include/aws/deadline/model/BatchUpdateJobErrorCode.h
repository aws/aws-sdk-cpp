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
enum class BatchUpdateJobErrorCode {
  NOT_SET,
  ConflictException,
  InternalServerErrorException,
  ResourceNotFoundException,
  ValidationException,
  AccessDeniedException,
  ThrottlingException
};

namespace BatchUpdateJobErrorCodeMapper {
AWS_DEADLINE_API BatchUpdateJobErrorCode GetBatchUpdateJobErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForBatchUpdateJobErrorCode(BatchUpdateJobErrorCode value);
}  // namespace BatchUpdateJobErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
