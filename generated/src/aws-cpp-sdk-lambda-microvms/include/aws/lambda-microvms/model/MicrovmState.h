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
enum class MicrovmState { NOT_SET, PENDING, RUNNING, SUSPENDING, SUSPENDED, TERMINATING, TERMINATED };

namespace MicrovmStateMapper {
AWS_LAMBDAMICROVMS_API MicrovmState GetMicrovmStateForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForMicrovmState(MicrovmState value);
}  // namespace MicrovmStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
