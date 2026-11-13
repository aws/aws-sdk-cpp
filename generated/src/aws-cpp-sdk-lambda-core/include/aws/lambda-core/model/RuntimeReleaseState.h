/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class RuntimeReleaseState { NOT_SET, PREVIEW, GA, DEPRECATED };

namespace RuntimeReleaseStateMapper {
AWS_LAMBDACORE_API RuntimeReleaseState GetRuntimeReleaseStateForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForRuntimeReleaseState(RuntimeReleaseState value);
}  // namespace RuntimeReleaseStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
