/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RetryStrategy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {
namespace RetryStrategyMapper {

static const int retry_with_group_configuration_HASH = HashingUtils::HashString("retry-with-group-configuration");
static const int none_HASH = HashingUtils::HashString("none");

RetryStrategy GetRetryStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == retry_with_group_configuration_HASH) {
    return RetryStrategy::retry_with_group_configuration;
  } else if (hashCode == none_HASH) {
    return RetryStrategy::none;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetryStrategy>(hashCode);
  }

  return RetryStrategy::NOT_SET;
}

Aws::String GetNameForRetryStrategy(RetryStrategy enumValue) {
  switch (enumValue) {
    case RetryStrategy::NOT_SET:
      return {};
    case RetryStrategy::retry_with_group_configuration:
      return "retry-with-group-configuration";
    case RetryStrategy::none:
      return "none";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetryStrategyMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
