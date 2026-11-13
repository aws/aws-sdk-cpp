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
enum class RuntimeState { NOT_SET, ACTIVE, PENDING_DELETION, DELETING, FAILED };

namespace RuntimeStateMapper {
AWS_LAMBDACORE_API RuntimeState GetRuntimeStateForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForRuntimeState(RuntimeState value);
}  // namespace RuntimeStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
