/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/DeliveryReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace DeliveryReasonMapper {

static const int ARTIFACT_READ_FAILED_HASH = HashingUtils::HashString("ARTIFACT_READ_FAILED");
static const int ARTIFACT_SOURCE_MISMATCH_HASH = HashingUtils::HashString("ARTIFACT_SOURCE_MISMATCH");
static const int ARTIFACT_SOURCE_MISSING_HASH = HashingUtils::HashString("ARTIFACT_SOURCE_MISSING");
static const int BUILD_NOT_FOUND_HASH = HashingUtils::HashString("BUILD_NOT_FOUND");
static const int BUILD_READ_FAILED_HASH = HashingUtils::HashString("BUILD_READ_FAILED");
static const int BUILD_RESULT_SCOPE_MISMATCH_HASH = HashingUtils::HashString("BUILD_RESULT_SCOPE_MISMATCH");
static const int DELIVERY_NOT_CONFIGURED_HASH = HashingUtils::HashString("DELIVERY_NOT_CONFIGURED");
static const int DELIVERY_SOURCE_KIND_CHANGED_HASH = HashingUtils::HashString("DELIVERY_SOURCE_KIND_CHANGED");
static const int DUPLICATE_LOGICAL_REPOSITORY_HASH = HashingUtils::HashString("DUPLICATE_LOGICAL_REPOSITORY");
static const int DUPLICATE_OR_INVALID_REPOSITORY_HASH = HashingUtils::HashString("DUPLICATE_OR_INVALID_REPOSITORY");
static const int ENVIRONMENT_DELETED_HASH = HashingUtils::HashString("ENVIRONMENT_DELETED");
static const int ENVIRONMENT_NOT_ACTIVE_HASH = HashingUtils::HashString("ENVIRONMENT_NOT_ACTIVE");
static const int ENVIRONMENT_NOT_FOUND_HASH = HashingUtils::HashString("ENVIRONMENT_NOT_FOUND");
static const int ENVIRONMENT_READ_FAILED_HASH = HashingUtils::HashString("ENVIRONMENT_READ_FAILED");
static const int S3_ACCESS_DENIED_HASH = HashingUtils::HashString("S3_ACCESS_DENIED");
static const int S3_SOURCE_PREFIX_OVERLAP_HASH = HashingUtils::HashString("S3_SOURCE_PREFIX_OVERLAP");
static const int SOURCE_INTEGRATION_UNRESOLVED_HASH = HashingUtils::HashString("SOURCE_INTEGRATION_UNRESOLVED");
static const int SOURCE_INTEGRATION_READ_FAILED_HASH = HashingUtils::HashString("SOURCE_INTEGRATION_READ_FAILED");
static const int SOURCE_INTEGRATION_INVALID_HASH = HashingUtils::HashString("SOURCE_INTEGRATION_INVALID");
static const int SOURCE_INTEGRATION_CHANGED_HASH = HashingUtils::HashString("SOURCE_INTEGRATION_CHANGED");
static const int EXPORT_CREDENTIALS_MISSING_HASH = HashingUtils::HashString("EXPORT_CREDENTIALS_MISSING");
static const int EXPORT_CREDENTIAL_EXPIRY_INVALID_HASH = HashingUtils::HashString("EXPORT_CREDENTIAL_EXPIRY_INVALID");
static const int EXPORT_DESTINATION_INVALID_HASH = HashingUtils::HashString("EXPORT_DESTINATION_INVALID");
static const int EXPORT_EXISTING_OBJECT_MISMATCH_HASH = HashingUtils::HashString("EXPORT_EXISTING_OBJECT_MISMATCH");
static const int EXPORT_PUT_FAILED_HASH = HashingUtils::HashString("EXPORT_PUT_FAILED");
static const int EXPORT_RECONCILIATION_READ_FAILED_HASH = HashingUtils::HashString("EXPORT_RECONCILIATION_READ_FAILED");
static const int EXPORT_ROLE_ASSUMPTION_FAILED_HASH = HashingUtils::HashString("EXPORT_ROLE_ASSUMPTION_FAILED");
static const int GITHUB_ACCESS_DENIED_HASH = HashingUtils::HashString("GITHUB_ACCESS_DENIED");
static const int GITHUB_BASE_NOT_FOUND_HASH = HashingUtils::HashString("GITHUB_BASE_NOT_FOUND");
static const int GITHUB_BRANCH_CONFLICT_HASH = HashingUtils::HashString("GITHUB_BRANCH_CONFLICT");
static const int GITHUB_NOT_FOUND_HASH = HashingUtils::HashString("GITHUB_NOT_FOUND");
static const int GITHUB_RATE_LIMITED_HASH = HashingUtils::HashString("GITHUB_RATE_LIMITED");
static const int GITHUB_REPOSITORY_CHANGED_HASH = HashingUtils::HashString("GITHUB_REPOSITORY_CHANGED");
static const int GITHUB_REPOSITORY_NOT_FOUND_HASH = HashingUtils::HashString("GITHUB_REPOSITORY_NOT_FOUND");
static const int GITHUB_REQUEST_FAILED_HASH = HashingUtils::HashString("GITHUB_REQUEST_FAILED");
static const int GITHUB_REQUEST_REJECTED_HASH = HashingUtils::HashString("GITHUB_REQUEST_REJECTED");
static const int GITHUB_RESPONSE_INVALID_HASH = HashingUtils::HashString("GITHUB_RESPONSE_INVALID");
static const int GREEN_ATTEMPT_NOT_SUCCESSFUL_HASH = HashingUtils::HashString("GREEN_ATTEMPT_NOT_SUCCESSFUL");
static const int GREEN_COMPLETION_NOT_OBSERVED_HASH = HashingUtils::HashString("GREEN_COMPLETION_NOT_OBSERVED");
static const int PATCH_NOT_SELECTED_HASH = HashingUtils::HashString("PATCH_NOT_SELECTED");
static const int INCOMPLETE_SOURCE_REFERENCE_HASH = HashingUtils::HashString("INCOMPLETE_SOURCE_REFERENCE");
static const int INVALID_ARCHIVE_DIGEST_HASH = HashingUtils::HashString("INVALID_ARCHIVE_DIGEST");
static const int INVALID_ARTIFACT_SOURCE_HASH = HashingUtils::HashString("INVALID_ARTIFACT_SOURCE");
static const int INVALID_COMPLETED_MANIFEST_HASH = HashingUtils::HashString("INVALID_COMPLETED_MANIFEST");
static const int INVALID_EXPORT_RECEIPT_HASH = HashingUtils::HashString("INVALID_EXPORT_RECEIPT");
static const int INVALID_GITHUB_PROVENANCE_HASH = HashingUtils::HashString("INVALID_GITHUB_PROVENANCE");
static const int INVALID_S3_DESTINATION_HASH = HashingUtils::HashString("INVALID_S3_DESTINATION");
static const int INVALID_SERVICE_RECEIPT_HASH = HashingUtils::HashString("INVALID_SERVICE_RECEIPT");
static const int INVALID_SOURCE_INVENTORY_HASH = HashingUtils::HashString("INVALID_SOURCE_INVENTORY");
static const int INVALID_SOURCE_MANIFEST_HASH = HashingUtils::HashString("INVALID_SOURCE_MANIFEST");
static const int INVALID_SOURCE_REFERENCE_HASH = HashingUtils::HashString("INVALID_SOURCE_REFERENCE");
static const int ISSUE_INTEGRITY_FAILURE_HASH = HashingUtils::HashString("ISSUE_INTEGRITY_FAILURE");
static const int ISSUE_NOT_FOUND_HASH = HashingUtils::HashString("ISSUE_NOT_FOUND");
static const int MANIFEST_INVENTORY_MISMATCH_HASH = HashingUtils::HashString("MANIFEST_INVENTORY_MISMATCH");
static const int MANIFEST_PROVENANCE_CHANGED_HASH = HashingUtils::HashString("MANIFEST_PROVENANCE_CHANGED");
static const int MANIFEST_REPOSITORY_SET_MISMATCH_HASH = HashingUtils::HashString("MANIFEST_REPOSITORY_SET_MISMATCH");
static const int MANIFEST_SCOPE_OR_VERSION_MISMATCH_HASH = HashingUtils::HashString("MANIFEST_SCOPE_OR_VERSION_MISMATCH");
static const int MISSING_BUILD_RESULT_HASH = HashingUtils::HashString("MISSING_BUILD_RESULT");
static const int MISSING_COMPLETED_MANIFEST_HASH = HashingUtils::HashString("MISSING_COMPLETED_MANIFEST");
static const int MISSING_RESULT_DIGEST_HASH = HashingUtils::HashString("MISSING_RESULT_DIGEST");
static const int MISSING_SOURCE_MANIFEST_HASH = HashingUtils::HashString("MISSING_SOURCE_MANIFEST");
static const int MISSING_SOURCE_TARGET_HASH = HashingUtils::HashString("MISSING_SOURCE_TARGET");
static const int PATCH_NOT_APPLICABLE_HASH = HashingUtils::HashString("PATCH_NOT_APPLICABLE");
static const int PATCH_STORAGE_IDENTITY_MISSING_HASH = HashingUtils::HashString("PATCH_STORAGE_IDENTITY_MISSING");
static const int PATCH_UNSUPPORTED_HASH = HashingUtils::HashString("PATCH_UNSUPPORTED");
static const int PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT_HASH =
    HashingUtils::HashString("PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT");
static const int PUBLISHER_DEADLINE_EXCEEDED_HASH = HashingUtils::HashString("PUBLISHER_DEADLINE_EXCEEDED");
static const int RESULT_COMPLETED_MANIFEST_MISMATCH_HASH = HashingUtils::HashString("RESULT_COMPLETED_MANIFEST_MISMATCH");
static const int RESULT_SOURCE_BINDING_MISMATCH_HASH = HashingUtils::HashString("RESULT_SOURCE_BINDING_MISMATCH");
static const int SERVICE_COPY_DIGEST_MISMATCH_HASH = HashingUtils::HashString("SERVICE_COPY_DIGEST_MISMATCH");
static const int SERVICE_OBJECT_READ_FAILED_HASH = HashingUtils::HashString("SERVICE_OBJECT_READ_FAILED");
static const int SERVICE_OBJECT_TOO_LARGE_HASH = HashingUtils::HashString("SERVICE_OBJECT_TOO_LARGE");
static const int SERVICE_RECEIPT_OUTSIDE_ISSUE_HASH = HashingUtils::HashString("SERVICE_RECEIPT_OUTSIDE_ISSUE");
static const int SOURCE_OBJECT_DIGEST_MISMATCH_HASH = HashingUtils::HashString("SOURCE_OBJECT_DIGEST_MISMATCH");
static const int SOURCE_REFERENCE_OUTSIDE_BUILD_HASH = HashingUtils::HashString("SOURCE_REFERENCE_OUTSIDE_BUILD");
static const int SOURCE_TARGET_BUILD_MISMATCH_HASH = HashingUtils::HashString("SOURCE_TARGET_BUILD_MISMATCH");
static const int UNKNOWN_REPOSITORY_HASH = HashingUtils::HashString("UNKNOWN_REPOSITORY");
static const int UNKNOWN_SOURCE_PROVIDER_HASH = HashingUtils::HashString("UNKNOWN_SOURCE_PROVIDER");
static const int UNSUPPORTED_ENVIRONMENT_SCHEMA_HASH = HashingUtils::HashString("UNSUPPORTED_ENVIRONMENT_SCHEMA");
static const int github_destination_not_enabled_HASH = HashingUtils::HashString("github_destination_not_enabled");
static const int patch_creation_policy_disabled_HASH = HashingUtils::HashString("patch_creation_policy_disabled");

DeliveryReason GetDeliveryReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ARTIFACT_READ_FAILED_HASH) {
    return DeliveryReason::ARTIFACT_READ_FAILED;
  } else if (hashCode == ARTIFACT_SOURCE_MISMATCH_HASH) {
    return DeliveryReason::ARTIFACT_SOURCE_MISMATCH;
  } else if (hashCode == ARTIFACT_SOURCE_MISSING_HASH) {
    return DeliveryReason::ARTIFACT_SOURCE_MISSING;
  } else if (hashCode == BUILD_NOT_FOUND_HASH) {
    return DeliveryReason::BUILD_NOT_FOUND;
  } else if (hashCode == BUILD_READ_FAILED_HASH) {
    return DeliveryReason::BUILD_READ_FAILED;
  } else if (hashCode == BUILD_RESULT_SCOPE_MISMATCH_HASH) {
    return DeliveryReason::BUILD_RESULT_SCOPE_MISMATCH;
  } else if (hashCode == DELIVERY_NOT_CONFIGURED_HASH) {
    return DeliveryReason::DELIVERY_NOT_CONFIGURED;
  } else if (hashCode == DELIVERY_SOURCE_KIND_CHANGED_HASH) {
    return DeliveryReason::DELIVERY_SOURCE_KIND_CHANGED;
  } else if (hashCode == DUPLICATE_LOGICAL_REPOSITORY_HASH) {
    return DeliveryReason::DUPLICATE_LOGICAL_REPOSITORY;
  } else if (hashCode == DUPLICATE_OR_INVALID_REPOSITORY_HASH) {
    return DeliveryReason::DUPLICATE_OR_INVALID_REPOSITORY;
  } else if (hashCode == ENVIRONMENT_DELETED_HASH) {
    return DeliveryReason::ENVIRONMENT_DELETED;
  } else if (hashCode == ENVIRONMENT_NOT_ACTIVE_HASH) {
    return DeliveryReason::ENVIRONMENT_NOT_ACTIVE;
  } else if (hashCode == ENVIRONMENT_NOT_FOUND_HASH) {
    return DeliveryReason::ENVIRONMENT_NOT_FOUND;
  } else if (hashCode == ENVIRONMENT_READ_FAILED_HASH) {
    return DeliveryReason::ENVIRONMENT_READ_FAILED;
  } else if (hashCode == S3_ACCESS_DENIED_HASH) {
    return DeliveryReason::S3_ACCESS_DENIED;
  } else if (hashCode == S3_SOURCE_PREFIX_OVERLAP_HASH) {
    return DeliveryReason::S3_SOURCE_PREFIX_OVERLAP;
  } else if (hashCode == SOURCE_INTEGRATION_UNRESOLVED_HASH) {
    return DeliveryReason::SOURCE_INTEGRATION_UNRESOLVED;
  } else if (hashCode == SOURCE_INTEGRATION_READ_FAILED_HASH) {
    return DeliveryReason::SOURCE_INTEGRATION_READ_FAILED;
  } else if (hashCode == SOURCE_INTEGRATION_INVALID_HASH) {
    return DeliveryReason::SOURCE_INTEGRATION_INVALID;
  } else if (hashCode == SOURCE_INTEGRATION_CHANGED_HASH) {
    return DeliveryReason::SOURCE_INTEGRATION_CHANGED;
  } else if (hashCode == EXPORT_CREDENTIALS_MISSING_HASH) {
    return DeliveryReason::EXPORT_CREDENTIALS_MISSING;
  } else if (hashCode == EXPORT_CREDENTIAL_EXPIRY_INVALID_HASH) {
    return DeliveryReason::EXPORT_CREDENTIAL_EXPIRY_INVALID;
  } else if (hashCode == EXPORT_DESTINATION_INVALID_HASH) {
    return DeliveryReason::EXPORT_DESTINATION_INVALID;
  } else if (hashCode == EXPORT_EXISTING_OBJECT_MISMATCH_HASH) {
    return DeliveryReason::EXPORT_EXISTING_OBJECT_MISMATCH;
  } else if (hashCode == EXPORT_PUT_FAILED_HASH) {
    return DeliveryReason::EXPORT_PUT_FAILED;
  } else if (hashCode == EXPORT_RECONCILIATION_READ_FAILED_HASH) {
    return DeliveryReason::EXPORT_RECONCILIATION_READ_FAILED;
  } else if (hashCode == EXPORT_ROLE_ASSUMPTION_FAILED_HASH) {
    return DeliveryReason::EXPORT_ROLE_ASSUMPTION_FAILED;
  } else if (hashCode == GITHUB_ACCESS_DENIED_HASH) {
    return DeliveryReason::GITHUB_ACCESS_DENIED;
  } else if (hashCode == GITHUB_BASE_NOT_FOUND_HASH) {
    return DeliveryReason::GITHUB_BASE_NOT_FOUND;
  } else if (hashCode == GITHUB_BRANCH_CONFLICT_HASH) {
    return DeliveryReason::GITHUB_BRANCH_CONFLICT;
  } else if (hashCode == GITHUB_NOT_FOUND_HASH) {
    return DeliveryReason::GITHUB_NOT_FOUND;
  } else if (hashCode == GITHUB_RATE_LIMITED_HASH) {
    return DeliveryReason::GITHUB_RATE_LIMITED;
  } else if (hashCode == GITHUB_REPOSITORY_CHANGED_HASH) {
    return DeliveryReason::GITHUB_REPOSITORY_CHANGED;
  } else if (hashCode == GITHUB_REPOSITORY_NOT_FOUND_HASH) {
    return DeliveryReason::GITHUB_REPOSITORY_NOT_FOUND;
  } else if (hashCode == GITHUB_REQUEST_FAILED_HASH) {
    return DeliveryReason::GITHUB_REQUEST_FAILED;
  } else if (hashCode == GITHUB_REQUEST_REJECTED_HASH) {
    return DeliveryReason::GITHUB_REQUEST_REJECTED;
  } else if (hashCode == GITHUB_RESPONSE_INVALID_HASH) {
    return DeliveryReason::GITHUB_RESPONSE_INVALID;
  } else if (hashCode == GREEN_ATTEMPT_NOT_SUCCESSFUL_HASH) {
    return DeliveryReason::GREEN_ATTEMPT_NOT_SUCCESSFUL;
  } else if (hashCode == GREEN_COMPLETION_NOT_OBSERVED_HASH) {
    return DeliveryReason::GREEN_COMPLETION_NOT_OBSERVED;
  } else if (hashCode == PATCH_NOT_SELECTED_HASH) {
    return DeliveryReason::PATCH_NOT_SELECTED;
  } else if (hashCode == INCOMPLETE_SOURCE_REFERENCE_HASH) {
    return DeliveryReason::INCOMPLETE_SOURCE_REFERENCE;
  } else if (hashCode == INVALID_ARCHIVE_DIGEST_HASH) {
    return DeliveryReason::INVALID_ARCHIVE_DIGEST;
  } else if (hashCode == INVALID_ARTIFACT_SOURCE_HASH) {
    return DeliveryReason::INVALID_ARTIFACT_SOURCE;
  } else if (hashCode == INVALID_COMPLETED_MANIFEST_HASH) {
    return DeliveryReason::INVALID_COMPLETED_MANIFEST;
  } else if (hashCode == INVALID_EXPORT_RECEIPT_HASH) {
    return DeliveryReason::INVALID_EXPORT_RECEIPT;
  } else if (hashCode == INVALID_GITHUB_PROVENANCE_HASH) {
    return DeliveryReason::INVALID_GITHUB_PROVENANCE;
  } else if (hashCode == INVALID_S3_DESTINATION_HASH) {
    return DeliveryReason::INVALID_S3_DESTINATION;
  } else if (hashCode == INVALID_SERVICE_RECEIPT_HASH) {
    return DeliveryReason::INVALID_SERVICE_RECEIPT;
  } else if (hashCode == INVALID_SOURCE_INVENTORY_HASH) {
    return DeliveryReason::INVALID_SOURCE_INVENTORY;
  } else if (hashCode == INVALID_SOURCE_MANIFEST_HASH) {
    return DeliveryReason::INVALID_SOURCE_MANIFEST;
  } else if (hashCode == INVALID_SOURCE_REFERENCE_HASH) {
    return DeliveryReason::INVALID_SOURCE_REFERENCE;
  } else if (hashCode == ISSUE_INTEGRITY_FAILURE_HASH) {
    return DeliveryReason::ISSUE_INTEGRITY_FAILURE;
  } else if (hashCode == ISSUE_NOT_FOUND_HASH) {
    return DeliveryReason::ISSUE_NOT_FOUND;
  } else if (hashCode == MANIFEST_INVENTORY_MISMATCH_HASH) {
    return DeliveryReason::MANIFEST_INVENTORY_MISMATCH;
  } else if (hashCode == MANIFEST_PROVENANCE_CHANGED_HASH) {
    return DeliveryReason::MANIFEST_PROVENANCE_CHANGED;
  } else if (hashCode == MANIFEST_REPOSITORY_SET_MISMATCH_HASH) {
    return DeliveryReason::MANIFEST_REPOSITORY_SET_MISMATCH;
  } else if (hashCode == MANIFEST_SCOPE_OR_VERSION_MISMATCH_HASH) {
    return DeliveryReason::MANIFEST_SCOPE_OR_VERSION_MISMATCH;
  } else if (hashCode == MISSING_BUILD_RESULT_HASH) {
    return DeliveryReason::MISSING_BUILD_RESULT;
  } else if (hashCode == MISSING_COMPLETED_MANIFEST_HASH) {
    return DeliveryReason::MISSING_COMPLETED_MANIFEST;
  } else if (hashCode == MISSING_RESULT_DIGEST_HASH) {
    return DeliveryReason::MISSING_RESULT_DIGEST;
  } else if (hashCode == MISSING_SOURCE_MANIFEST_HASH) {
    return DeliveryReason::MISSING_SOURCE_MANIFEST;
  } else if (hashCode == MISSING_SOURCE_TARGET_HASH) {
    return DeliveryReason::MISSING_SOURCE_TARGET;
  } else if (hashCode == PATCH_NOT_APPLICABLE_HASH) {
    return DeliveryReason::PATCH_NOT_APPLICABLE;
  } else if (hashCode == PATCH_STORAGE_IDENTITY_MISSING_HASH) {
    return DeliveryReason::PATCH_STORAGE_IDENTITY_MISSING;
  } else if (hashCode == PATCH_UNSUPPORTED_HASH) {
    return DeliveryReason::PATCH_UNSUPPORTED;
  } else if (hashCode == PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT_HASH) {
    return DeliveryReason::PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT;
  } else if (hashCode == PUBLISHER_DEADLINE_EXCEEDED_HASH) {
    return DeliveryReason::PUBLISHER_DEADLINE_EXCEEDED;
  } else if (hashCode == RESULT_COMPLETED_MANIFEST_MISMATCH_HASH) {
    return DeliveryReason::RESULT_COMPLETED_MANIFEST_MISMATCH;
  } else if (hashCode == RESULT_SOURCE_BINDING_MISMATCH_HASH) {
    return DeliveryReason::RESULT_SOURCE_BINDING_MISMATCH;
  } else if (hashCode == SERVICE_COPY_DIGEST_MISMATCH_HASH) {
    return DeliveryReason::SERVICE_COPY_DIGEST_MISMATCH;
  } else if (hashCode == SERVICE_OBJECT_READ_FAILED_HASH) {
    return DeliveryReason::SERVICE_OBJECT_READ_FAILED;
  } else if (hashCode == SERVICE_OBJECT_TOO_LARGE_HASH) {
    return DeliveryReason::SERVICE_OBJECT_TOO_LARGE;
  } else if (hashCode == SERVICE_RECEIPT_OUTSIDE_ISSUE_HASH) {
    return DeliveryReason::SERVICE_RECEIPT_OUTSIDE_ISSUE;
  } else if (hashCode == SOURCE_OBJECT_DIGEST_MISMATCH_HASH) {
    return DeliveryReason::SOURCE_OBJECT_DIGEST_MISMATCH;
  } else if (hashCode == SOURCE_REFERENCE_OUTSIDE_BUILD_HASH) {
    return DeliveryReason::SOURCE_REFERENCE_OUTSIDE_BUILD;
  } else if (hashCode == SOURCE_TARGET_BUILD_MISMATCH_HASH) {
    return DeliveryReason::SOURCE_TARGET_BUILD_MISMATCH;
  } else if (hashCode == UNKNOWN_REPOSITORY_HASH) {
    return DeliveryReason::UNKNOWN_REPOSITORY;
  } else if (hashCode == UNKNOWN_SOURCE_PROVIDER_HASH) {
    return DeliveryReason::UNKNOWN_SOURCE_PROVIDER;
  } else if (hashCode == UNSUPPORTED_ENVIRONMENT_SCHEMA_HASH) {
    return DeliveryReason::UNSUPPORTED_ENVIRONMENT_SCHEMA;
  } else if (hashCode == github_destination_not_enabled_HASH) {
    return DeliveryReason::github_destination_not_enabled;
  } else if (hashCode == patch_creation_policy_disabled_HASH) {
    return DeliveryReason::patch_creation_policy_disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliveryReason>(hashCode);
  }

  return DeliveryReason::NOT_SET;
}

Aws::String GetNameForDeliveryReason(DeliveryReason enumValue) {
  switch (enumValue) {
    case DeliveryReason::NOT_SET:
      return {};
    case DeliveryReason::ARTIFACT_READ_FAILED:
      return "ARTIFACT_READ_FAILED";
    case DeliveryReason::ARTIFACT_SOURCE_MISMATCH:
      return "ARTIFACT_SOURCE_MISMATCH";
    case DeliveryReason::ARTIFACT_SOURCE_MISSING:
      return "ARTIFACT_SOURCE_MISSING";
    case DeliveryReason::BUILD_NOT_FOUND:
      return "BUILD_NOT_FOUND";
    case DeliveryReason::BUILD_READ_FAILED:
      return "BUILD_READ_FAILED";
    case DeliveryReason::BUILD_RESULT_SCOPE_MISMATCH:
      return "BUILD_RESULT_SCOPE_MISMATCH";
    case DeliveryReason::DELIVERY_NOT_CONFIGURED:
      return "DELIVERY_NOT_CONFIGURED";
    case DeliveryReason::DELIVERY_SOURCE_KIND_CHANGED:
      return "DELIVERY_SOURCE_KIND_CHANGED";
    case DeliveryReason::DUPLICATE_LOGICAL_REPOSITORY:
      return "DUPLICATE_LOGICAL_REPOSITORY";
    case DeliveryReason::DUPLICATE_OR_INVALID_REPOSITORY:
      return "DUPLICATE_OR_INVALID_REPOSITORY";
    case DeliveryReason::ENVIRONMENT_DELETED:
      return "ENVIRONMENT_DELETED";
    case DeliveryReason::ENVIRONMENT_NOT_ACTIVE:
      return "ENVIRONMENT_NOT_ACTIVE";
    case DeliveryReason::ENVIRONMENT_NOT_FOUND:
      return "ENVIRONMENT_NOT_FOUND";
    case DeliveryReason::ENVIRONMENT_READ_FAILED:
      return "ENVIRONMENT_READ_FAILED";
    case DeliveryReason::S3_ACCESS_DENIED:
      return "S3_ACCESS_DENIED";
    case DeliveryReason::S3_SOURCE_PREFIX_OVERLAP:
      return "S3_SOURCE_PREFIX_OVERLAP";
    case DeliveryReason::SOURCE_INTEGRATION_UNRESOLVED:
      return "SOURCE_INTEGRATION_UNRESOLVED";
    case DeliveryReason::SOURCE_INTEGRATION_READ_FAILED:
      return "SOURCE_INTEGRATION_READ_FAILED";
    case DeliveryReason::SOURCE_INTEGRATION_INVALID:
      return "SOURCE_INTEGRATION_INVALID";
    case DeliveryReason::SOURCE_INTEGRATION_CHANGED:
      return "SOURCE_INTEGRATION_CHANGED";
    case DeliveryReason::EXPORT_CREDENTIALS_MISSING:
      return "EXPORT_CREDENTIALS_MISSING";
    case DeliveryReason::EXPORT_CREDENTIAL_EXPIRY_INVALID:
      return "EXPORT_CREDENTIAL_EXPIRY_INVALID";
    case DeliveryReason::EXPORT_DESTINATION_INVALID:
      return "EXPORT_DESTINATION_INVALID";
    case DeliveryReason::EXPORT_EXISTING_OBJECT_MISMATCH:
      return "EXPORT_EXISTING_OBJECT_MISMATCH";
    case DeliveryReason::EXPORT_PUT_FAILED:
      return "EXPORT_PUT_FAILED";
    case DeliveryReason::EXPORT_RECONCILIATION_READ_FAILED:
      return "EXPORT_RECONCILIATION_READ_FAILED";
    case DeliveryReason::EXPORT_ROLE_ASSUMPTION_FAILED:
      return "EXPORT_ROLE_ASSUMPTION_FAILED";
    case DeliveryReason::GITHUB_ACCESS_DENIED:
      return "GITHUB_ACCESS_DENIED";
    case DeliveryReason::GITHUB_BASE_NOT_FOUND:
      return "GITHUB_BASE_NOT_FOUND";
    case DeliveryReason::GITHUB_BRANCH_CONFLICT:
      return "GITHUB_BRANCH_CONFLICT";
    case DeliveryReason::GITHUB_NOT_FOUND:
      return "GITHUB_NOT_FOUND";
    case DeliveryReason::GITHUB_RATE_LIMITED:
      return "GITHUB_RATE_LIMITED";
    case DeliveryReason::GITHUB_REPOSITORY_CHANGED:
      return "GITHUB_REPOSITORY_CHANGED";
    case DeliveryReason::GITHUB_REPOSITORY_NOT_FOUND:
      return "GITHUB_REPOSITORY_NOT_FOUND";
    case DeliveryReason::GITHUB_REQUEST_FAILED:
      return "GITHUB_REQUEST_FAILED";
    case DeliveryReason::GITHUB_REQUEST_REJECTED:
      return "GITHUB_REQUEST_REJECTED";
    case DeliveryReason::GITHUB_RESPONSE_INVALID:
      return "GITHUB_RESPONSE_INVALID";
    case DeliveryReason::GREEN_ATTEMPT_NOT_SUCCESSFUL:
      return "GREEN_ATTEMPT_NOT_SUCCESSFUL";
    case DeliveryReason::GREEN_COMPLETION_NOT_OBSERVED:
      return "GREEN_COMPLETION_NOT_OBSERVED";
    case DeliveryReason::PATCH_NOT_SELECTED:
      return "PATCH_NOT_SELECTED";
    case DeliveryReason::INCOMPLETE_SOURCE_REFERENCE:
      return "INCOMPLETE_SOURCE_REFERENCE";
    case DeliveryReason::INVALID_ARCHIVE_DIGEST:
      return "INVALID_ARCHIVE_DIGEST";
    case DeliveryReason::INVALID_ARTIFACT_SOURCE:
      return "INVALID_ARTIFACT_SOURCE";
    case DeliveryReason::INVALID_COMPLETED_MANIFEST:
      return "INVALID_COMPLETED_MANIFEST";
    case DeliveryReason::INVALID_EXPORT_RECEIPT:
      return "INVALID_EXPORT_RECEIPT";
    case DeliveryReason::INVALID_GITHUB_PROVENANCE:
      return "INVALID_GITHUB_PROVENANCE";
    case DeliveryReason::INVALID_S3_DESTINATION:
      return "INVALID_S3_DESTINATION";
    case DeliveryReason::INVALID_SERVICE_RECEIPT:
      return "INVALID_SERVICE_RECEIPT";
    case DeliveryReason::INVALID_SOURCE_INVENTORY:
      return "INVALID_SOURCE_INVENTORY";
    case DeliveryReason::INVALID_SOURCE_MANIFEST:
      return "INVALID_SOURCE_MANIFEST";
    case DeliveryReason::INVALID_SOURCE_REFERENCE:
      return "INVALID_SOURCE_REFERENCE";
    case DeliveryReason::ISSUE_INTEGRITY_FAILURE:
      return "ISSUE_INTEGRITY_FAILURE";
    case DeliveryReason::ISSUE_NOT_FOUND:
      return "ISSUE_NOT_FOUND";
    case DeliveryReason::MANIFEST_INVENTORY_MISMATCH:
      return "MANIFEST_INVENTORY_MISMATCH";
    case DeliveryReason::MANIFEST_PROVENANCE_CHANGED:
      return "MANIFEST_PROVENANCE_CHANGED";
    case DeliveryReason::MANIFEST_REPOSITORY_SET_MISMATCH:
      return "MANIFEST_REPOSITORY_SET_MISMATCH";
    case DeliveryReason::MANIFEST_SCOPE_OR_VERSION_MISMATCH:
      return "MANIFEST_SCOPE_OR_VERSION_MISMATCH";
    case DeliveryReason::MISSING_BUILD_RESULT:
      return "MISSING_BUILD_RESULT";
    case DeliveryReason::MISSING_COMPLETED_MANIFEST:
      return "MISSING_COMPLETED_MANIFEST";
    case DeliveryReason::MISSING_RESULT_DIGEST:
      return "MISSING_RESULT_DIGEST";
    case DeliveryReason::MISSING_SOURCE_MANIFEST:
      return "MISSING_SOURCE_MANIFEST";
    case DeliveryReason::MISSING_SOURCE_TARGET:
      return "MISSING_SOURCE_TARGET";
    case DeliveryReason::PATCH_NOT_APPLICABLE:
      return "PATCH_NOT_APPLICABLE";
    case DeliveryReason::PATCH_STORAGE_IDENTITY_MISSING:
      return "PATCH_STORAGE_IDENTITY_MISSING";
    case DeliveryReason::PATCH_UNSUPPORTED:
      return "PATCH_UNSUPPORTED";
    case DeliveryReason::PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT:
      return "PUBLICATION_OUTCOME_UNKNOWN_AFTER_RETRY_LIMIT";
    case DeliveryReason::PUBLISHER_DEADLINE_EXCEEDED:
      return "PUBLISHER_DEADLINE_EXCEEDED";
    case DeliveryReason::RESULT_COMPLETED_MANIFEST_MISMATCH:
      return "RESULT_COMPLETED_MANIFEST_MISMATCH";
    case DeliveryReason::RESULT_SOURCE_BINDING_MISMATCH:
      return "RESULT_SOURCE_BINDING_MISMATCH";
    case DeliveryReason::SERVICE_COPY_DIGEST_MISMATCH:
      return "SERVICE_COPY_DIGEST_MISMATCH";
    case DeliveryReason::SERVICE_OBJECT_READ_FAILED:
      return "SERVICE_OBJECT_READ_FAILED";
    case DeliveryReason::SERVICE_OBJECT_TOO_LARGE:
      return "SERVICE_OBJECT_TOO_LARGE";
    case DeliveryReason::SERVICE_RECEIPT_OUTSIDE_ISSUE:
      return "SERVICE_RECEIPT_OUTSIDE_ISSUE";
    case DeliveryReason::SOURCE_OBJECT_DIGEST_MISMATCH:
      return "SOURCE_OBJECT_DIGEST_MISMATCH";
    case DeliveryReason::SOURCE_REFERENCE_OUTSIDE_BUILD:
      return "SOURCE_REFERENCE_OUTSIDE_BUILD";
    case DeliveryReason::SOURCE_TARGET_BUILD_MISMATCH:
      return "SOURCE_TARGET_BUILD_MISMATCH";
    case DeliveryReason::UNKNOWN_REPOSITORY:
      return "UNKNOWN_REPOSITORY";
    case DeliveryReason::UNKNOWN_SOURCE_PROVIDER:
      return "UNKNOWN_SOURCE_PROVIDER";
    case DeliveryReason::UNSUPPORTED_ENVIRONMENT_SCHEMA:
      return "UNSUPPORTED_ENVIRONMENT_SCHEMA";
    case DeliveryReason::github_destination_not_enabled:
      return "github_destination_not_enabled";
    case DeliveryReason::patch_creation_policy_disabled:
      return "patch_creation_policy_disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliveryReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
