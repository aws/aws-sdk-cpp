/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class FunctionUrlAuthType { NOT_SET, NONE, AWS_IAM };

namespace FunctionUrlAuthTypeMapper {
AWS_LAMBDA_API FunctionUrlAuthType GetFunctionUrlAuthTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForFunctionUrlAuthType(FunctionUrlAuthType value);
}  // namespace FunctionUrlAuthTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
