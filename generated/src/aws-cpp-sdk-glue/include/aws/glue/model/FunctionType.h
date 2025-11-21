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
enum class FunctionType { NOT_SET, REGULAR_FUNCTION, AGGREGATE_FUNCTION, STORED_PROCEDURE };

namespace FunctionTypeMapper {
AWS_GLUE_API FunctionType GetFunctionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFunctionType(FunctionType value);
}  // namespace FunctionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
