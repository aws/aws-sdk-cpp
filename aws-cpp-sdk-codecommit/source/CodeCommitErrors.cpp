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

static const int DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME_HASH = HashingUtils::HashString("DirectoryNameConflictsWithFileNameException");
static const int BLOB_ID_REQUIRED_HASH = HashingUtils::HashString("BlobIdRequiredException");
static const int MULTIPLE_REPOSITORIES_IN_PULL_REQUEST_HASH = HashingUtils::HashString("MultipleRepositoriesInPullRequestException");
static const int INVALID_BLOB_ID_HASH = HashingUtils::HashString("InvalidBlobIdException");
static const int REPOSITORY_NAMES_REQUIRED_HASH = HashingUtils::HashString("RepositoryNamesRequiredException");
static const int INVALID_CONTINUATION_TOKEN_HASH = HashingUtils::HashString("InvalidContinuationTokenException");
static const int MERGE_OPTION_REQUIRED_HASH = HashingUtils::HashString("MergeOptionRequiredException");
static const int ENCRYPTION_KEY_ACCESS_DENIED_HASH = HashingUtils::HashString("EncryptionKeyAccessDeniedException");
static const int CLIENT_REQUEST_TOKEN_REQUIRED_HASH = HashingUtils::HashString("ClientRequestTokenRequiredException");
static const int DEFAULT_BRANCH_CANNOT_BE_DELETED_HASH = HashingUtils::HashString("DefaultBranchCannotBeDeletedException");
static const int INVALID_PULL_REQUEST_ID_HASH = HashingUtils::HashString("InvalidPullRequestIdException");
static const int BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH = HashingUtils::HashString("BeforeCommitIdAndAfterCommitIdAreSameException");
static const int PULL_REQUEST_ID_REQUIRED_HASH = HashingUtils::HashString("PullRequestIdRequiredException");
static const int MAXIMUM_BRANCHES_EXCEEDED_HASH = HashingUtils::HashString("MaximumBranchesExceededException");
static const int REPOSITORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RepositoryLimitExceededException");
static const int REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerDestinationArnRequiredException");
static const int TITLE_REQUIRED_HASH = HashingUtils::HashString("TitleRequiredException");
static const int INVALID_PULL_REQUEST_STATUS_UPDATE_HASH = HashingUtils::HashString("InvalidPullRequestStatusUpdateException");
static const int REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggersListRequiredException");
static const int BRANCH_NAME_EXISTS_HASH = HashingUtils::HashString("BranchNameExistsException");
static const int INVALID_COMMENT_ID_HASH = HashingUtils::HashString("InvalidCommentIdException");
static const int COMMENT_DELETED_HASH = HashingUtils::HashString("CommentDeletedException");
static const int COMMIT_MESSAGE_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("CommitMessageLengthExceededException");
static const int INVALID_PULL_REQUEST_EVENT_TYPE_HASH = HashingUtils::HashString("InvalidPullRequestEventTypeException");
static const int INVALID_COMMIT_HASH = HashingUtils::HashString("InvalidCommitException");
static const int INVALID_COMMIT_ID_HASH = HashingUtils::HashString("InvalidCommitIdException");
static const int INVALID_REPOSITORY_DESCRIPTION_HASH = HashingUtils::HashString("InvalidRepositoryDescriptionException");
static const int INVALID_ACTOR_ARN_HASH = HashingUtils::HashString("InvalidActorArnException");
static const int COMMIT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitDoesNotExistException");
static const int COMMENT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommentDoesNotExistException");
static const int BRANCH_DOES_NOT_EXIST_HASH = HashingUtils::HashString("BranchDoesNotExistException");
static const int IDEMPOTENCY_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotencyParameterMismatchException");
static const int INVALID_REPOSITORY_TRIGGER_EVENTS_HASH = HashingUtils::HashString("InvalidRepositoryTriggerEventsException");
static const int BRANCH_NAME_REQUIRED_HASH = HashingUtils::HashString("BranchNameRequiredException");
static const int COMMENT_ID_REQUIRED_HASH = HashingUtils::HashString("CommentIdRequiredException");
static const int INVALID_CLIENT_REQUEST_TOKEN_HASH = HashingUtils::HashString("InvalidClientRequestTokenException");
static const int REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST_HASH = HashingUtils::HashString("RepositoryNotAssociatedWithPullRequestException");
static const int INVALID_REPOSITORY_TRIGGER_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerNameException");
static const int INVALID_DESCRIPTION_HASH = HashingUtils::HashString("InvalidDescriptionException");
static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("InvalidSortByException");
static const int MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryNamesExceededException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTargetException");
static const int PARENT_COMMIT_ID_OUTDATED_HASH = HashingUtils::HashString("ParentCommitIdOutdatedException");
static const int COMMIT_REQUIRED_HASH = HashingUtils::HashString("CommitRequiredException");
static const int COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CommentContentSizeLimitExceededException");
static const int REPOSITORY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RepositoryDoesNotExistException");
static const int MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED_HASH = HashingUtils::HashString("MaximumOpenPullRequestsExceededException");
static const int REFERENCE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ReferenceDoesNotExistException");
static const int PATH_DOES_NOT_EXIST_HASH = HashingUtils::HashString("PathDoesNotExistException");
static const int TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT_HASH = HashingUtils::HashString("TipOfSourceReferenceIsDifferentException");
static const int TARGETS_REQUIRED_HASH = HashingUtils::HashString("TargetsRequiredException");
static const int FILE_CONTENT_REQUIRED_HASH = HashingUtils::HashString("FileContentRequiredException");
static const int PULL_REQUEST_DOES_NOT_EXIST_HASH = HashingUtils::HashString("PullRequestDoesNotExistException");
static const int BRANCH_NAME_IS_TAG_NAME_HASH = HashingUtils::HashString("BranchNameIsTagNameException");
static const int COMMIT_ID_REQUIRED_HASH = HashingUtils::HashString("CommitIdRequiredException");
static const int ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH = HashingUtils::HashString("EncryptionIntegrityChecksFailedException");
static const int PARENT_COMMIT_ID_REQUIRED_HASH = HashingUtils::HashString("ParentCommitIdRequiredException");
static const int REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerEventsListRequiredException");
static const int INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH = HashingUtils::HashString("InvalidRepositoryTriggerDestinationArnException");
static const int INVALID_ORDER_HASH = HashingUtils::HashString("InvalidOrderException");
static const int INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH = HashingUtils::HashString("InvalidRepositoryTriggerCustomDataException");
static const int PULL_REQUEST_ALREADY_CLOSED_HASH = HashingUtils::HashString("PullRequestAlreadyClosedException");
static const int INVALID_EMAIL_HASH = HashingUtils::HashString("InvalidEmailException");
static const int INVALID_FILE_MODE_HASH = HashingUtils::HashString("InvalidFileModeException");
static const int PULL_REQUEST_STATUS_REQUIRED_HASH = HashingUtils::HashString("PullRequestStatusRequiredException");
static const int PATH_REQUIRED_HASH = HashingUtils::HashString("PathRequiredException");
static const int INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerBranchNameException");
static const int INVALID_SOURCE_COMMIT_SPECIFIER_HASH = HashingUtils::HashString("InvalidSourceCommitSpecifierException");
static const int INVALID_MERGE_OPTION_HASH = HashingUtils::HashString("InvalidMergeOptionException");
static const int ENCRYPTION_KEY_UNAVAILABLE_HASH = HashingUtils::HashString("EncryptionKeyUnavailableException");
static const int REPOSITORY_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryNameRequiredException");
static const int INVALID_REPOSITORY_TRIGGER_REGION_HASH = HashingUtils::HashString("InvalidRepositoryTriggerRegionException");
static const int INVALID_FILE_LOCATION_HASH = HashingUtils::HashString("InvalidFileLocationException");
static const int REFERENCE_NAME_REQUIRED_HASH = HashingUtils::HashString("ReferenceNameRequiredException");
static const int INVALID_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidBranchNameException");
static const int SAME_FILE_CONTENT_HASH = HashingUtils::HashString("SameFileContentException");
static const int NAME_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("NameLengthExceededException");
static const int REPOSITORY_NAME_EXISTS_HASH = HashingUtils::HashString("RepositoryNameExistsException");
static const int PARENT_COMMIT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ParentCommitDoesNotExistException");
static const int COMMENT_NOT_CREATED_BY_CALLER_HASH = HashingUtils::HashString("CommentNotCreatedByCallerException");
static const int ENCRYPTION_KEY_DISABLED_HASH = HashingUtils::HashString("EncryptionKeyDisabledException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int ENCRYPTION_KEY_NOT_FOUND_HASH = HashingUtils::HashString("EncryptionKeyNotFoundException");
static const int REFERENCE_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ReferenceTypeNotSupportedException");
static const int INVALID_PATH_HASH = HashingUtils::HashString("InvalidPathException");
static const int FILE_TOO_LARGE_HASH = HashingUtils::HashString("FileTooLargeException");
static const int MANUAL_MERGE_REQUIRED_HASH = HashingUtils::HashString("ManualMergeRequiredException");
static const int INVALID_RELATIVE_FILE_VERSION_ENUM_HASH = HashingUtils::HashString("InvalidRelativeFileVersionEnumException");
static const int INVALID_REFERENCE_NAME_HASH = HashingUtils::HashString("InvalidReferenceNameException");
static const int BLOB_ID_DOES_NOT_EXIST_HASH = HashingUtils::HashString("BlobIdDoesNotExistException");
static const int INVALID_TITLE_HASH = HashingUtils::HashString("InvalidTitleException");
static const int SOURCE_AND_DESTINATION_ARE_SAME_HASH = HashingUtils::HashString("SourceAndDestinationAreSameException");
static const int REPOSITORY_TRIGGER_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerNameRequiredException");
static const int INVALID_PULL_REQUEST_STATUS_HASH = HashingUtils::HashString("InvalidPullRequestStatusException");
static const int AUTHOR_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AuthorDoesNotExistException");
static const int FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME_HASH = HashingUtils::HashString("FileNameConflictsWithDirectoryNameException");
static const int INVALID_FILE_POSITION_HASH = HashingUtils::HashString("InvalidFilePositionException");
static const int INVALID_REPOSITORY_NAME_HASH = HashingUtils::HashString("InvalidRepositoryNameException");
static const int TIPS_DIVERGENCE_EXCEEDED_HASH = HashingUtils::HashString("TipsDivergenceExceededException");
static const int INVALID_PARENT_COMMIT_ID_HASH = HashingUtils::HashString("InvalidParentCommitIdException");
static const int TARGET_REQUIRED_HASH = HashingUtils::HashString("TargetRequiredException");
static const int INVALID_AUTHOR_ARN_HASH = HashingUtils::HashString("InvalidAuthorArnException");
static const int FILE_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FileContentSizeLimitExceededException");
static const int COMMENT_CONTENT_REQUIRED_HASH = HashingUtils::HashString("CommentContentRequiredException");
static const int INVALID_TARGETS_HASH = HashingUtils::HashString("InvalidTargetsException");
static const int INVALID_DESTINATION_COMMIT_SPECIFIER_HASH = HashingUtils::HashString("InvalidDestinationCommitSpecifierException");
static const int COMMIT_ID_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitIdDoesNotExistException");
static const int ACTOR_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ActorDoesNotExistException");
static const int MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryTriggersExceededException");
static const int REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerBranchNameListRequiredException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME), false);
  }
  else if (hashCode == BLOB_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BLOB_ID_REQUIRED), false);
  }
  else if (hashCode == MULTIPLE_REPOSITORIES_IN_PULL_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MULTIPLE_REPOSITORIES_IN_PULL_REQUEST), false);
  }
  else if (hashCode == INVALID_BLOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_BLOB_ID), false);
  }
  else if (hashCode == REPOSITORY_NAMES_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAMES_REQUIRED), false);
  }
  else if (hashCode == INVALID_CONTINUATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONTINUATION_TOKEN), false);
  }
  else if (hashCode == MERGE_OPTION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MERGE_OPTION_REQUIRED), false);
  }
  else if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_ACCESS_DENIED), false);
  }
  else if (hashCode == CLIENT_REQUEST_TOKEN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::CLIENT_REQUEST_TOKEN_REQUIRED), false);
  }
  else if (hashCode == DEFAULT_BRANCH_CANNOT_BE_DELETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::DEFAULT_BRANCH_CANNOT_BE_DELETED), false);
  }
  else if (hashCode == INVALID_PULL_REQUEST_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_ID), false);
  }
  else if (hashCode == BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME), false);
  }
  else if (hashCode == PULL_REQUEST_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_ID_REQUIRED), false);
  }
  else if (hashCode == MAXIMUM_BRANCHES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_BRANCHES_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED), false);
  }
  else if (hashCode == TITLE_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TITLE_REQUIRED), false);
  }
  else if (hashCode == INVALID_PULL_REQUEST_STATUS_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_STATUS_UPDATE), false);
  }
  else if (hashCode == REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGERS_LIST_REQUIRED), false);
  }
  else if (hashCode == BRANCH_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_EXISTS), false);
  }
  else if (hashCode == INVALID_COMMENT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMENT_ID), false);
  }
  else if (hashCode == COMMENT_DELETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_DELETED), false);
  }
  else if (hashCode == COMMIT_MESSAGE_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_MESSAGE_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PULL_REQUEST_EVENT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_EVENT_TYPE), false);
  }
  else if (hashCode == INVALID_COMMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMIT), false);
  }
  else if (hashCode == INVALID_COMMIT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMIT_ID), false);
  }
  else if (hashCode == INVALID_REPOSITORY_DESCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_DESCRIPTION), false);
  }
  else if (hashCode == INVALID_ACTOR_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_ACTOR_ARN), false);
  }
  else if (hashCode == COMMIT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == COMMENT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == BRANCH_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_DOES_NOT_EXIST), false);
  }
  else if (hashCode == IDEMPOTENCY_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::IDEMPOTENCY_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_EVENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_EVENTS), false);
  }
  else if (hashCode == BRANCH_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_REQUIRED), false);
  }
  else if (hashCode == COMMENT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_ID_REQUIRED), false);
  }
  else if (hashCode == INVALID_CLIENT_REQUEST_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CLIENT_REQUEST_TOKEN), false);
  }
  else if (hashCode == REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_NAME), false);
  }
  else if (hashCode == INVALID_DESCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_DESCRIPTION), false);
  }
  else if (hashCode == INVALID_SORT_BY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SORT_BY), false);
  }
  else if (hashCode == MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_NAMES_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TARGET), false);
  }
  else if (hashCode == PARENT_COMMIT_ID_OUTDATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_ID_OUTDATED), false);
  }
  else if (hashCode == COMMIT_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_REQUIRED), false);
  }
  else if (hashCode == COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED), false);
  }
  else if (hashCode == REFERENCE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == PATH_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PATH_DOES_NOT_EXIST), false);
  }
  else if (hashCode == TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT), false);
  }
  else if (hashCode == TARGETS_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TARGETS_REQUIRED), false);
  }
  else if (hashCode == FILE_CONTENT_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_CONTENT_REQUIRED), false);
  }
  else if (hashCode == PULL_REQUEST_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_DOES_NOT_EXIST), false);
  }
  else if (hashCode == BRANCH_NAME_IS_TAG_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_IS_TAG_NAME), false);
  }
  else if (hashCode == COMMIT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_REQUIRED), false);
  }
  else if (hashCode == ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_INTEGRITY_CHECKS_FAILED), false);
  }
  else if (hashCode == PARENT_COMMIT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_ID_REQUIRED), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN), false);
  }
  else if (hashCode == INVALID_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_ORDER), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA), false);
  }
  else if (hashCode == PULL_REQUEST_ALREADY_CLOSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_ALREADY_CLOSED), false);
  }
  else if (hashCode == INVALID_EMAIL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_EMAIL), false);
  }
  else if (hashCode == INVALID_FILE_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_MODE), false);
  }
  else if (hashCode == PULL_REQUEST_STATUS_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_STATUS_REQUIRED), false);
  }
  else if (hashCode == PATH_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PATH_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_BRANCH_NAME), false);
  }
  else if (hashCode == INVALID_SOURCE_COMMIT_SPECIFIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SOURCE_COMMIT_SPECIFIER), false);
  }
  else if (hashCode == INVALID_MERGE_OPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MERGE_OPTION), false);
  }
  else if (hashCode == ENCRYPTION_KEY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_UNAVAILABLE), false);
  }
  else if (hashCode == REPOSITORY_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_REGION), false);
  }
  else if (hashCode == INVALID_FILE_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_LOCATION), false);
  }
  else if (hashCode == REFERENCE_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_BRANCH_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_BRANCH_NAME), false);
  }
  else if (hashCode == SAME_FILE_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SAME_FILE_CONTENT), false);
  }
  else if (hashCode == NAME_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::NAME_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_EXISTS), false);
  }
  else if (hashCode == PARENT_COMMIT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == COMMENT_NOT_CREATED_BY_CALLER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_NOT_CREATED_BY_CALLER), false);
  }
  else if (hashCode == ENCRYPTION_KEY_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_DISABLED), false);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MAX_RESULTS), false);
  }
  else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_NOT_FOUND), false);
  }
  else if (hashCode == REFERENCE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == INVALID_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PATH), false);
  }
  else if (hashCode == FILE_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_TOO_LARGE), false);
  }
  else if (hashCode == MANUAL_MERGE_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MANUAL_MERGE_REQUIRED), false);
  }
  else if (hashCode == INVALID_RELATIVE_FILE_VERSION_ENUM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_RELATIVE_FILE_VERSION_ENUM), false);
  }
  else if (hashCode == INVALID_REFERENCE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REFERENCE_NAME), false);
  }
  else if (hashCode == BLOB_ID_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BLOB_ID_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_TITLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TITLE), false);
  }
  else if (hashCode == SOURCE_AND_DESTINATION_ARE_SAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SOURCE_AND_DESTINATION_ARE_SAME), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_PULL_REQUEST_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_STATUS), false);
  }
  else if (hashCode == AUTHOR_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::AUTHOR_DOES_NOT_EXIST), false);
  }
  else if (hashCode == FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME), false);
  }
  else if (hashCode == INVALID_FILE_POSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_POSITION), false);
  }
  else if (hashCode == INVALID_REPOSITORY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_NAME), false);
  }
  else if (hashCode == TIPS_DIVERGENCE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TIPS_DIVERGENCE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PARENT_COMMIT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PARENT_COMMIT_ID), false);
  }
  else if (hashCode == TARGET_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TARGET_REQUIRED), false);
  }
  else if (hashCode == INVALID_AUTHOR_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_AUTHOR_ARN), false);
  }
  else if (hashCode == FILE_CONTENT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_CONTENT_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == COMMENT_CONTENT_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_CONTENT_REQUIRED), false);
  }
  else if (hashCode == INVALID_TARGETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TARGETS), false);
  }
  else if (hashCode == INVALID_DESTINATION_COMMIT_SPECIFIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_DESTINATION_COMMIT_SPECIFIER), false);
  }
  else if (hashCode == COMMIT_ID_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_DOES_NOT_EXIST), false);
  }
  else if (hashCode == ACTOR_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ACTOR_DOES_NOT_EXIST), false);
  }
  else if (hashCode == MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED), false);
  }
  else if (hashCode == REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeCommitErrorMapper
} // namespace CodeCommit
} // namespace Aws
