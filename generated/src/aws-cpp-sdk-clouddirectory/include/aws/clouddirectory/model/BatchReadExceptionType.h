/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class BatchReadExceptionType
  {
    NOT_SET,
    ValidationException,
    InvalidArnException,
    ResourceNotFoundException,
    InvalidNextTokenException,
    AccessDeniedException,
    NotNodeException,
    FacetValidationException,
    CannotListParentOfRootException,
    NotIndexException,
    NotPolicyException,
    DirectoryNotEnabledException,
    LimitExceededException,
    InternalServiceException
  };

namespace BatchReadExceptionTypeMapper
{
AWS_CLOUDDIRECTORY_API BatchReadExceptionType GetBatchReadExceptionTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForBatchReadExceptionType(BatchReadExceptionType value);
} // namespace BatchReadExceptionTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
