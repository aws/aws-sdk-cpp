/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class RangeConstraint { NOT_SET, CONTIGUOUS, NONCONTIGUOUS };

namespace RangeConstraintMapper {
AWS_DEADLINE_API RangeConstraint GetRangeConstraintForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForRangeConstraint(RangeConstraint value);
}  // namespace RangeConstraintMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
