/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
namespace Model {
enum class Monotonicity { NOT_SET, DECREASING, INCREASING, STATIC_ };

namespace MonotonicityMapper {
AWS_LOOKOUTEQUIPMENT_API Monotonicity GetMonotonicityForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForMonotonicity(Monotonicity value);
}  // namespace MonotonicityMapper
}  // namespace Model
}  // namespace LookoutEquipment
}  // namespace Aws
