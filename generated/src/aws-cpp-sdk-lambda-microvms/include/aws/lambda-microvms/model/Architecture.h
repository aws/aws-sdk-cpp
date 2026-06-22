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
enum class Architecture { NOT_SET, ARM_64 };

namespace ArchitectureMapper {
AWS_LAMBDAMICROVMS_API Architecture GetArchitectureForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForArchitecture(Architecture value);
}  // namespace ArchitectureMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
