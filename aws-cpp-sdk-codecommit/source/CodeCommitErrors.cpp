/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommitErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeCommit;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace CodeCommitErrorMapper
{

static const int ENCRYPTION_KEY_ACCESS_DENIED_HASH = HashingUtils::HashString("EncryptionKeyAccessDeniedException");
static const int INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH = HashingUtils::HashString("InvalidRepositoryTriggerDestinationArnException");
static const int REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerEventsListRequiredException");
static const int COMMIT_ID_REQUIRED_HASH = HashingUtils::HashString("CommitIdRequiredException");
static const int REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerDestinationArnRequiredException");
static const int REPOSITORY_NAMES_REQUIRED_HASH = HashingUtils::HashString("RepositoryNamesRequiredException");
static const int REPOSITORY_NAME_EXISTS_HASH = HashingUtils::HashString("RepositoryNameExistsException");
static const int INVALID_REPOSITORY_TRIGGER_EVENTS_HASH = HashingUtils::HashString("InvalidRepositoryTriggerEventsException");
static const int ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH = HashingUtils::HashString("EncryptionIntegrityChecksFailedException");
static const int INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerBranchNameException");
static const int ENCRYPTION_KEY_UNAVAILABLE_HASH = HashingUtils::HashString("EncryptionKeyUnavailableException");
static const int REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerBranchNameListRequiredException");
static const int INVALID_REPOSITORY_NAME_HASH = HashingUtils::HashString("InvalidRepositoryNameException");
static const int REPOSITORY_TRIGGER_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerNameRequiredException");
static const int INVALID_REPOSITORY_TRIGGER_REGION_HASH = HashingUtils::HashString("InvalidRepositoryTriggerRegionException");
static const int COMMIT_ID_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitIdDoesNotExistException");
static const int INVALID_ORDER_HASH = HashingUtils::HashString("InvalidOrderException");
static const int INVALID_REPOSITORY_TRIGGER_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerNameException");
static const int ENCRYPTION_KEY_NOT_FOUND_HASH = HashingUtils::HashString("EncryptionKeyNotFoundException");
static const int MAXIMUM_BRANCHES_EXCEEDED_HASH = HashingUtils::HashString("MaximumBranchesExceededException");
static const int REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggersListRequiredException");
static const int ENCRYPTION_KEY_DISABLED_HASH = HashingUtils::HashString("EncryptionKeyDisabledException");
static const int INVALID_COMMIT_ID_HASH = HashingUtils::HashString("InvalidCommitIdException");
static const int COMMIT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitDoesNotExistException");
static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("InvalidSortByException");
static const int BRANCH_NAME_REQUIRED_HASH = HashingUtils::HashString("BranchNameRequiredException");
static const int INVALID_REPOSITORY_DESCRIPTION_HASH = HashingUtils::HashString("InvalidRepositoryDescriptionException");
static const int BRANCH_DOES_NOT_EXIST_HASH = HashingUtils::HashString("BranchDoesNotExistException");
static const int REPOSITORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RepositoryLimitExceededException");
static const int INVALID_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidBranchNameException");
static const int INVALID_CONTINUATION_TOKEN_HASH = HashingUtils::HashString("InvalidContinuationTokenException");
static const int MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryTriggersExceededException");
static const int REPOSITORY_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryNameRequiredException");
static const int BRANCH_NAME_EXISTS_HASH = HashingUtils::HashString("BranchNameExistsException");
static const int INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH = HashingUtils::HashString("InvalidRepositoryTriggerCustomDataException");
static const int REPOSITORY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RepositoryDoesNotExistException");
static const int MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryNamesExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_ACCESS_DENIED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED), false);
  }
  else if (hashCode == COMMIT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_REQUIRED), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED), false);
  }
  else if (hashCode == REPOSITORY_NAMES_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAMES_REQUIRED), false);
  }
  else if (hashCode == REPOSITORY_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_EXISTS), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_EVENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_EVENTS), false);
  }
  else if (hashCode == ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_INTEGRITY_CHECKS_FAILED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_BRANCH_NAME), false);
  }
  else if (hashCode == ENCRYPTION_KEY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_UNAVAILABLE), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_NAME), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_REGION), false);
  }
  else if (hashCode == COMMIT_ID_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_ORDER), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_NAME), false);
  }
  else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_NOT_FOUND), false);
  }
  else if (hashCode == MAXIMUM_BRANCHES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_BRANCHES_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGERS_LIST_REQUIRED), false);
  }
  else if (hashCode == ENCRYPTION_KEY_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_DISABLED), false);
  }
  else if (hashCode == INVALID_COMMIT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMIT_ID), false);
  }
  else if (hashCode == COMMIT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_SORT_BY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SORT_BY), false);
  }
  else if (hashCode == BRANCH_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_DESCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_DESCRIPTION), false);
  }
  else if (hashCode == BRANCH_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_DOES_NOT_EXIST), false);
  }
  else if (hashCode == REPOSITORY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_BRANCH_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_BRANCH_NAME), false);
  }
  else if (hashCode == INVALID_CONTINUATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONTINUATION_TOKEN), false);
  }
  else if (hashCode == MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_REQUIRED), false);
  }
  else if (hashCode == BRANCH_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_EXISTS), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA), false);
  }
  else if (hashCode == REPOSITORY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_NAMES_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeCommitErrorMapper
} // namespace CodeCommit
} // namespace Aws
