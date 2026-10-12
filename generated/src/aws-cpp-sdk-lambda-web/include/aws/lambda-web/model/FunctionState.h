/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {
enum class FunctionState { NOT_SET, Pending, Active, Failed, Deleting };

namespace FunctionStateMapper {
AWS_LAMBDAWEB_API FunctionState GetFunctionStateForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForFunctionState(FunctionState value);
}  // namespace FunctionStateMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
