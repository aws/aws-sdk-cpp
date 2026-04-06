/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/JobErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
namespace JobErrorCodeMapper {

static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AUTHORIZATION_ERROR");
static const int RESOURCE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_ERROR");
static const int SERVICE_QUOTA_EXCEEDED_ERROR_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_ERROR");
static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");
static const int CANCELED_JOB_ERROR_HASH = HashingUtils::HashString("CANCELED_JOB_ERROR");
static const int INVALID_SERVICE_LINKED_ROLE_HASH = HashingUtils::HashString("INVALID_SERVICE_LINKED_ROLE");
static const int INSUFFICIENT_PERMISSIONS_ERROR_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSIONS_ERROR");
static const int ORGANIZATION_ACCESS_DENIED_ERROR_HASH = HashingUtils::HashString("ORGANIZATION_ACCESS_DENIED_ERROR");
static const int INVALID_TARGET_ERROR_HASH = HashingUtils::HashString("INVALID_TARGET_ERROR");
static const int INVALID_POLICY_PREVIEW_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_POLICY_PREVIEW_CONFIGURATION");
static const int INVALID_ORGANIZATION_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_ORGANIZATION_CONFIGURATION");
static const int S3_BUCKET_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("S3_BUCKET_NOT_FOUND_ERROR");
static const int S3_BUCKET_PERMISSION_ERROR_HASH = HashingUtils::HashString("S3_BUCKET_PERMISSION_ERROR");

JobErrorCode GetJobErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTHORIZATION_ERROR_HASH) {
    return JobErrorCode::AUTHORIZATION_ERROR;
  } else if (hashCode == RESOURCE_NOT_FOUND_ERROR_HASH) {
    return JobErrorCode::RESOURCE_NOT_FOUND_ERROR;
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_ERROR_HASH) {
    return JobErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR;
  } else if (hashCode == SERVICE_ERROR_HASH) {
    return JobErrorCode::SERVICE_ERROR;
  } else if (hashCode == CANCELED_JOB_ERROR_HASH) {
    return JobErrorCode::CANCELED_JOB_ERROR;
  } else if (hashCode == INVALID_SERVICE_LINKED_ROLE_HASH) {
    return JobErrorCode::INVALID_SERVICE_LINKED_ROLE;
  } else if (hashCode == INSUFFICIENT_PERMISSIONS_ERROR_HASH) {
    return JobErrorCode::INSUFFICIENT_PERMISSIONS_ERROR;
  } else if (hashCode == ORGANIZATION_ACCESS_DENIED_ERROR_HASH) {
    return JobErrorCode::ORGANIZATION_ACCESS_DENIED_ERROR;
  } else if (hashCode == INVALID_TARGET_ERROR_HASH) {
    return JobErrorCode::INVALID_TARGET_ERROR;
  } else if (hashCode == INVALID_POLICY_PREVIEW_CONFIGURATION_HASH) {
    return JobErrorCode::INVALID_POLICY_PREVIEW_CONFIGURATION;
  } else if (hashCode == INVALID_ORGANIZATION_CONFIGURATION_HASH) {
    return JobErrorCode::INVALID_ORGANIZATION_CONFIGURATION;
  } else if (hashCode == S3_BUCKET_NOT_FOUND_ERROR_HASH) {
    return JobErrorCode::S3_BUCKET_NOT_FOUND_ERROR;
  } else if (hashCode == S3_BUCKET_PERMISSION_ERROR_HASH) {
    return JobErrorCode::S3_BUCKET_PERMISSION_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobErrorCode>(hashCode);
  }

  return JobErrorCode::NOT_SET;
}

Aws::String GetNameForJobErrorCode(JobErrorCode enumValue) {
  switch (enumValue) {
    case JobErrorCode::NOT_SET:
      return {};
    case JobErrorCode::AUTHORIZATION_ERROR:
      return "AUTHORIZATION_ERROR";
    case JobErrorCode::RESOURCE_NOT_FOUND_ERROR:
      return "RESOURCE_NOT_FOUND_ERROR";
    case JobErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR:
      return "SERVICE_QUOTA_EXCEEDED_ERROR";
    case JobErrorCode::SERVICE_ERROR:
      return "SERVICE_ERROR";
    case JobErrorCode::CANCELED_JOB_ERROR:
      return "CANCELED_JOB_ERROR";
    case JobErrorCode::INVALID_SERVICE_LINKED_ROLE:
      return "INVALID_SERVICE_LINKED_ROLE";
    case JobErrorCode::INSUFFICIENT_PERMISSIONS_ERROR:
      return "INSUFFICIENT_PERMISSIONS_ERROR";
    case JobErrorCode::ORGANIZATION_ACCESS_DENIED_ERROR:
      return "ORGANIZATION_ACCESS_DENIED_ERROR";
    case JobErrorCode::INVALID_TARGET_ERROR:
      return "INVALID_TARGET_ERROR";
    case JobErrorCode::INVALID_POLICY_PREVIEW_CONFIGURATION:
      return "INVALID_POLICY_PREVIEW_CONFIGURATION";
    case JobErrorCode::INVALID_ORGANIZATION_CONFIGURATION:
      return "INVALID_ORGANIZATION_CONFIGURATION";
    case JobErrorCode::S3_BUCKET_NOT_FOUND_ERROR:
      return "S3_BUCKET_NOT_FOUND_ERROR";
    case JobErrorCode::S3_BUCKET_PERMISSION_ERROR:
      return "S3_BUCKET_PERMISSION_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobErrorCodeMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
