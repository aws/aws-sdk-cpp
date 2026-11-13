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
enum class RuntimeArchitecture { NOT_SET, x86_64, arm64 };

namespace RuntimeArchitectureMapper {
AWS_LAMBDACORE_API RuntimeArchitecture GetRuntimeArchitectureForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForRuntimeArchitecture(RuntimeArchitecture value);
}  // namespace RuntimeArchitectureMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
