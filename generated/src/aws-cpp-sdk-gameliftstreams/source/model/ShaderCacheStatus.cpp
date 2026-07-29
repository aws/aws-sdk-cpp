/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/ShaderCacheStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace ShaderCacheStatusMapper {

static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

ShaderCacheStatus GetShaderCacheStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIALIZED_HASH) {
    return ShaderCacheStatus::INITIALIZED;
  } else if (hashCode == PROCESSING_HASH) {
    return ShaderCacheStatus::PROCESSING;
  } else if (hashCode == READY_HASH) {
    return ShaderCacheStatus::READY;
  } else if (hashCode == DELETING_HASH) {
    return ShaderCacheStatus::DELETING;
  } else if (hashCode == ERROR__HASH) {
    return ShaderCacheStatus::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ShaderCacheStatus>(hashCode);
  }

  return ShaderCacheStatus::NOT_SET;
}

Aws::String GetNameForShaderCacheStatus(ShaderCacheStatus enumValue) {
  switch (enumValue) {
    case ShaderCacheStatus::NOT_SET:
      return {};
    case ShaderCacheStatus::INITIALIZED:
      return "INITIALIZED";
    case ShaderCacheStatus::PROCESSING:
      return "PROCESSING";
    case ShaderCacheStatus::READY:
      return "READY";
    case ShaderCacheStatus::DELETING:
      return "DELETING";
    case ShaderCacheStatus::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ShaderCacheStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
