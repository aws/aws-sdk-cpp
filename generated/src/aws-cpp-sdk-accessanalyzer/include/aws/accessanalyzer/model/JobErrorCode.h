/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
enum class JobErrorCode {
  NOT_SET,
  AUTHORIZATION_ERROR,
  RESOURCE_NOT_FOUND_ERROR,
  SERVICE_QUOTA_EXCEEDED_ERROR,
  SERVICE_ERROR,
  CANCELED_JOB_ERROR,
  INVALID_SERVICE_LINKED_ROLE,
  INSUFFICIENT_PERMISSIONS_ERROR,
  ORGANIZATION_ACCESS_DENIED_ERROR,
  INVALID_TARGET_ERROR,
  INVALID_POLICY_PREVIEW_CONFIGURATION,
  INVALID_ORGANIZATION_CONFIGURATION,
  S3_BUCKET_NOT_FOUND_ERROR,
  S3_BUCKET_PERMISSION_ERROR
};

namespace JobErrorCodeMapper {
AWS_ACCESSANALYZER_API JobErrorCode GetJobErrorCodeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForJobErrorCode(JobErrorCode value);
}  // namespace JobErrorCodeMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
