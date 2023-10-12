/**
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

static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_ATTACHMENT_HASH = ConstExprHashingUtils::HashString("InvalidAttachmentException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t BATCH_WRITE_HASH = ConstExprHashingUtils::HashString("BatchWriteException");
static constexpr uint32_t STILL_CONTAINS_LINKS_HASH = ConstExprHashingUtils::HashString("StillContainsLinksException");
static constexpr uint32_t INVALID_TAGGING_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidTaggingRequestException");
static constexpr uint32_t INVALID_RULE_HASH = ConstExprHashingUtils::HashString("InvalidRuleException");
static constexpr uint32_t OBJECT_NOT_DETACHED_HASH = ConstExprHashingUtils::HashString("ObjectNotDetachedException");
static constexpr uint32_t LINK_NAME_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("LinkNameAlreadyInUseException");
static constexpr uint32_t CANNOT_LIST_PARENT_OF_ROOT_HASH = ConstExprHashingUtils::HashString("CannotListParentOfRootException");
static constexpr uint32_t FACET_VALIDATION_HASH = ConstExprHashingUtils::HashString("FacetValidationException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t FACET_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FacetAlreadyExistsException");
static constexpr uint32_t RETRYABLE_CONFLICT_HASH = ConstExprHashingUtils::HashString("RetryableConflictException");
static constexpr uint32_t NOT_INDEX_HASH = ConstExprHashingUtils::HashString("NotIndexException");
static constexpr uint32_t NOT_NODE_HASH = ConstExprHashingUtils::HashString("NotNodeException");
static constexpr uint32_t DIRECTORY_NOT_DISABLED_HASH = ConstExprHashingUtils::HashString("DirectoryNotDisabledException");
static constexpr uint32_t UNSUPPORTED_INDEX_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedIndexTypeException");
static constexpr uint32_t DIRECTORY_DELETED_HASH = ConstExprHashingUtils::HashString("DirectoryDeletedException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t INCOMPATIBLE_SCHEMA_HASH = ConstExprHashingUtils::HashString("IncompatibleSchemaException");
static constexpr uint32_t INVALID_FACET_UPDATE_HASH = ConstExprHashingUtils::HashString("InvalidFacetUpdateException");
static constexpr uint32_t FACET_IN_USE_HASH = ConstExprHashingUtils::HashString("FacetInUseException");
static constexpr uint32_t INDEXED_ATTRIBUTE_MISSING_HASH = ConstExprHashingUtils::HashString("IndexedAttributeMissingException");
static constexpr uint32_t DIRECTORY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DirectoryAlreadyExistsException");
static constexpr uint32_t OBJECT_ALREADY_DETACHED_HASH = ConstExprHashingUtils::HashString("ObjectAlreadyDetachedException");
static constexpr uint32_t SCHEMA_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("SchemaAlreadyExistsException");
static constexpr uint32_t FACET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("FacetNotFoundException");
static constexpr uint32_t DIRECTORY_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("DirectoryNotEnabledException");
static constexpr uint32_t SCHEMA_ALREADY_PUBLISHED_HASH = ConstExprHashingUtils::HashString("SchemaAlreadyPublishedException");
static constexpr uint32_t INVALID_SCHEMA_DOC_HASH = ConstExprHashingUtils::HashString("InvalidSchemaDocException");
static constexpr uint32_t NOT_POLICY_HASH = ConstExprHashingUtils::HashString("NotPolicyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_ATTACHMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_ATTACHMENT), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == BATCH_WRITE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::BATCH_WRITE), false);
  }
  else if (hashCode == STILL_CONTAINS_LINKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::STILL_CONTAINS_LINKS), false);
  }
  else if (hashCode == INVALID_TAGGING_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_TAGGING_REQUEST), false);
  }
  else if (hashCode == INVALID_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_RULE), false);
  }
  else if (hashCode == OBJECT_NOT_DETACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::OBJECT_NOT_DETACHED), false);
  }
  else if (hashCode == LINK_NAME_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::LINK_NAME_ALREADY_IN_USE), false);
  }
  else if (hashCode == CANNOT_LIST_PARENT_OF_ROOT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::CANNOT_LIST_PARENT_OF_ROOT), false);
  }
  else if (hashCode == FACET_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_VALIDATION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == FACET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_ALREADY_EXISTS), false);
  }
  else if (hashCode == RETRYABLE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::RETRYABLE_CONFLICT), false);
  }
  else if (hashCode == NOT_INDEX_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_INDEX), false);
  }
  else if (hashCode == NOT_NODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_NODE), false);
  }
  else if (hashCode == DIRECTORY_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_NOT_DISABLED), false);
  }
  else if (hashCode == UNSUPPORTED_INDEX_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::UNSUPPORTED_INDEX_TYPE), false);
  }
  else if (hashCode == DIRECTORY_DELETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_DELETED), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_ARN), false);
  }
  else if (hashCode == INCOMPATIBLE_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INCOMPATIBLE_SCHEMA), false);
  }
  else if (hashCode == INVALID_FACET_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_FACET_UPDATE), false);
  }
  else if (hashCode == FACET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_IN_USE), false);
  }
  else if (hashCode == INDEXED_ATTRIBUTE_MISSING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INDEXED_ATTRIBUTE_MISSING), false);
  }
  else if (hashCode == DIRECTORY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_ALREADY_EXISTS), false);
  }
  else if (hashCode == OBJECT_ALREADY_DETACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::OBJECT_ALREADY_DETACHED), false);
  }
  else if (hashCode == SCHEMA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::SCHEMA_ALREADY_EXISTS), false);
  }
  else if (hashCode == FACET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::FACET_NOT_FOUND), false);
  }
  else if (hashCode == DIRECTORY_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::DIRECTORY_NOT_ENABLED), false);
  }
  else if (hashCode == SCHEMA_ALREADY_PUBLISHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::SCHEMA_ALREADY_PUBLISHED), false);
  }
  else if (hashCode == INVALID_SCHEMA_DOC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::INVALID_SCHEMA_DOC), false);
  }
  else if (hashCode == NOT_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudDirectoryErrors::NOT_POLICY), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudDirectoryErrorMapper
} // namespace CloudDirectory
} // namespace Aws
