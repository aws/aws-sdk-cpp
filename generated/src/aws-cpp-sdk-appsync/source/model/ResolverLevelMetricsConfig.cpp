﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ResolverLevelMetricsConfig.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppSync {
namespace Model {
namespace ResolverLevelMetricsConfigMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ResolverLevelMetricsConfig GetResolverLevelMetricsConfigForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ResolverLevelMetricsConfig::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ResolverLevelMetricsConfig::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResolverLevelMetricsConfig>(hashCode);
  }

  return ResolverLevelMetricsConfig::NOT_SET;
}

Aws::String GetNameForResolverLevelMetricsConfig(ResolverLevelMetricsConfig enumValue) {
  switch (enumValue) {
    case ResolverLevelMetricsConfig::NOT_SET:
      return {};
    case ResolverLevelMetricsConfig::ENABLED:
      return "ENABLED";
    case ResolverLevelMetricsConfig::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResolverLevelMetricsConfigMapper
}  // namespace Model
}  // namespace AppSync
}  // namespace Aws
