/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class FindingSeverityAdjustment { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW, INFORMATIONAL, UNCHANGED };

namespace FindingSeverityAdjustmentMapper {
AWS_CONTINUUM_API FindingSeverityAdjustment GetFindingSeverityAdjustmentForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingSeverityAdjustment(FindingSeverityAdjustment value);
}  // namespace FindingSeverityAdjustmentMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
