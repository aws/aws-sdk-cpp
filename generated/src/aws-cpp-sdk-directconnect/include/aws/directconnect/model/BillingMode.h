/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class BillingMode {
  NOT_SET,
  PayAsYouGo,
  FlatRateTier1,
  FlatRateTier2,
  FlatRateTier3,
  FlatRateTier4,
  FlatRateTier5,
  PortPairFlatRateTier1,
  PortPairFlatRateTier2,
  PortPairFlatRateTier3,
  PortPairFlatRateTier4,
  PortPairFlatRateTier5
};

namespace BillingModeMapper {
AWS_DIRECTCONNECT_API BillingMode GetBillingModeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForBillingMode(BillingMode value);
}  // namespace BillingModeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
