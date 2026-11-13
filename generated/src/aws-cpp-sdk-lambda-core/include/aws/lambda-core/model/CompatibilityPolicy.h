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
enum class CompatibilityPolicy { NOT_SET, Supported, NotSupported };

namespace CompatibilityPolicyMapper {
AWS_LAMBDACORE_API CompatibilityPolicy GetCompatibilityPolicyForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForCompatibilityPolicy(CompatibilityPolicy value);
}  // namespace CompatibilityPolicyMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
