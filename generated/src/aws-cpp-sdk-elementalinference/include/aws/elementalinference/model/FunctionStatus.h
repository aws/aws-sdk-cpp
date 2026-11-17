/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class FunctionStatus { NOT_SET, CREATING, AVAILABLE, REFERENCED, DELETING, DELETED };

namespace FunctionStatusMapper {
AWS_ELEMENTALINFERENCE_API FunctionStatus GetFunctionStatusForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForFunctionStatus(FunctionStatus value);
}  // namespace FunctionStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
