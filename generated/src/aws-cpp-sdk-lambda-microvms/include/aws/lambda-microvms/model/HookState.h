/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
enum class HookState { NOT_SET, DISABLED, ENABLED };

namespace HookStateMapper {
AWS_LAMBDAMICROVMS_API HookState GetHookStateForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForHookState(HookState value);
}  // namespace HookStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
