/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/BillingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace BillingModeMapper {

static const int PayAsYouGo_HASH = HashingUtils::HashString("PayAsYouGo");
static const int FlatRateTier1_HASH = HashingUtils::HashString("FlatRateTier1");
static const int FlatRateTier2_HASH = HashingUtils::HashString("FlatRateTier2");
static const int FlatRateTier3_HASH = HashingUtils::HashString("FlatRateTier3");
static const int FlatRateTier4_HASH = HashingUtils::HashString("FlatRateTier4");
static const int FlatRateTier5_HASH = HashingUtils::HashString("FlatRateTier5");
static const int PortPairFlatRateTier1_HASH = HashingUtils::HashString("PortPairFlatRateTier1");
static const int PortPairFlatRateTier2_HASH = HashingUtils::HashString("PortPairFlatRateTier2");
static const int PortPairFlatRateTier3_HASH = HashingUtils::HashString("PortPairFlatRateTier3");
static const int PortPairFlatRateTier4_HASH = HashingUtils::HashString("PortPairFlatRateTier4");
static const int PortPairFlatRateTier5_HASH = HashingUtils::HashString("PortPairFlatRateTier5");

BillingMode GetBillingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PayAsYouGo_HASH) {
    return BillingMode::PayAsYouGo;
  } else if (hashCode == FlatRateTier1_HASH) {
    return BillingMode::FlatRateTier1;
  } else if (hashCode == FlatRateTier2_HASH) {
    return BillingMode::FlatRateTier2;
  } else if (hashCode == FlatRateTier3_HASH) {
    return BillingMode::FlatRateTier3;
  } else if (hashCode == FlatRateTier4_HASH) {
    return BillingMode::FlatRateTier4;
  } else if (hashCode == FlatRateTier5_HASH) {
    return BillingMode::FlatRateTier5;
  } else if (hashCode == PortPairFlatRateTier1_HASH) {
    return BillingMode::PortPairFlatRateTier1;
  } else if (hashCode == PortPairFlatRateTier2_HASH) {
    return BillingMode::PortPairFlatRateTier2;
  } else if (hashCode == PortPairFlatRateTier3_HASH) {
    return BillingMode::PortPairFlatRateTier3;
  } else if (hashCode == PortPairFlatRateTier4_HASH) {
    return BillingMode::PortPairFlatRateTier4;
  } else if (hashCode == PortPairFlatRateTier5_HASH) {
    return BillingMode::PortPairFlatRateTier5;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingMode>(hashCode);
  }

  return BillingMode::NOT_SET;
}

Aws::String GetNameForBillingMode(BillingMode enumValue) {
  switch (enumValue) {
    case BillingMode::NOT_SET:
      return {};
    case BillingMode::PayAsYouGo:
      return "PayAsYouGo";
    case BillingMode::FlatRateTier1:
      return "FlatRateTier1";
    case BillingMode::FlatRateTier2:
      return "FlatRateTier2";
    case BillingMode::FlatRateTier3:
      return "FlatRateTier3";
    case BillingMode::FlatRateTier4:
      return "FlatRateTier4";
    case BillingMode::FlatRateTier5:
      return "FlatRateTier5";
    case BillingMode::PortPairFlatRateTier1:
      return "PortPairFlatRateTier1";
    case BillingMode::PortPairFlatRateTier2:
      return "PortPairFlatRateTier2";
    case BillingMode::PortPairFlatRateTier3:
      return "PortPairFlatRateTier3";
    case BillingMode::PortPairFlatRateTier4:
      return "PortPairFlatRateTier4";
    case BillingMode::PortPairFlatRateTier5:
      return "PortPairFlatRateTier5";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingModeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
