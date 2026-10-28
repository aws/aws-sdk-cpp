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
enum class SupportabilityScore { NOT_SET, high, medium, low };

namespace SupportabilityScoreMapper {
AWS_EC2_API SupportabilityScore GetSupportabilityScoreForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSupportabilityScore(SupportabilityScore value);
}  // namespace SupportabilityScoreMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
