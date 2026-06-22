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
enum class BuildState { NOT_SET, PENDING, IN_PROGRESS, SUCCESSFUL, FAILED };

namespace BuildStateMapper {
AWS_LAMBDAMICROVMS_API BuildState GetBuildStateForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForBuildState(BuildState value);
}  // namespace BuildStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
