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

static const int REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggersListRequiredException");
static const int PULL_REQUEST_DOES_NOT_EXIST_HASH = HashingUtils::HashString("PullRequestDoesNotExistException");
static const int BRANCH_NAME_EXISTS_HASH = HashingUtils::HashString("BranchNameExistsException");
static const int FILE_ENTRY_REQUIRED_HASH = HashingUtils::HashString("FileEntryRequiredException");
static const int INVALID_CONFLICT_RESOLUTION_STRATEGY_HASH = HashingUtils::HashString("InvalidConflictResolutionStrategyException");
static const int PATH_DOES_NOT_EXIST_HASH = HashingUtils::HashString("PathDoesNotExistException");
static const int FILE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("FileDoesNotExistException");
static const int INVALID_PULL_REQUEST_ID_HASH = HashingUtils::HashString("InvalidPullRequestIdException");
static const int COMMIT_MESSAGE_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("CommitMessageLengthExceededException");
static const int COMMENT_CONTENT_REQUIRED_HASH = HashingUtils::HashString("CommentContentRequiredException");
static const int INVALID_MAX_MERGE_HUNKS_HASH = HashingUtils::HashString("InvalidMaxMergeHunksException");
static const int INVALID_CONTINUATION_TOKEN_HASH = HashingUtils::HashString("InvalidContinuationTokenException");
static const int MERGE_OPTION_REQUIRED_HASH = HashingUtils::HashString("MergeOptionRequiredException");
static const int INVALID_AUTHOR_ARN_HASH = HashingUtils::HashString("InvalidAuthorArnException");
static const int INVALID_TARGET_BRANCH_HASH = HashingUtils::HashString("InvalidTargetBranchException");
static const int INVALID_COMMIT_ID_HASH = HashingUtils::HashString("InvalidCommitIdException");
static const int MULTIPLE_REPOSITORIES_IN_PULL_REQUEST_HASH = HashingUtils::HashString("MultipleRepositoriesInPullRequestException");
static const int INVALID_REPLACEMENT_CONTENT_HASH = HashingUtils::HashString("InvalidReplacementContentException");
static const int INVALID_ACTOR_ARN_HASH = HashingUtils::HashString("InvalidActorArnException");
static const int INVALID_REPOSITORY_TRIGGER_EVENTS_HASH = HashingUtils::HashString("InvalidRepositoryTriggerEventsException");
static const int COMMIT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitDoesNotExistException");
static const int BRANCH_DOES_NOT_EXIST_HASH = HashingUtils::HashString("BranchDoesNotExistException");
static const int TAGS_MAP_REQUIRED_HASH = HashingUtils::HashString("TagsMapRequiredException");
static const int REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerDestinationArnRequiredException");
static const int REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerEventsListRequiredException");
static const int REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerBranchNameListRequiredException");
static const int INVALID_PULL_REQUEST_STATUS_HASH = HashingUtils::HashString("InvalidPullRequestStatusException");
static const int INVALID_BLOB_ID_HASH = HashingUtils::HashString("InvalidBlobIdException");
static const int DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME_HASH = HashingUtils::HashString("DirectoryNameConflictsWithFileNameException");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicyException");
static const int INVALID_COMMIT_HASH = HashingUtils::HashString("InvalidCommitException");
static const int REPOSITORY_TRIGGER_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryTriggerNameRequiredException");
static const int MAXIMUM_BRANCHES_EXCEEDED_HASH = HashingUtils::HashString("MaximumBranchesExceededException");
static const int INVALID_PARENT_COMMIT_ID_HASH = HashingUtils::HashString("InvalidParentCommitIdException");
static const int CLIENT_REQUEST_TOKEN_REQUIRED_HASH = HashingUtils::HashString("ClientRequestTokenRequiredException");
static const int PARENT_COMMIT_ID_OUTDATED_HASH = HashingUtils::HashString("ParentCommitIdOutdatedException");
static const int SOURCE_FILE_OR_CONTENT_REQUIRED_HASH = HashingUtils::HashString("SourceFileOrContentRequiredException");
static const int REPOSITORY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RepositoryDoesNotExistException");
static const int DEFAULT_BRANCH_CANNOT_BE_DELETED_HASH = HashingUtils::HashString("DefaultBranchCannotBeDeletedException");
static const int INVALID_PULL_REQUEST_STATUS_UPDATE_HASH = HashingUtils::HashString("InvalidPullRequestStatusUpdateException");
static const int ENCRYPTION_KEY_DISABLED_HASH = HashingUtils::HashString("EncryptionKeyDisabledException");
static const int TITLE_REQUIRED_HASH = HashingUtils::HashString("TitleRequiredException");
static const int TARGETS_REQUIRED_HASH = HashingUtils::HashString("TargetsRequiredException");
static const int COMMENT_NOT_CREATED_BY_CALLER_HASH = HashingUtils::HashString("CommentNotCreatedByCallerException");
static const int NAME_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("NameLengthExceededException");
static const int MAXIMUM_CONFLICT_RESOLUTION_ENTRIES_EXCEEDED_HASH = HashingUtils::HashString("MaximumConflictResolutionEntriesExceededException");
static const int COMMENT_DELETED_HASH = HashingUtils::HashString("CommentDeletedException");
static const int COMMIT_ID_REQUIRED_HASH = HashingUtils::HashString("CommitIdRequiredException");
static const int RESTRICTED_SOURCE_FILE_HASH = HashingUtils::HashString("RestrictedSourceFileException");
static const int IDEMPOTENCY_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotencyParameterMismatchException");
static const int MAXIMUM_ITEMS_TO_COMPARE_EXCEEDED_HASH = HashingUtils::HashString("MaximumItemsToCompareExceededException");
static const int PARENT_COMMIT_ID_REQUIRED_HASH = HashingUtils::HashString("ParentCommitIdRequiredException");
static const int INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH = HashingUtils::HashString("InvalidRepositoryTriggerDestinationArnException");
static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("InvalidSortByException");
static const int INVALID_RELATIVE_FILE_VERSION_ENUM_HASH = HashingUtils::HashString("InvalidRelativeFileVersionEnumException");
static const int INVALID_CLIENT_REQUEST_TOKEN_HASH = HashingUtils::HashString("InvalidClientRequestTokenException");
static const int BRANCH_NAME_REQUIRED_HASH = HashingUtils::HashString("BranchNameRequiredException");
static const int FILE_CONTENT_REQUIRED_HASH = HashingUtils::HashString("FileContentRequiredException");
static const int MAXIMUM_FILE_CONTENT_TO_LOAD_EXCEEDED_HASH = HashingUtils::HashString("MaximumFileContentToLoadExceededException");
static const int SAME_PATH_REQUEST_HASH = HashingUtils::HashString("SamePathRequestException");
static const int INVALID_DESCRIPTION_HASH = HashingUtils::HashString("InvalidDescriptionException");
static const int INVALID_REPLACEMENT_TYPE_HASH = HashingUtils::HashString("InvalidReplacementTypeException");
static const int ENCRYPTION_KEY_ACCESS_DENIED_HASH = HashingUtils::HashString("EncryptionKeyAccessDeniedException");
static const int INVALID_RESOURCE_ARN_HASH = HashingUtils::HashString("InvalidResourceArnException");
static const int INVALID_CONFLICT_RESOLUTION_HASH = HashingUtils::HashString("InvalidConflictResolutionException");
static const int BLOB_ID_REQUIRED_HASH = HashingUtils::HashString("BlobIdRequiredException");
static const int REPOSITORY_NAMES_REQUIRED_HASH = HashingUtils::HashString("RepositoryNamesRequiredException");
static const int COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CommentContentSizeLimitExceededException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTargetException");
static const int REFERENCE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ReferenceDoesNotExistException");
static const int BRANCH_NAME_IS_TAG_NAME_HASH = HashingUtils::HashString("BranchNameIsTagNameException");
static const int REPOSITORY_NAME_REQUIRED_HASH = HashingUtils::HashString("RepositoryNameRequiredException");
static const int PULL_REQUEST_STATUS_REQUIRED_HASH = HashingUtils::HashString("PullRequestStatusRequiredException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT_HASH = HashingUtils::HashString("TipOfSourceReferenceIsDifferentException");
static const int REPOSITORY_NAME_EXISTS_HASH = HashingUtils::HashString("RepositoryNameExistsException");
static const int FILE_MODE_REQUIRED_HASH = HashingUtils::HashString("FileModeRequiredException");
static const int ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH = HashingUtils::HashString("EncryptionIntegrityChecksFailedException");
static const int REFERENCE_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ReferenceTypeNotSupportedException");
static const int INVALID_REPOSITORY_TRIGGER_REGION_HASH = HashingUtils::HashString("InvalidRepositoryTriggerRegionException");
static const int INVALID_EMAIL_HASH = HashingUtils::HashString("InvalidEmailException");
static const int INVALID_DESTINATION_COMMIT_SPECIFIER_HASH = HashingUtils::HashString("InvalidDestinationCommitSpecifierException");
static const int COMMIT_ID_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommitIdDoesNotExistException");
static const int PARENT_COMMIT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ParentCommitDoesNotExistException");
static const int TAG_KEYS_LIST_REQUIRED_HASH = HashingUtils::HashString("TagKeysListRequiredException");
static const int INVALID_ORDER_HASH = HashingUtils::HashString("InvalidOrderException");
static const int INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH = HashingUtils::HashString("InvalidRepositoryTriggerCustomDataException");
static const int INVALID_REFERENCE_NAME_HASH = HashingUtils::HashString("InvalidReferenceNameException");
static const int PULL_REQUEST_ALREADY_CLOSED_HASH = HashingUtils::HashString("PullRequestAlreadyClosedException");
static const int INVALID_SYSTEM_TAG_USAGE_HASH = HashingUtils::HashString("InvalidSystemTagUsageException");
static const int INVALID_TAG_KEYS_LIST_HASH = HashingUtils::HashString("InvalidTagKeysListException");
static const int INVALID_MERGE_OPTION_HASH = HashingUtils::HashString("InvalidMergeOptionException");
static const int COMMENT_ID_REQUIRED_HASH = HashingUtils::HashString("CommentIdRequiredException");
static const int REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST_HASH = HashingUtils::HashString("RepositoryNotAssociatedWithPullRequestException");
static const int INVALID_SOURCE_COMMIT_SPECIFIER_HASH = HashingUtils::HashString("InvalidSourceCommitSpecifierException");
static const int FILE_PATH_CONFLICTS_WITH_SUBMODULE_PATH_HASH = HashingUtils::HashString("FilePathConflictsWithSubmodulePathException");
static const int RESOURCE_ARN_REQUIRED_HASH = HashingUtils::HashString("ResourceArnRequiredException");
static const int INVALID_FILE_MODE_HASH = HashingUtils::HashString("InvalidFileModeException");
static const int INVALID_REPOSITORY_TRIGGER_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerNameException");
static const int INVALID_TITLE_HASH = HashingUtils::HashString("InvalidTitleException");
static const int SOURCE_AND_DESTINATION_ARE_SAME_HASH = HashingUtils::HashString("SourceAndDestinationAreSameException");
static const int PATH_REQUIRED_HASH = HashingUtils::HashString("PathRequiredException");
static const int INVALID_DELETION_PARAMETER_HASH = HashingUtils::HashString("InvalidDeletionParameterException");
static const int INVALID_TAGS_MAP_HASH = HashingUtils::HashString("InvalidTagsMapException");
static const int INVALID_FILE_LOCATION_HASH = HashingUtils::HashString("InvalidFileLocationException");
static const int INVALID_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidBranchNameException");
static const int MAXIMUM_FILE_ENTRIES_EXCEEDED_HASH = HashingUtils::HashString("MaximumFileEntriesExceededException");
static const int MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryNamesExceededException");
static const int MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED_HASH = HashingUtils::HashString("MaximumOpenPullRequestsExceededException");
static const int ENCRYPTION_KEY_NOT_FOUND_HASH = HashingUtils::HashString("EncryptionKeyNotFoundException");
static const int REFERENCE_NAME_REQUIRED_HASH = HashingUtils::HashString("ReferenceNameRequiredException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int REPLACEMENT_CONTENT_REQUIRED_HASH = HashingUtils::HashString("ReplacementContentRequiredException");
static const int COMMIT_REQUIRED_HASH = HashingUtils::HashString("CommitRequiredException");
static const int ENCRYPTION_KEY_UNAVAILABLE_HASH = HashingUtils::HashString("EncryptionKeyUnavailableException");
static const int MULTIPLE_CONFLICT_RESOLUTION_ENTRIES_HASH = HashingUtils::HashString("MultipleConflictResolutionEntriesException");
static const int INVALID_MAX_CONFLICT_FILES_HASH = HashingUtils::HashString("InvalidMaxConflictFilesException");
static const int COMMENT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CommentDoesNotExistException");
static const int INVALID_COMMENT_ID_HASH = HashingUtils::HashString("InvalidCommentIdException");
static const int TARGET_REQUIRED_HASH = HashingUtils::HashString("TargetRequiredException");
static const int FILE_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FileContentSizeLimitExceededException");
static const int INVALID_PULL_REQUEST_EVENT_TYPE_HASH = HashingUtils::HashString("InvalidPullRequestEventTypeException");
static const int REPOSITORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RepositoryLimitExceededException");
static const int INVALID_REPOSITORY_NAME_HASH = HashingUtils::HashString("InvalidRepositoryNameException");
static const int INVALID_REPOSITORY_DESCRIPTION_HASH = HashingUtils::HashString("InvalidRepositoryDescriptionException");
static const int FOLDER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("FolderDoesNotExistException");
static const int INVALID_PATH_HASH = HashingUtils::HashString("InvalidPathException");
static const int ACTOR_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ActorDoesNotExistException");
static const int NO_CHANGE_HASH = HashingUtils::HashString("NoChangeException");
static const int REPLACEMENT_TYPE_REQUIRED_HASH = HashingUtils::HashString("ReplacementTypeRequiredException");
static const int MANUAL_MERGE_REQUIRED_HASH = HashingUtils::HashString("ManualMergeRequiredException");
static const int FILE_TOO_LARGE_HASH = HashingUtils::HashString("FileTooLargeException");
static const int MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH = HashingUtils::HashString("MaximumRepositoryTriggersExceededException");
static const int INVALID_CONFLICT_DETAIL_LEVEL_HASH = HashingUtils::HashString("InvalidConflictDetailLevelException");
static const int BLOB_ID_DOES_NOT_EXIST_HASH = HashingUtils::HashString("BlobIdDoesNotExistException");
static const int PUT_FILE_ENTRY_CONFLICT_HASH = HashingUtils::HashString("PutFileEntryConflictException");
static const int AUTHOR_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AuthorDoesNotExistException");
static const int FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME_HASH = HashingUtils::HashString("FileNameConflictsWithDirectoryNameException");
static const int FOLDER_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FolderContentSizeLimitExceededException");
static const int INVALID_TARGETS_HASH = HashingUtils::HashString("InvalidTargetsException");
static const int INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH = HashingUtils::HashString("InvalidRepositoryTriggerBranchNameException");
static const int TIPS_DIVERGENCE_EXCEEDED_HASH = HashingUtils::HashString("TipsDivergenceExceededException");
static const int PULL_REQUEST_ID_REQUIRED_HASH = HashingUtils::HashString("PullRequestIdRequiredException");
static const int INVALID_FILE_POSITION_HASH = HashingUtils::HashString("InvalidFilePositionException");
static const int FILE_CONTENT_AND_SOURCE_FILE_SPECIFIED_HASH = HashingUtils::HashString("FileContentAndSourceFileSpecifiedException");
static const int BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH = HashingUtils::HashString("BeforeCommitIdAndAfterCommitIdAreSameException");
static const int SAME_FILE_CONTENT_HASH = HashingUtils::HashString("SameFileContentException");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGERS_LIST_REQUIRED), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == BRANCH_NAME_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_EXISTS), false);
    return true;
  }
  else if (hashCode == FILE_ENTRY_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_ENTRY_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_CONFLICT_RESOLUTION_STRATEGY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONFLICT_RESOLUTION_STRATEGY), false);
    return true;
  }
  else if (hashCode == PATH_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PATH_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == FILE_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_PULL_REQUEST_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_ID), false);
    return true;
  }
  else if (hashCode == COMMIT_MESSAGE_LENGTH_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_MESSAGE_LENGTH_EXCEEDED), false);
    return true;
  }
  else if (hashCode == COMMENT_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_CONTENT_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_MAX_MERGE_HUNKS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MAX_MERGE_HUNKS), false);
    return true;
  }
  else if (hashCode == INVALID_CONTINUATION_TOKEN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONTINUATION_TOKEN), false);
    return true;
  }
  else if (hashCode == MERGE_OPTION_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MERGE_OPTION_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_AUTHOR_ARN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_AUTHOR_ARN), false);
    return true;
  }
  else if (hashCode == INVALID_TARGET_BRANCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TARGET_BRANCH), false);
    return true;
  }
  else if (hashCode == INVALID_COMMIT_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMIT_ID), false);
    return true;
  }
  else if (hashCode == MULTIPLE_REPOSITORIES_IN_PULL_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MULTIPLE_REPOSITORIES_IN_PULL_REQUEST), false);
    return true;
  }
  else if (hashCode == INVALID_REPLACEMENT_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPLACEMENT_CONTENT), false);
    return true;
  }
  else if (hashCode == INVALID_ACTOR_ARN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_ACTOR_ARN), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_EVENTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_EVENTS), false);
    return true;
  }
  else if (hashCode == COMMIT_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == BRANCH_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == TAGS_MAP_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TAGS_MAP_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_PULL_REQUEST_STATUS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_STATUS), false);
    return true;
  }
  else if (hashCode == INVALID_BLOB_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_BLOB_ID), false);
    return true;
  }
  else if (hashCode == DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME), false);
    return true;
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TAG_POLICY), false);
    return true;
  }
  else if (hashCode == INVALID_COMMIT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMIT), false);
    return true;
  }
  else if (hashCode == REPOSITORY_TRIGGER_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_BRANCHES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_BRANCHES_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PARENT_COMMIT_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PARENT_COMMIT_ID), false);
    return true;
  }
  else if (hashCode == CLIENT_REQUEST_TOKEN_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::CLIENT_REQUEST_TOKEN_REQUIRED), false);
    return true;
  }
  else if (hashCode == PARENT_COMMIT_ID_OUTDATED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_ID_OUTDATED), false);
    return true;
  }
  else if (hashCode == SOURCE_FILE_OR_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SOURCE_FILE_OR_CONTENT_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == DEFAULT_BRANCH_CANNOT_BE_DELETED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::DEFAULT_BRANCH_CANNOT_BE_DELETED), false);
    return true;
  }
  else if (hashCode == INVALID_PULL_REQUEST_STATUS_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_STATUS_UPDATE), false);
    return true;
  }
  else if (hashCode == ENCRYPTION_KEY_DISABLED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_DISABLED), false);
    return true;
  }
  else if (hashCode == TITLE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TITLE_REQUIRED), false);
    return true;
  }
  else if (hashCode == TARGETS_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TARGETS_REQUIRED), false);
    return true;
  }
  else if (hashCode == COMMENT_NOT_CREATED_BY_CALLER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_NOT_CREATED_BY_CALLER), false);
    return true;
  }
  else if (hashCode == NAME_LENGTH_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::NAME_LENGTH_EXCEEDED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_CONFLICT_RESOLUTION_ENTRIES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_CONFLICT_RESOLUTION_ENTRIES_EXCEEDED), false);
    return true;
  }
  else if (hashCode == COMMENT_DELETED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_DELETED), false);
    return true;
  }
  else if (hashCode == COMMIT_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_REQUIRED), false);
    return true;
  }
  else if (hashCode == RESTRICTED_SOURCE_FILE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::RESTRICTED_SOURCE_FILE), false);
    return true;
  }
  else if (hashCode == IDEMPOTENCY_PARAMETER_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::IDEMPOTENCY_PARAMETER_MISMATCH), false);
    return true;
  }
  else if (hashCode == MAXIMUM_ITEMS_TO_COMPARE_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_ITEMS_TO_COMPARE_EXCEEDED), false);
    return true;
  }
  else if (hashCode == PARENT_COMMIT_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_ID_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN), false);
    return true;
  }
  else if (hashCode == INVALID_SORT_BY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SORT_BY), false);
    return true;
  }
  else if (hashCode == INVALID_RELATIVE_FILE_VERSION_ENUM_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_RELATIVE_FILE_VERSION_ENUM), false);
    return true;
  }
  else if (hashCode == INVALID_CLIENT_REQUEST_TOKEN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CLIENT_REQUEST_TOKEN), false);
    return true;
  }
  else if (hashCode == BRANCH_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == FILE_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_CONTENT_REQUIRED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_FILE_CONTENT_TO_LOAD_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_FILE_CONTENT_TO_LOAD_EXCEEDED), false);
    return true;
  }
  else if (hashCode == SAME_PATH_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SAME_PATH_REQUEST), false);
    return true;
  }
  else if (hashCode == INVALID_DESCRIPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_DESCRIPTION), false);
    return true;
  }
  else if (hashCode == INVALID_REPLACEMENT_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPLACEMENT_TYPE), false);
    return true;
  }
  else if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_ACCESS_DENIED), false);
    return true;
  }
  else if (hashCode == INVALID_RESOURCE_ARN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_RESOURCE_ARN), false);
    return true;
  }
  else if (hashCode == INVALID_CONFLICT_RESOLUTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONFLICT_RESOLUTION), false);
    return true;
  }
  else if (hashCode == BLOB_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BLOB_ID_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_NAMES_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAMES_REQUIRED), false);
    return true;
  }
  else if (hashCode == COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TARGET), false);
    return true;
  }
  else if (hashCode == REFERENCE_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == BRANCH_NAME_IS_TAG_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BRANCH_NAME_IS_TAG_NAME), false);
    return true;
  }
  else if (hashCode == REPOSITORY_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_STATUS_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_STATUS_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MAX_RESULTS), false);
    return true;
  }
  else if (hashCode == TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT), false);
    return true;
  }
  else if (hashCode == REPOSITORY_NAME_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_EXISTS), false);
    return true;
  }
  else if (hashCode == FILE_MODE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_MODE_REQUIRED), false);
    return true;
  }
  else if (hashCode == ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_INTEGRITY_CHECKS_FAILED), false);
    return true;
  }
  else if (hashCode == REFERENCE_TYPE_NOT_SUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_TYPE_NOT_SUPPORTED), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_REGION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_REGION), false);
    return true;
  }
  else if (hashCode == INVALID_EMAIL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_EMAIL), false);
    return true;
  }
  else if (hashCode == INVALID_DESTINATION_COMMIT_SPECIFIER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_DESTINATION_COMMIT_SPECIFIER), false);
    return true;
  }
  else if (hashCode == COMMIT_ID_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_ID_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == PARENT_COMMIT_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PARENT_COMMIT_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == TAG_KEYS_LIST_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TAG_KEYS_LIST_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_ORDER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_ORDER), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA), false);
    return true;
  }
  else if (hashCode == INVALID_REFERENCE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REFERENCE_NAME), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_ALREADY_CLOSED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_ALREADY_CLOSED), false);
    return true;
  }
  else if (hashCode == INVALID_SYSTEM_TAG_USAGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SYSTEM_TAG_USAGE), false);
    return true;
  }
  else if (hashCode == INVALID_TAG_KEYS_LIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TAG_KEYS_LIST), false);
    return true;
  }
  else if (hashCode == INVALID_MERGE_OPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MERGE_OPTION), false);
    return true;
  }
  else if (hashCode == COMMENT_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_ID_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST), false);
    return true;
  }
  else if (hashCode == INVALID_SOURCE_COMMIT_SPECIFIER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_SOURCE_COMMIT_SPECIFIER), false);
    return true;
  }
  else if (hashCode == FILE_PATH_CONFLICTS_WITH_SUBMODULE_PATH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_PATH_CONFLICTS_WITH_SUBMODULE_PATH), false);
    return true;
  }
  else if (hashCode == RESOURCE_ARN_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::RESOURCE_ARN_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_FILE_MODE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_MODE), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_NAME), false);
    return true;
  }
  else if (hashCode == INVALID_TITLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TITLE), false);
    return true;
  }
  else if (hashCode == SOURCE_AND_DESTINATION_ARE_SAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SOURCE_AND_DESTINATION_ARE_SAME), false);
    return true;
  }
  else if (hashCode == PATH_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PATH_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_DELETION_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_DELETION_PARAMETER), false);
    return true;
  }
  else if (hashCode == INVALID_TAGS_MAP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TAGS_MAP), false);
    return true;
  }
  else if (hashCode == INVALID_FILE_LOCATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_LOCATION), false);
    return true;
  }
  else if (hashCode == INVALID_BRANCH_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_BRANCH_NAME), false);
    return true;
  }
  else if (hashCode == MAXIMUM_FILE_ENTRIES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_FILE_ENTRIES_EXCEEDED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_NAMES_EXCEEDED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED), false);
    return true;
  }
  else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_NOT_FOUND), false);
    return true;
  }
  else if (hashCode == REFERENCE_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REFERENCE_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TOO_MANY_TAGS), false);
    return true;
  }
  else if (hashCode == REPLACEMENT_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPLACEMENT_CONTENT_REQUIRED), false);
    return true;
  }
  else if (hashCode == COMMIT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_REQUIRED), false);
    return true;
  }
  else if (hashCode == ENCRYPTION_KEY_UNAVAILABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ENCRYPTION_KEY_UNAVAILABLE), false);
    return true;
  }
  else if (hashCode == MULTIPLE_CONFLICT_RESOLUTION_ENTRIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MULTIPLE_CONFLICT_RESOLUTION_ENTRIES), false);
    return true;
  }
  else if (hashCode == INVALID_MAX_CONFLICT_FILES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_MAX_CONFLICT_FILES), false);
    return true;
  }
  else if (hashCode == COMMENT_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMENT_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_COMMENT_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_COMMENT_ID), false);
    return true;
  }
  else if (hashCode == TARGET_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TARGET_REQUIRED), false);
    return true;
  }
  else if (hashCode == FILE_CONTENT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_CONTENT_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PULL_REQUEST_EVENT_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PULL_REQUEST_EVENT_TYPE), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == REPOSITORY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_NAME), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_DESCRIPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_DESCRIPTION), false);
    return true;
  }
  else if (hashCode == FOLDER_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FOLDER_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_PATH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_PATH), false);
    return true;
  }
  else if (hashCode == ACTOR_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::ACTOR_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == NO_CHANGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::NO_CHANGE), false);
    return true;
  }
  else if (hashCode == REPLACEMENT_TYPE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPLACEMENT_TYPE_REQUIRED), false);
    return true;
  }
  else if (hashCode == MANUAL_MERGE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MANUAL_MERGE_REQUIRED), false);
    return true;
  }
  else if (hashCode == FILE_TOO_LARGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_TOO_LARGE), false);
    return true;
  }
  else if (hashCode == MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_CONFLICT_DETAIL_LEVEL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_CONFLICT_DETAIL_LEVEL), false);
    return true;
  }
  else if (hashCode == BLOB_ID_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BLOB_ID_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == PUT_FILE_ENTRY_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PUT_FILE_ENTRY_CONFLICT), false);
    return true;
  }
  else if (hashCode == AUTHOR_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::AUTHOR_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME), false);
    return true;
  }
  else if (hashCode == FOLDER_CONTENT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FOLDER_CONTENT_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_TARGETS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_TARGETS), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_BRANCH_NAME), false);
    return true;
  }
  else if (hashCode == TIPS_DIVERGENCE_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TIPS_DIVERGENCE_EXCEEDED), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_ID_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_FILE_POSITION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_FILE_POSITION), false);
    return true;
  }
  else if (hashCode == FILE_CONTENT_AND_SOURCE_FILE_SPECIFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::FILE_CONTENT_AND_SOURCE_FILE_SPECIFIED), false);
    return true;
  }
  else if (hashCode == BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME), false);
    return true;
  }
  else if (hashCode == SAME_FILE_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::SAME_FILE_CONTENT), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeCommitErrorMapper
} // namespace CodeCommit
} // namespace Aws
