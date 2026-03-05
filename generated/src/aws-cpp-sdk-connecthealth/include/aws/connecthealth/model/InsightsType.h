/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class InsightsType { NOT_SET, PRE_VISIT };

namespace InsightsTypeMapper {
AWS_CONNECTHEALTH_API InsightsType GetInsightsTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForInsightsType(InsightsType value);
}  // namespace InsightsTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
