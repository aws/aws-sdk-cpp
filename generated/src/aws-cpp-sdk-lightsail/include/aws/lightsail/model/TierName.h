/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class TierName { NOT_SET, Essential, Growth, Accelerate, Premier };

namespace TierNameMapper {
AWS_LIGHTSAIL_API TierName GetTierNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForTierName(TierName value);
}  // namespace TierNameMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
