/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class EnableHybridValues { NOT_SET, TRUE, FALSE };

namespace EnableHybridValuesMapper {
AWS_GLUE_API EnableHybridValues GetEnableHybridValuesForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForEnableHybridValues(EnableHybridValues value);
}  // namespace EnableHybridValuesMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
