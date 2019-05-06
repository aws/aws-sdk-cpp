/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workdocs/WorkDocsErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkDocs;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace WorkDocsErrorMapper
{

static const int ENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("EntityAlreadyExistsException");
static const int REQUESTED_ENTITY_TOO_LARGE_HASH = HashingUtils::HashString("RequestedEntityTooLargeException");
static const int TOO_MANY_LABELS_HASH = HashingUtils::HashString("TooManyLabelsException");
static const int DRAFT_UPLOAD_OUT_OF_SYNC_HASH = HashingUtils::HashString("DraftUploadOutOfSyncException");
static const int FAILED_DEPENDENCY_HASH = HashingUtils::HashString("FailedDependencyException");
static const int RESOURCE_ALREADY_CHECKED_OUT_HASH = HashingUtils::HashString("ResourceAlreadyCheckedOutException");
static const int CUSTOM_METADATA_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CustomMetadataLimitExceededException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int PROHIBITED_STATE_HASH = HashingUtils::HashString("ProhibitedStateException");
static const int DOCUMENT_LOCKED_FOR_COMMENTS_HASH = HashingUtils::HashString("DocumentLockedForCommentsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int STORAGE_LIMIT_WILL_EXCEED_HASH = HashingUtils::HashString("StorageLimitWillExceedException");
static const int INVALID_COMMENT_OPERATION_HASH = HashingUtils::HashString("InvalidCommentOperationException");
static const int STORAGE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("StorageLimitExceededException");
static const int UNAUTHORIZED_OPERATION_HASH = HashingUtils::HashString("UnauthorizedOperationException");
static const int TOO_MANY_SUBSCRIPTIONS_HASH = HashingUtils::HashString("TooManySubscriptionsException");
static const int ILLEGAL_USER_STATE_HASH = HashingUtils::HashString("IllegalUserStateException");
static const int DEACTIVATING_LAST_SYSTEM_USER_HASH = HashingUtils::HashString("DeactivatingLastSystemUserException");
static const int UNAUTHORIZED_RESOURCE_ACCESS_HASH = HashingUtils::HashString("UnauthorizedResourceAccessException");
static const int ENTITY_NOT_EXISTS_HASH = HashingUtils::HashString("EntityNotExistsException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int CONFLICTING_OPERATION_HASH = HashingUtils::HashString("ConflictingOperationException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::ENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == REQUESTED_ENTITY_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::REQUESTED_ENTITY_TOO_LARGE), false);
  }
  else if (hashCode == TOO_MANY_LABELS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::TOO_MANY_LABELS), false);
  }
  else if (hashCode == DRAFT_UPLOAD_OUT_OF_SYNC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::DRAFT_UPLOAD_OUT_OF_SYNC), false);
  }
  else if (hashCode == FAILED_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::FAILED_DEPENDENCY), false);
  }
  else if (hashCode == RESOURCE_ALREADY_CHECKED_OUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::RESOURCE_ALREADY_CHECKED_OUT), false);
  }
  else if (hashCode == CUSTOM_METADATA_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::CUSTOM_METADATA_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == PROHIBITED_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::PROHIBITED_STATE), false);
  }
  else if (hashCode == DOCUMENT_LOCKED_FOR_COMMENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::DOCUMENT_LOCKED_FOR_COMMENTS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == STORAGE_LIMIT_WILL_EXCEED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::STORAGE_LIMIT_WILL_EXCEED), false);
  }
  else if (hashCode == INVALID_COMMENT_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::INVALID_COMMENT_OPERATION), false);
  }
  else if (hashCode == STORAGE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::STORAGE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNAUTHORIZED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::UNAUTHORIZED_OPERATION), false);
  }
  else if (hashCode == TOO_MANY_SUBSCRIPTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::TOO_MANY_SUBSCRIPTIONS), false);
  }
  else if (hashCode == ILLEGAL_USER_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::ILLEGAL_USER_STATE), false);
  }
  else if (hashCode == DEACTIVATING_LAST_SYSTEM_USER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::DEACTIVATING_LAST_SYSTEM_USER), false);
  }
  else if (hashCode == UNAUTHORIZED_RESOURCE_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::UNAUTHORIZED_RESOURCE_ACCESS), false);
  }
  else if (hashCode == ENTITY_NOT_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::ENTITY_NOT_EXISTS), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == CONFLICTING_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::CONFLICTING_OPERATION), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkDocsErrors::INVALID_ARGUMENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkDocsErrorMapper
} // namespace WorkDocs
} // namespace Aws
