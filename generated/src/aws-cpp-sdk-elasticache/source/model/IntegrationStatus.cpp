/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/IntegrationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace IntegrationStatusMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");
static const int enabling_HASH = HashingUtils::HashString("enabling");
static const int disabling_HASH = HashingUtils::HashString("disabling");
static const int failed_HASH = HashingUtils::HashString("failed");

IntegrationStatus GetIntegrationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return IntegrationStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return IntegrationStatus::disabled;
  } else if (hashCode == enabling_HASH) {
    return IntegrationStatus::enabling;
  } else if (hashCode == disabling_HASH) {
    return IntegrationStatus::disabling;
  } else if (hashCode == failed_HASH) {
    return IntegrationStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationStatus>(hashCode);
  }

  return IntegrationStatus::NOT_SET;
}

Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue) {
  switch (enumValue) {
    case IntegrationStatus::NOT_SET:
      return {};
    case IntegrationStatus::enabled:
      return "enabled";
    case IntegrationStatus::disabled:
      return "disabled";
    case IntegrationStatus::enabling:
      return "enabling";
    case IntegrationStatus::disabling:
      return "disabling";
    case IntegrationStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
