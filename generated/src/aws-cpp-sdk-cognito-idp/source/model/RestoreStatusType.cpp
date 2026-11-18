/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RestoreStatusType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace RestoreStatusTypeMapper {

static const int PREVIEW_GENERATING_HASH = HashingUtils::HashString("PREVIEW_GENERATING");
static const int PREVIEW_GENERATED_HASH = HashingUtils::HashString("PREVIEW_GENERATED");
static const int PREVIEW_CANCELLED_HASH = HashingUtils::HashString("PREVIEW_CANCELLED");
static const int PREVIEW_GENERATION_FAILED_HASH = HashingUtils::HashString("PREVIEW_GENERATION_FAILED");
static const int PREVIEW_EXPIRED_HASH = HashingUtils::HashString("PREVIEW_EXPIRED");
static const int RESTORING_HASH = HashingUtils::HashString("RESTORING");
static const int RESTORE_COMPLETED_HASH = HashingUtils::HashString("RESTORE_COMPLETED");
static const int TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE_HASH = HashingUtils::HashString("TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE");
static const int AWS_ABORTED_HASH = HashingUtils::HashString("AWS_ABORTED");

RestoreStatusType GetRestoreStatusTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREVIEW_GENERATING_HASH) {
    return RestoreStatusType::PREVIEW_GENERATING;
  } else if (hashCode == PREVIEW_GENERATED_HASH) {
    return RestoreStatusType::PREVIEW_GENERATED;
  } else if (hashCode == PREVIEW_CANCELLED_HASH) {
    return RestoreStatusType::PREVIEW_CANCELLED;
  } else if (hashCode == PREVIEW_GENERATION_FAILED_HASH) {
    return RestoreStatusType::PREVIEW_GENERATION_FAILED;
  } else if (hashCode == PREVIEW_EXPIRED_HASH) {
    return RestoreStatusType::PREVIEW_EXPIRED;
  } else if (hashCode == RESTORING_HASH) {
    return RestoreStatusType::RESTORING;
  } else if (hashCode == RESTORE_COMPLETED_HASH) {
    return RestoreStatusType::RESTORE_COMPLETED;
  } else if (hashCode == TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE_HASH) {
    return RestoreStatusType::TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE;
  } else if (hashCode == AWS_ABORTED_HASH) {
    return RestoreStatusType::AWS_ABORTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RestoreStatusType>(hashCode);
  }

  return RestoreStatusType::NOT_SET;
}

Aws::String GetNameForRestoreStatusType(RestoreStatusType enumValue) {
  switch (enumValue) {
    case RestoreStatusType::NOT_SET:
      return {};
    case RestoreStatusType::PREVIEW_GENERATING:
      return "PREVIEW_GENERATING";
    case RestoreStatusType::PREVIEW_GENERATED:
      return "PREVIEW_GENERATED";
    case RestoreStatusType::PREVIEW_CANCELLED:
      return "PREVIEW_CANCELLED";
    case RestoreStatusType::PREVIEW_GENERATION_FAILED:
      return "PREVIEW_GENERATION_FAILED";
    case RestoreStatusType::PREVIEW_EXPIRED:
      return "PREVIEW_EXPIRED";
    case RestoreStatusType::RESTORING:
      return "RESTORING";
    case RestoreStatusType::RESTORE_COMPLETED:
      return "RESTORE_COMPLETED";
    case RestoreStatusType::TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE:
      return "TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE";
    case RestoreStatusType::AWS_ABORTED:
      return "AWS_ABORTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RestoreStatusTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
