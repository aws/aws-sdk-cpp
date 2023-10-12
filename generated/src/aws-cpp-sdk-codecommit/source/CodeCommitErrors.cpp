/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codecommit/CodeCommitErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeCommit;

namespace Aws
{
namespace CodeCommit
{
namespace CodeCommitErrorMapper
{

static constexpr uint32_t REPOSITORY_TRIGGERS_LIST_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryTriggersListRequiredException");
static constexpr uint32_t PULL_REQUEST_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("PullRequestDoesNotExistException");
static constexpr uint32_t BRANCH_NAME_EXISTS_HASH = ConstExprHashingUtils::HashString("BranchNameExistsException");
static constexpr uint32_t FILE_ENTRY_REQUIRED_HASH = ConstExprHashingUtils::HashString("FileEntryRequiredException");
static constexpr uint32_t INVALID_CONFLICT_RESOLUTION_STRATEGY_HASH = ConstExprHashingUtils::HashString("InvalidConflictResolutionStrategyException");
static constexpr uint32_t PATH_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("PathDoesNotExistException");
static constexpr uint32_t FILE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("FileDoesNotExistException");
static constexpr uint32_t INVALID_PULL_REQUEST_ID_HASH = ConstExprHashingUtils::HashString("InvalidPullRequestIdException");
static constexpr uint32_t COMMIT_MESSAGE_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CommitMessageLengthExceededException");
static constexpr uint32_t REVISION_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("RevisionIdRequiredException");
static constexpr uint32_t COMMENT_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("CommentContentRequiredException");
static constexpr uint32_t INVALID_MAX_MERGE_HUNKS_HASH = ConstExprHashingUtils::HashString("InvalidMaxMergeHunksException");
static constexpr uint32_t REACTION_VALUE_REQUIRED_HASH = ConstExprHashingUtils::HashString("ReactionValueRequiredException");
static constexpr uint32_t INVALID_CONTINUATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidContinuationTokenException");
static constexpr uint32_t MERGE_OPTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("MergeOptionRequiredException");
static constexpr uint32_t INVALID_AUTHOR_ARN_HASH = ConstExprHashingUtils::HashString("InvalidAuthorArnException");
static constexpr uint32_t INVALID_TARGET_BRANCH_HASH = ConstExprHashingUtils::HashString("InvalidTargetBranchException");
static constexpr uint32_t INVALID_COMMIT_ID_HASH = ConstExprHashingUtils::HashString("InvalidCommitIdException");
static constexpr uint32_t MULTIPLE_REPOSITORIES_IN_PULL_REQUEST_HASH = ConstExprHashingUtils::HashString("MultipleRepositoriesInPullRequestException");
static constexpr uint32_t INVALID_REPLACEMENT_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidReplacementContentException");
static constexpr uint32_t APPROVAL_RULE_TEMPLATE_NAME_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ApprovalRuleTemplateNameAlreadyExistsException");
static constexpr uint32_t INVALID_ACTOR_ARN_HASH = ConstExprHashingUtils::HashString("InvalidActorArnException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_EVENTS_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerEventsException");
static constexpr uint32_t COMMIT_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("CommitDoesNotExistException");
static constexpr uint32_t INVALID_REACTION_USER_ARN_HASH = ConstExprHashingUtils::HashString("InvalidReactionUserArnException");
static constexpr uint32_t BRANCH_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("BranchDoesNotExistException");
static constexpr uint32_t TAGS_MAP_REQUIRED_HASH = ConstExprHashingUtils::HashString("TagsMapRequiredException");
static constexpr uint32_t REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryTriggerDestinationArnRequiredException");
static constexpr uint32_t REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryTriggerEventsListRequiredException");
static constexpr uint32_t REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryTriggerBranchNameListRequiredException");
static constexpr uint32_t INVALID_PULL_REQUEST_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidPullRequestStatusException");
static constexpr uint32_t INVALID_APPROVAL_RULE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidApprovalRuleNameException");
static constexpr uint32_t COMMIT_IDS_LIST_REQUIRED_HASH = ConstExprHashingUtils::HashString("CommitIdsListRequiredException");
static constexpr uint32_t INVALID_BLOB_ID_HASH = ConstExprHashingUtils::HashString("InvalidBlobIdException");
static constexpr uint32_t DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME_HASH = ConstExprHashingUtils::HashString("DirectoryNameConflictsWithFileNameException");
static constexpr uint32_t TAG_POLICY_HASH = ConstExprHashingUtils::HashString("TagPolicyException");
static constexpr uint32_t INVALID_COMMIT_HASH = ConstExprHashingUtils::HashString("InvalidCommitException");
static constexpr uint32_t APPROVAL_RULE_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApprovalRuleContentRequiredException");
static constexpr uint32_t REPOSITORY_TRIGGER_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryTriggerNameRequiredException");
static constexpr uint32_t NUMBER_OF_RULES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberOfRulesExceededException");
static constexpr uint32_t MAXIMUM_BRANCHES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumBranchesExceededException");
static constexpr uint32_t INVALID_PARENT_COMMIT_ID_HASH = ConstExprHashingUtils::HashString("InvalidParentCommitIdException");
static constexpr uint32_t CLIENT_REQUEST_TOKEN_REQUIRED_HASH = ConstExprHashingUtils::HashString("ClientRequestTokenRequiredException");
static constexpr uint32_t INVALID_APPROVAL_RULE_TEMPLATE_DESCRIPTION_HASH = ConstExprHashingUtils::HashString("InvalidApprovalRuleTemplateDescriptionException");
static constexpr uint32_t INVALID_APPROVAL_RULE_TEMPLATE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidApprovalRuleTemplateNameException");
static constexpr uint32_t PARENT_COMMIT_ID_OUTDATED_HASH = ConstExprHashingUtils::HashString("ParentCommitIdOutdatedException");
static constexpr uint32_t SOURCE_FILE_OR_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("SourceFileOrContentRequiredException");
static constexpr uint32_t APPROVAL_RULE_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApprovalRuleNameRequiredException");
static constexpr uint32_t REPOSITORY_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RepositoryDoesNotExistException");
static constexpr uint32_t DEFAULT_BRANCH_CANNOT_BE_DELETED_HASH = ConstExprHashingUtils::HashString("DefaultBranchCannotBeDeletedException");
static constexpr uint32_t OVERRIDE_ALREADY_SET_HASH = ConstExprHashingUtils::HashString("OverrideAlreadySetException");
static constexpr uint32_t INVALID_PULL_REQUEST_STATUS_UPDATE_HASH = ConstExprHashingUtils::HashString("InvalidPullRequestStatusUpdateException");
static constexpr uint32_t ENCRYPTION_KEY_DISABLED_HASH = ConstExprHashingUtils::HashString("EncryptionKeyDisabledException");
static constexpr uint32_t APPROVAL_RULE_TEMPLATE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ApprovalRuleTemplateDoesNotExistException");
static constexpr uint32_t INVALID_APPROVAL_STATE_HASH = ConstExprHashingUtils::HashString("InvalidApprovalStateException");
static constexpr uint32_t TITLE_REQUIRED_HASH = ConstExprHashingUtils::HashString("TitleRequiredException");
static constexpr uint32_t MAXIMUM_RULE_TEMPLATES_ASSOCIATED_WITH_REPOSITORY_HASH = ConstExprHashingUtils::HashString("MaximumRuleTemplatesAssociatedWithRepositoryException");
static constexpr uint32_t TARGETS_REQUIRED_HASH = ConstExprHashingUtils::HashString("TargetsRequiredException");
static constexpr uint32_t COMMENT_NOT_CREATED_BY_CALLER_HASH = ConstExprHashingUtils::HashString("CommentNotCreatedByCallerException");
static constexpr uint32_t INVALID_REVISION_ID_HASH = ConstExprHashingUtils::HashString("InvalidRevisionIdException");
static constexpr uint32_t NAME_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NameLengthExceededException");
static constexpr uint32_t MAXIMUM_CONFLICT_RESOLUTION_ENTRIES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumConflictResolutionEntriesExceededException");
static constexpr uint32_t COMMENT_DELETED_HASH = ConstExprHashingUtils::HashString("CommentDeletedException");
static constexpr uint32_t COMMIT_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("CommitIdRequiredException");
static constexpr uint32_t RESTRICTED_SOURCE_FILE_HASH = ConstExprHashingUtils::HashString("RestrictedSourceFileException");
static constexpr uint32_t IDEMPOTENCY_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotencyParameterMismatchException");
static constexpr uint32_t MAXIMUM_ITEMS_TO_COMPARE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumItemsToCompareExceededException");
static constexpr uint32_t PARENT_COMMIT_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("ParentCommitIdRequiredException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerDestinationArnException");
static constexpr uint32_t APPROVAL_RULE_TEMPLATE_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApprovalRuleTemplateContentRequiredException");
static constexpr uint32_t INVALID_SORT_BY_HASH = ConstExprHashingUtils::HashString("InvalidSortByException");
static constexpr uint32_t INVALID_RELATIVE_FILE_VERSION_ENUM_HASH = ConstExprHashingUtils::HashString("InvalidRelativeFileVersionEnumException");
static constexpr uint32_t INVALID_CLIENT_REQUEST_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidClientRequestTokenException");
static constexpr uint32_t APPROVAL_RULE_TEMPLATE_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApprovalRuleTemplateNameRequiredException");
static constexpr uint32_t INVALID_RULE_CONTENT_SHA256_HASH = ConstExprHashingUtils::HashString("InvalidRuleContentSha256Exception");
static constexpr uint32_t BRANCH_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("BranchNameRequiredException");
static constexpr uint32_t FILE_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("FileContentRequiredException");
static constexpr uint32_t MAXIMUM_FILE_CONTENT_TO_LOAD_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumFileContentToLoadExceededException");
static constexpr uint32_t SAME_PATH_REQUEST_HASH = ConstExprHashingUtils::HashString("SamePathRequestException");
static constexpr uint32_t INVALID_DESCRIPTION_HASH = ConstExprHashingUtils::HashString("InvalidDescriptionException");
static constexpr uint32_t INVALID_REPLACEMENT_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidReplacementTypeException");
static constexpr uint32_t ENCRYPTION_KEY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("EncryptionKeyAccessDeniedException");
static constexpr uint32_t INVALID_RESOURCE_ARN_HASH = ConstExprHashingUtils::HashString("InvalidResourceArnException");
static constexpr uint32_t INVALID_APPROVAL_RULE_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidApprovalRuleContentException");
static constexpr uint32_t INVALID_CONFLICT_RESOLUTION_HASH = ConstExprHashingUtils::HashString("InvalidConflictResolutionException");
static constexpr uint32_t BLOB_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("BlobIdRequiredException");
static constexpr uint32_t REPOSITORY_NAMES_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryNamesRequiredException");
static constexpr uint32_t COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CommentContentSizeLimitExceededException");
static constexpr uint32_t INVALID_TARGET_HASH = ConstExprHashingUtils::HashString("InvalidTargetException");
static constexpr uint32_t REFERENCE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ReferenceDoesNotExistException");
static constexpr uint32_t CANNOT_MODIFY_APPROVAL_RULE_FROM_TEMPLATE_HASH = ConstExprHashingUtils::HashString("CannotModifyApprovalRuleFromTemplateException");
static constexpr uint32_t BRANCH_NAME_IS_TAG_NAME_HASH = ConstExprHashingUtils::HashString("BranchNameIsTagNameException");
static constexpr uint32_t REPOSITORY_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("RepositoryNameRequiredException");
static constexpr uint32_t INVALID_APPROVAL_RULE_TEMPLATE_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidApprovalRuleTemplateContentException");
static constexpr uint32_t APPROVAL_RULE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ApprovalRuleDoesNotExistException");
static constexpr uint32_t PULL_REQUEST_STATUS_REQUIRED_HASH = ConstExprHashingUtils::HashString("PullRequestStatusRequiredException");
static constexpr uint32_t APPROVAL_RULE_NAME_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ApprovalRuleNameAlreadyExistsException");
static constexpr uint32_t INVALID_MAX_RESULTS_HASH = ConstExprHashingUtils::HashString("InvalidMaxResultsException");
static constexpr uint32_t TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT_HASH = ConstExprHashingUtils::HashString("TipOfSourceReferenceIsDifferentException");
static constexpr uint32_t MAXIMUM_NUMBER_OF_APPROVALS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumNumberOfApprovalsExceededException");
static constexpr uint32_t REPOSITORY_NAME_EXISTS_HASH = ConstExprHashingUtils::HashString("RepositoryNameExistsException");
static constexpr uint32_t PULL_REQUEST_CANNOT_BE_APPROVED_BY_AUTHOR_HASH = ConstExprHashingUtils::HashString("PullRequestCannotBeApprovedByAuthorException");
static constexpr uint32_t FILE_MODE_REQUIRED_HASH = ConstExprHashingUtils::HashString("FileModeRequiredException");
static constexpr uint32_t ENCRYPTION_INTEGRITY_CHECKS_FAILED_HASH = ConstExprHashingUtils::HashString("EncryptionIntegrityChecksFailedException");
static constexpr uint32_t REFERENCE_TYPE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ReferenceTypeNotSupportedException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_REGION_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerRegionException");
static constexpr uint32_t APPROVAL_STATE_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApprovalStateRequiredException");
static constexpr uint32_t INVALID_EMAIL_HASH = ConstExprHashingUtils::HashString("InvalidEmailException");
static constexpr uint32_t INVALID_DESTINATION_COMMIT_SPECIFIER_HASH = ConstExprHashingUtils::HashString("InvalidDestinationCommitSpecifierException");
static constexpr uint32_t COMMIT_ID_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("CommitIdDoesNotExistException");
static constexpr uint32_t PARENT_COMMIT_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ParentCommitDoesNotExistException");
static constexpr uint32_t TAG_KEYS_LIST_REQUIRED_HASH = ConstExprHashingUtils::HashString("TagKeysListRequiredException");
static constexpr uint32_t INVALID_ORDER_HASH = ConstExprHashingUtils::HashString("InvalidOrderException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerCustomDataException");
static constexpr uint32_t INVALID_REFERENCE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidReferenceNameException");
static constexpr uint32_t PULL_REQUEST_ALREADY_CLOSED_HASH = ConstExprHashingUtils::HashString("PullRequestAlreadyClosedException");
static constexpr uint32_t INVALID_SYSTEM_TAG_USAGE_HASH = ConstExprHashingUtils::HashString("InvalidSystemTagUsageException");
static constexpr uint32_t OVERRIDE_STATUS_REQUIRED_HASH = ConstExprHashingUtils::HashString("OverrideStatusRequiredException");
static constexpr uint32_t INVALID_TAG_KEYS_LIST_HASH = ConstExprHashingUtils::HashString("InvalidTagKeysListException");
static constexpr uint32_t INVALID_MERGE_OPTION_HASH = ConstExprHashingUtils::HashString("InvalidMergeOptionException");
static constexpr uint32_t COMMENT_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("CommentIdRequiredException");
static constexpr uint32_t REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST_HASH = ConstExprHashingUtils::HashString("RepositoryNotAssociatedWithPullRequestException");
static constexpr uint32_t INVALID_SOURCE_COMMIT_SPECIFIER_HASH = ConstExprHashingUtils::HashString("InvalidSourceCommitSpecifierException");
static constexpr uint32_t FILE_PATH_CONFLICTS_WITH_SUBMODULE_PATH_HASH = ConstExprHashingUtils::HashString("FilePathConflictsWithSubmodulePathException");
static constexpr uint32_t RESOURCE_ARN_REQUIRED_HASH = ConstExprHashingUtils::HashString("ResourceArnRequiredException");
static constexpr uint32_t INVALID_FILE_MODE_HASH = ConstExprHashingUtils::HashString("InvalidFileModeException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_NAME_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerNameException");
static constexpr uint32_t INVALID_TITLE_HASH = ConstExprHashingUtils::HashString("InvalidTitleException");
static constexpr uint32_t SOURCE_AND_DESTINATION_ARE_SAME_HASH = ConstExprHashingUtils::HashString("SourceAndDestinationAreSameException");
static constexpr uint32_t PATH_REQUIRED_HASH = ConstExprHashingUtils::HashString("PathRequiredException");
static constexpr uint32_t INVALID_DELETION_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidDeletionParameterException");
static constexpr uint32_t INVALID_TAGS_MAP_HASH = ConstExprHashingUtils::HashString("InvalidTagsMapException");
static constexpr uint32_t INVALID_FILE_LOCATION_HASH = ConstExprHashingUtils::HashString("InvalidFileLocationException");
static constexpr uint32_t INVALID_BRANCH_NAME_HASH = ConstExprHashingUtils::HashString("InvalidBranchNameException");
static constexpr uint32_t MAXIMUM_FILE_ENTRIES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumFileEntriesExceededException");
static constexpr uint32_t MAXIMUM_REPOSITORY_NAMES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumRepositoryNamesExceededException");
static constexpr uint32_t MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumOpenPullRequestsExceededException");
static constexpr uint32_t ENCRYPTION_KEY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EncryptionKeyNotFoundException");
static constexpr uint32_t REFERENCE_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("ReferenceNameRequiredException");
static constexpr uint32_t INVALID_OVERRIDE_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidOverrideStatusException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t REPLACEMENT_CONTENT_REQUIRED_HASH = ConstExprHashingUtils::HashString("ReplacementContentRequiredException");
static constexpr uint32_t REVISION_NOT_CURRENT_HASH = ConstExprHashingUtils::HashString("RevisionNotCurrentException");
static constexpr uint32_t COMMIT_REQUIRED_HASH = ConstExprHashingUtils::HashString("CommitRequiredException");
static constexpr uint32_t ENCRYPTION_KEY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("EncryptionKeyUnavailableException");
static constexpr uint32_t PULL_REQUEST_APPROVAL_RULES_NOT_SATISFIED_HASH = ConstExprHashingUtils::HashString("PullRequestApprovalRulesNotSatisfiedException");
static constexpr uint32_t MULTIPLE_CONFLICT_RESOLUTION_ENTRIES_HASH = ConstExprHashingUtils::HashString("MultipleConflictResolutionEntriesException");
static constexpr uint32_t INVALID_MAX_CONFLICT_FILES_HASH = ConstExprHashingUtils::HashString("InvalidMaxConflictFilesException");
static constexpr uint32_t COMMENT_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("CommentDoesNotExistException");
static constexpr uint32_t INVALID_COMMENT_ID_HASH = ConstExprHashingUtils::HashString("InvalidCommentIdException");
static constexpr uint32_t TARGET_REQUIRED_HASH = ConstExprHashingUtils::HashString("TargetRequiredException");
static constexpr uint32_t FILE_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FileContentSizeLimitExceededException");
static constexpr uint32_t INVALID_PULL_REQUEST_EVENT_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidPullRequestEventTypeException");
static constexpr uint32_t REPOSITORY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RepositoryLimitExceededException");
static constexpr uint32_t INVALID_REPOSITORY_NAME_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryNameException");
static constexpr uint32_t INVALID_REPOSITORY_DESCRIPTION_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryDescriptionException");
static constexpr uint32_t FOLDER_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("FolderDoesNotExistException");
static constexpr uint32_t INVALID_PATH_HASH = ConstExprHashingUtils::HashString("InvalidPathException");
static constexpr uint32_t ACTOR_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ActorDoesNotExistException");
static constexpr uint32_t NO_CHANGE_HASH = ConstExprHashingUtils::HashString("NoChangeException");
static constexpr uint32_t REPLACEMENT_TYPE_REQUIRED_HASH = ConstExprHashingUtils::HashString("ReplacementTypeRequiredException");
static constexpr uint32_t MANUAL_MERGE_REQUIRED_HASH = ConstExprHashingUtils::HashString("ManualMergeRequiredException");
static constexpr uint32_t FILE_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("FileTooLargeException");
static constexpr uint32_t MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumRepositoryTriggersExceededException");
static constexpr uint32_t INVALID_CONFLICT_DETAIL_LEVEL_HASH = ConstExprHashingUtils::HashString("InvalidConflictDetailLevelException");
static constexpr uint32_t BLOB_ID_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("BlobIdDoesNotExistException");
static constexpr uint32_t INVALID_REACTION_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidReactionValueException");
static constexpr uint32_t PUT_FILE_ENTRY_CONFLICT_HASH = ConstExprHashingUtils::HashString("PutFileEntryConflictException");
static constexpr uint32_t REACTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ReactionLimitExceededException");
static constexpr uint32_t CANNOT_DELETE_APPROVAL_RULE_FROM_TEMPLATE_HASH = ConstExprHashingUtils::HashString("CannotDeleteApprovalRuleFromTemplateException");
static constexpr uint32_t AUTHOR_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("AuthorDoesNotExistException");
static constexpr uint32_t FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME_HASH = ConstExprHashingUtils::HashString("FileNameConflictsWithDirectoryNameException");
static constexpr uint32_t FOLDER_CONTENT_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FolderContentSizeLimitExceededException");
static constexpr uint32_t INVALID_TARGETS_HASH = ConstExprHashingUtils::HashString("InvalidTargetsException");
static constexpr uint32_t NUMBER_OF_RULE_TEMPLATES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberOfRuleTemplatesExceededException");
static constexpr uint32_t INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH = ConstExprHashingUtils::HashString("InvalidRepositoryTriggerBranchNameException");
static constexpr uint32_t COMMIT_IDS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CommitIdsLimitExceededException");
static constexpr uint32_t TIPS_DIVERGENCE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TipsDivergenceExceededException");
static constexpr uint32_t PULL_REQUEST_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("PullRequestIdRequiredException");
static constexpr uint32_t INVALID_FILE_POSITION_HASH = ConstExprHashingUtils::HashString("InvalidFilePositionException");
static constexpr uint32_t FILE_CONTENT_AND_SOURCE_FILE_SPECIFIED_HASH = ConstExprHashingUtils::HashString("FileContentAndSourceFileSpecifiedException");
static constexpr uint32_t CONCURRENT_REFERENCE_UPDATE_HASH = ConstExprHashingUtils::HashString("ConcurrentReferenceUpdateException");
static constexpr uint32_t BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH = ConstExprHashingUtils::HashString("BeforeCommitIdAndAfterCommitIdAreSameException");
static constexpr uint32_t APPROVAL_RULE_TEMPLATE_IN_USE_HASH = ConstExprHashingUtils::HashString("ApprovalRuleTemplateInUseException");
static constexpr uint32_t SAME_FILE_CONTENT_HASH = ConstExprHashingUtils::HashString("SameFileContentException");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(uint32_t hashCode, AWSError<CoreErrors>& error)
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
  else if (hashCode == REVISION_ID_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REVISION_ID_REQUIRED), false);
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
  else if (hashCode == REACTION_VALUE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REACTION_VALUE_REQUIRED), false);
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
  else if (hashCode == APPROVAL_RULE_TEMPLATE_NAME_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_TEMPLATE_NAME_ALREADY_EXISTS), false);
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
  else if (hashCode == INVALID_REACTION_USER_ARN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REACTION_USER_ARN), false);
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
  else if (hashCode == INVALID_APPROVAL_RULE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_RULE_NAME), false);
    return true;
  }
  else if (hashCode == COMMIT_IDS_LIST_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_IDS_LIST_REQUIRED), false);
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
  else if (hashCode == APPROVAL_RULE_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_CONTENT_REQUIRED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_TRIGGER_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_TRIGGER_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == NUMBER_OF_RULES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::NUMBER_OF_RULES_EXCEEDED), false);
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
  else if (hashCode == INVALID_APPROVAL_RULE_TEMPLATE_DESCRIPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_RULE_TEMPLATE_DESCRIPTION), false);
    return true;
  }
  else if (hashCode == INVALID_APPROVAL_RULE_TEMPLATE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_RULE_TEMPLATE_NAME), false);
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
  else if (hashCode == APPROVAL_RULE_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_NAME_REQUIRED), false);
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
  else if (hashCode == OVERRIDE_ALREADY_SET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::OVERRIDE_ALREADY_SET), false);
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
  else if (hashCode == APPROVAL_RULE_TEMPLATE_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_TEMPLATE_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == INVALID_APPROVAL_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_STATE), false);
    return true;
  }
  else if (hashCode == TITLE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::TITLE_REQUIRED), false);
    return true;
  }
  else if (hashCode == MAXIMUM_RULE_TEMPLATES_ASSOCIATED_WITH_REPOSITORY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_RULE_TEMPLATES_ASSOCIATED_WITH_REPOSITORY), false);
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
  else if (hashCode == INVALID_REVISION_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REVISION_ID), false);
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
  else if (hashCode == APPROVAL_RULE_TEMPLATE_CONTENT_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_TEMPLATE_CONTENT_REQUIRED), false);
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
  else if (hashCode == APPROVAL_RULE_TEMPLATE_NAME_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_TEMPLATE_NAME_REQUIRED), false);
    return true;
  }
  else if (hashCode == INVALID_RULE_CONTENT_SHA256_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_RULE_CONTENT_SHA256), false);
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
  else if (hashCode == INVALID_APPROVAL_RULE_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_RULE_CONTENT), false);
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
  else if (hashCode == CANNOT_MODIFY_APPROVAL_RULE_FROM_TEMPLATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::CANNOT_MODIFY_APPROVAL_RULE_FROM_TEMPLATE), false);
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
  else if (hashCode == INVALID_APPROVAL_RULE_TEMPLATE_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_APPROVAL_RULE_TEMPLATE_CONTENT), false);
    return true;
  }
  else if (hashCode == APPROVAL_RULE_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_STATUS_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_STATUS_REQUIRED), false);
    return true;
  }
  else if (hashCode == APPROVAL_RULE_NAME_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_NAME_ALREADY_EXISTS), false);
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
  else if (hashCode == MAXIMUM_NUMBER_OF_APPROVALS_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::MAXIMUM_NUMBER_OF_APPROVALS_EXCEEDED), false);
    return true;
  }
  else if (hashCode == REPOSITORY_NAME_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REPOSITORY_NAME_EXISTS), false);
    return true;
  }
  else if (hashCode == PULL_REQUEST_CANNOT_BE_APPROVED_BY_AUTHOR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_CANNOT_BE_APPROVED_BY_AUTHOR), false);
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
  else if (hashCode == APPROVAL_STATE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_STATE_REQUIRED), false);
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
  else if (hashCode == OVERRIDE_STATUS_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::OVERRIDE_STATUS_REQUIRED), false);
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
  return false;
}

static bool GetErrorForNameHelper1(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_SOURCE_COMMIT_SPECIFIER_HASH)
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
  else if (hashCode == INVALID_OVERRIDE_STATUS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_OVERRIDE_STATUS), false);
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
  else if (hashCode == REVISION_NOT_CURRENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REVISION_NOT_CURRENT), false);
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
  else if (hashCode == PULL_REQUEST_APPROVAL_RULES_NOT_SATISFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PULL_REQUEST_APPROVAL_RULES_NOT_SATISFIED), false);
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
  else if (hashCode == REPOSITORY_LIMIT_EXCEEDED_HASH)
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
  else if (hashCode == INVALID_REACTION_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REACTION_VALUE), false);
    return true;
  }
  else if (hashCode == PUT_FILE_ENTRY_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::PUT_FILE_ENTRY_CONFLICT), false);
    return true;
  }
  else if (hashCode == REACTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::REACTION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == CANNOT_DELETE_APPROVAL_RULE_FROM_TEMPLATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::CANNOT_DELETE_APPROVAL_RULE_FROM_TEMPLATE), false);
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
  else if (hashCode == NUMBER_OF_RULE_TEMPLATES_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::NUMBER_OF_RULE_TEMPLATES_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_REPOSITORY_TRIGGER_BRANCH_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::INVALID_REPOSITORY_TRIGGER_BRANCH_NAME), false);
    return true;
  }
  else if (hashCode == COMMIT_IDS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::COMMIT_IDS_LIMIT_EXCEEDED), false);
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
  else if (hashCode == CONCURRENT_REFERENCE_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::CONCURRENT_REFERENCE_UPDATE), false);
    return true;
  }
  else if (hashCode == BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME), false);
    return true;
  }
  else if (hashCode == APPROVAL_RULE_TEMPLATE_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCommitErrors::APPROVAL_RULE_TEMPLATE_IN_USE), false);
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
  uint32_t hashCode = HashingUtils::HashString(errorName);
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
