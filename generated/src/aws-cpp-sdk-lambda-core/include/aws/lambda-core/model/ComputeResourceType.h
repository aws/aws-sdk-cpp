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
enum class ComputeResourceType { NOT_SET, MicroVm };

namespace ComputeResourceTypeMapper {
AWS_LAMBDACORE_API ComputeResourceType GetComputeResourceTypeForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForComputeResourceType(ComputeResourceType value);
}  // namespace ComputeResourceTypeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
