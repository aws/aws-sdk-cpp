/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/S3TableIntegrationSourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace S3TableIntegrationSourceStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DATA_SOURCE_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DATA_SOURCE_DELETE_IN_PROGRESS");

S3TableIntegrationSourceStatus GetS3TableIntegrationSourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return S3TableIntegrationSourceStatus::ACTIVE;
  } else if (hashCode == UNHEALTHY_HASH) {
    return S3TableIntegrationSourceStatus::UNHEALTHY;
  } else if (hashCode == FAILED_HASH) {
    return S3TableIntegrationSourceStatus::FAILED;
  } else if (hashCode == DATA_SOURCE_DELETE_IN_PROGRESS_HASH) {
    return S3TableIntegrationSourceStatus::DATA_SOURCE_DELETE_IN_PROGRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3TableIntegrationSourceStatus>(hashCode);
  }

  return S3TableIntegrationSourceStatus::NOT_SET;
}

Aws::String GetNameForS3TableIntegrationSourceStatus(S3TableIntegrationSourceStatus enumValue) {
  switch (enumValue) {
    case S3TableIntegrationSourceStatus::NOT_SET:
      return {};
    case S3TableIntegrationSourceStatus::ACTIVE:
      return "ACTIVE";
    case S3TableIntegrationSourceStatus::UNHEALTHY:
      return "UNHEALTHY";
    case S3TableIntegrationSourceStatus::FAILED:
      return "FAILED";
    case S3TableIntegrationSourceStatus::DATA_SOURCE_DELETE_IN_PROGRESS:
      return "DATA_SOURCE_DELETE_IN_PROGRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3TableIntegrationSourceStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
