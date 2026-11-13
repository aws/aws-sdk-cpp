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
enum class RuntimeVersionState { NOT_SET, CREATING, ACTIVE, FAILED, DELETING, PENDING_DELETION };

namespace RuntimeVersionStateMapper {
AWS_LAMBDACORE_API RuntimeVersionState GetRuntimeVersionStateForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForRuntimeVersionState(RuntimeVersionState value);
}  // namespace RuntimeVersionStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
