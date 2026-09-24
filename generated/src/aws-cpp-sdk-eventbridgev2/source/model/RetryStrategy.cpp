/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/RetryStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace RetryStrategyMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");

RetryStrategy GetRetryStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return RetryStrategy::ALL;
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
    case RetryStrategy::ALL:
      return "ALL";
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
}  // namespace EventBridgeV2
}  // namespace Aws
