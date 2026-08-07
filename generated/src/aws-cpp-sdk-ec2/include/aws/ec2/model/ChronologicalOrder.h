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
enum class ChronologicalOrder { NOT_SET, forward, reverse };

namespace ChronologicalOrderMapper {
AWS_EC2_API ChronologicalOrder GetChronologicalOrderForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForChronologicalOrder(ChronologicalOrder value);
}  // namespace ChronologicalOrderMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
