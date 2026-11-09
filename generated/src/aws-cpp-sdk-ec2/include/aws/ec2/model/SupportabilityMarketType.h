/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class SupportabilityMarketType { NOT_SET, on_demand, spot };

namespace SupportabilityMarketTypeMapper {
AWS_EC2_API SupportabilityMarketType GetSupportabilityMarketTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSupportabilityMarketType(SupportabilityMarketType value);
}  // namespace SupportabilityMarketTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
