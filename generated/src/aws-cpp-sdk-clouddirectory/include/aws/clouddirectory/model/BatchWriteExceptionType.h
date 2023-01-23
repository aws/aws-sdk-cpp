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
  enum class BatchWriteExceptionType
  {
    NOT_SET,
    InternalServiceException,
    ValidationException,
    InvalidArnException,
    LinkNameAlreadyInUseException,
    StillContainsLinksException,
    FacetValidationException,
    ObjectNotDetachedException,
    ResourceNotFoundException,
    AccessDeniedException,
    InvalidAttachmentException,
    NotIndexException,
    NotNodeException,
    IndexedAttributeMissingException,
    ObjectAlreadyDetachedException,
    NotPolicyException,
    DirectoryNotEnabledException,
    LimitExceededException,
    UnsupportedIndexTypeException
  };

namespace BatchWriteExceptionTypeMapper
{
AWS_CLOUDDIRECTORY_API BatchWriteExceptionType GetBatchWriteExceptionTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForBatchWriteExceptionType(BatchWriteExceptionType value);
} // namespace BatchWriteExceptionTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
