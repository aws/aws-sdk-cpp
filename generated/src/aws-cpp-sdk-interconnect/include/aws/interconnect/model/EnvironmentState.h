/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

namespace Aws {
namespace Interconnect {
namespace Model {
enum class EnvironmentState { NOT_SET, available, limited, unavailable };

namespace EnvironmentStateMapper {
AWS_INTERCONNECT_API EnvironmentState GetEnvironmentStateForName(const Aws::String& name);

AWS_INTERCONNECT_API Aws::String GetNameForEnvironmentState(EnvironmentState value);
}  // namespace EnvironmentStateMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
