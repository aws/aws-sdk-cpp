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
enum class LogicalOperator { NOT_SET, EQUALS };

namespace LogicalOperatorMapper {
AWS_GLUE_API LogicalOperator GetLogicalOperatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForLogicalOperator(LogicalOperator value);
}  // namespace LogicalOperatorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
