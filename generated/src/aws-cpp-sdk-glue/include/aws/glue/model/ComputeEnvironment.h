/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ComputeEnvironment { NOT_SET, SPARK, ATHENA, PYTHON };

namespace ComputeEnvironmentMapper {
AWS_GLUE_API ComputeEnvironment GetComputeEnvironmentForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForComputeEnvironment(ComputeEnvironment value);
}  // namespace ComputeEnvironmentMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
