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
enum class RequestBillingMode { NOT_SET, PayAsYouGo, FlatRateTier1, FlatRateTier2, FlatRateTier3, FlatRateTier4, FlatRateTier5 };

namespace RequestBillingModeMapper {
AWS_DIRECTCONNECT_API RequestBillingMode GetRequestBillingModeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForRequestBillingMode(RequestBillingMode value);
}  // namespace RequestBillingModeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
