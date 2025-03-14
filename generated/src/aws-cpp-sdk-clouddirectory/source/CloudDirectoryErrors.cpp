﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/clouddirectory/CloudDirectoryErrors.h>
#include <aws/clouddirectory/model/BatchWriteException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudDirectory;
using namespace Aws::CloudDirectory::Model;

namespace Aws
{
namespace CloudDirectory
{
template<> AWS_CLOUDDIRECTORY_API BatchWriteException CloudDirectoryError::GetModeledError()
{
  assert(this->GetErrorType() == CloudDirectoryErrors::BATCH_WRITE);
  return BatchWriteException(this->GetJsonPayload().View());
}

namespace CloudDirectoryErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_ATTACHMENT_HASH = HashingUtils::HashString("InvalidAttachmentException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int BATCH_WRITE_HASH = HashingUtils::HashString("BatchWriteException");
static const int STILL_CONTAINS_LINKS_HASH = HashingUtils::HashString("StillContainsLinksException");
static const int INVALID_TAGGING_REQUEST_HASH = HashingUtils::HashString("InvalidTaggingRequestException");
static const int INVALID_RULE_HASH = HashingUtils::HashString("InvalidRuleException");
static const int OBJECT_NOT_DETACHED_HASH = HashingUtils::HashString("ObjectNotDetachedException");
static const int LINK_NAME_ALREADY_IN_USE_HASH = HashingUtils::HashString("LinkNameAlreadyInUseException");
static const int CANNOT_LIST_PARENT_OF_ROOT_HASH = HashingUtils::HashString("CannotListParentOfRootException");
static const int FACET_VALIDATION_HASH = HashingUtils::HashString("FacetValidationException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int FACET_ALREADY_EXISTS_HASH = HashingUtils::HashString("FacetAlreadyExistsException");
static const int RETRYABLE_CONFLICT_HASH = HashingUtils::HashString("RetryableConflictException");
static const int NOT_INDEX_HASH = HashingUtils::HashString("NotIndexException");
static const int NOT_NODE_HASH = HashingUtils::HashString("NotNodeException");
static const int DIRECTORY_NOT_DISABLED_HASH = HashingUtils::HashString("DirectoryNotDisabledException");
static const int UNSUPPORTED_INDEX_TYPE_HASH = HashingUtils::HashString("UnsupportedIndexTypeException");
static const int DIRECTORY_DELETED_HASH = HashingUtils::HashString("DirectoryDeletedException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int INCOMPATIBLE_SCHEMA_HASH = HashingUtils::HashString("IncompatibleSchemaException");
static const int INVALID_FACET_UPDATE_HASH = HashingUtils::HashString("InvalidFacetUpdateException");
static const int FACET_IN_USE_HASH = HashingUtils::HashString("FacetInUseException");
static const int INDEXED_ATTRIBUTE_MISSING_HASH = HashingUtils::HashString("IndexedAttributeMissingException");
static const int DIRECTORY_ALREADY_EXISTS_HASH = HashingUtils::HashString("DirectoryAlreadyExistsException");
static const int OBJECT_ALREADY_DETACHED_HASH = HashingUtils::HashString("ObjectAlreadyDetachedException");
static const int SCHEMA_ALREADY_EXISTS_HASH = HashingUtils::HashString("SchemaAlreadyExistsException");
static const int FACET_NOT_FOUND_HASH = HashingUtils::HashString("FacetNotFoundException");
static const int DIRECTORY_NOT_ENABLED_HASH = HashingUtils::HashString("DirectoryNotEnabledException");
static const int SCHEMA_ALREADY_PUBLISHED_HASH = HashingUtils::HashString("SchemaAlreadyPublishedException");
static const int INVALID_SCHEMA_DOC_HASH = HashingUtils::HashString("InvalidSchemaDocException");
static const int NOT_POLICY_HASH = HashingUtils::HashString("NotPolicyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_ATTACHMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_ATTACHMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BATCH_WRITE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::BATCH_WRITE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STILL_CONTAINS_LINKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::STILL_CONTAINS_LINKS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TAGGING_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_TAGGING_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_RULE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_NOT_DETACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::OBJECT_NOT_DETACHED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LINK_NAME_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::LINK_NAME_ALREADY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CANNOT_LIST_PARENT_OF_ROOT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::CANNOT_LIST_PARENT_OF_ROOT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FACET_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INTERNAL_SERVICE), RetryableType::RETRYABLE);
  }
  else if (hashCode == FACET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RETRYABLE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::RETRYABLE_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_INDEX_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_INDEX), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_NODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_NODE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_NOT_DISABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_INDEX_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::UNSUPPORTED_INDEX_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_DELETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_DELETED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_ARN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INCOMPATIBLE_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INCOMPATIBLE_SCHEMA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_FACET_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_FACET_UPDATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FACET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INDEXED_ATTRIBUTE_MISSING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INDEXED_ATTRIBUTE_MISSING), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_ALREADY_DETACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::OBJECT_ALREADY_DETACHED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SCHEMA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::SCHEMA_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FACET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_NOT_ENABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SCHEMA_ALREADY_PUBLISHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::SCHEMA_ALREADY_PUBLISHED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SCHEMA_DOC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_SCHEMA_DOC), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_POLICY), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudDirectoryErrorMapper
} // namespace CloudDirectory
} // namespace Aws
