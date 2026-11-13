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
enum class RuntimeAliasState { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, PENDING_DELETION };

namespace RuntimeAliasStateMapper {
AWS_LAMBDACORE_API RuntimeAliasState GetRuntimeAliasStateForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForRuntimeAliasState(RuntimeAliasState value);
}  // namespace RuntimeAliasStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
