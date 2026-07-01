/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class ResourceStatus {
  NOT_SET,
  CREATED,
  POPULATE_STARTED,
  POPULATE_SUCCESS,
  POPULATE_FAILED,
  DISALLOWED_BY_DATA_PROVIDER,
  BASE_TABLE_REMOVED,
  RETENTION_PERIOD_EXPIRED
};

namespace ResourceStatusMapper {
AWS_CLEANROOMS_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForResourceStatus(ResourceStatus value);
}  // namespace ResourceStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
