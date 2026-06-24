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
enum class MicrovmImageVersionState { NOT_SET, PENDING, IN_PROGRESS, SUCCESSFUL, FAILED, DELETING, DELETED, DELETE_FAILED };

namespace MicrovmImageVersionStateMapper {
AWS_LAMBDAMICROVMS_API MicrovmImageVersionState GetMicrovmImageVersionStateForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForMicrovmImageVersionState(MicrovmImageVersionState value);
}  // namespace MicrovmImageVersionStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
