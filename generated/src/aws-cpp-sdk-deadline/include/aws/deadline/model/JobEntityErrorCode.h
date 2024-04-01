/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class JobEntityErrorCode
  {
    NOT_SET,
    AccessDeniedException,
    InternalServerException,
    ValidationException,
    ResourceNotFoundException,
    MaxPayloadSizeExceeded,
    ConflictException
  };

namespace JobEntityErrorCodeMapper
{
AWS_DEADLINE_API JobEntityErrorCode GetJobEntityErrorCodeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForJobEntityErrorCode(JobEntityErrorCode value);
} // namespace JobEntityErrorCodeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
