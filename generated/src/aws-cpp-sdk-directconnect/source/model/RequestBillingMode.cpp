/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/RequestBillingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace RequestBillingModeMapper {

static const int PayAsYouGo_HASH = HashingUtils::HashString("PayAsYouGo");
static const int FlatRateTier1_HASH = HashingUtils::HashString("FlatRateTier1");
static const int FlatRateTier2_HASH = HashingUtils::HashString("FlatRateTier2");
static const int FlatRateTier3_HASH = HashingUtils::HashString("FlatRateTier3");
static const int FlatRateTier4_HASH = HashingUtils::HashString("FlatRateTier4");
static const int FlatRateTier5_HASH = HashingUtils::HashString("FlatRateTier5");

RequestBillingMode GetRequestBillingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PayAsYouGo_HASH) {
    return RequestBillingMode::PayAsYouGo;
  } else if (hashCode == FlatRateTier1_HASH) {
    return RequestBillingMode::FlatRateTier1;
  } else if (hashCode == FlatRateTier2_HASH) {
    return RequestBillingMode::FlatRateTier2;
  } else if (hashCode == FlatRateTier3_HASH) {
    return RequestBillingMode::FlatRateTier3;
  } else if (hashCode == FlatRateTier4_HASH) {
    return RequestBillingMode::FlatRateTier4;
  } else if (hashCode == FlatRateTier5_HASH) {
    return RequestBillingMode::FlatRateTier5;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RequestBillingMode>(hashCode);
  }

  return RequestBillingMode::NOT_SET;
}

Aws::String GetNameForRequestBillingMode(RequestBillingMode enumValue) {
  switch (enumValue) {
    case RequestBillingMode::NOT_SET:
      return {};
    case RequestBillingMode::PayAsYouGo:
      return "PayAsYouGo";
    case RequestBillingMode::FlatRateTier1:
      return "FlatRateTier1";
    case RequestBillingMode::FlatRateTier2:
      return "FlatRateTier2";
    case RequestBillingMode::FlatRateTier3:
      return "FlatRateTier3";
    case RequestBillingMode::FlatRateTier4:
      return "FlatRateTier4";
    case RequestBillingMode::FlatRateTier5:
      return "FlatRateTier5";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RequestBillingModeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
