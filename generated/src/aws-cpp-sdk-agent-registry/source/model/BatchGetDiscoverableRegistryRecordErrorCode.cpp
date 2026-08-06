/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {
namespace BatchGetDiscoverableRegistryRecordErrorCodeMapper {

static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

BatchGetDiscoverableRegistryRecordErrorCode GetBatchGetDiscoverableRegistryRecordErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return BatchGetDiscoverableRegistryRecordErrorCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == ACCESS_DENIED_HASH) {
    return BatchGetDiscoverableRegistryRecordErrorCode::ACCESS_DENIED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return BatchGetDiscoverableRegistryRecordErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetDiscoverableRegistryRecordErrorCode>(hashCode);
  }

  return BatchGetDiscoverableRegistryRecordErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetDiscoverableRegistryRecordErrorCode(BatchGetDiscoverableRegistryRecordErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetDiscoverableRegistryRecordErrorCode::NOT_SET:
      return {};
    case BatchGetDiscoverableRegistryRecordErrorCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case BatchGetDiscoverableRegistryRecordErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case BatchGetDiscoverableRegistryRecordErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetDiscoverableRegistryRecordErrorCodeMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
