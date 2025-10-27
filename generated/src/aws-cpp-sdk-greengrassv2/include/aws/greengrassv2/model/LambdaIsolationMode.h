/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws {
namespace GreengrassV2 {
namespace Model {
enum class LambdaIsolationMode { NOT_SET, GreengrassContainer, NoContainer };

namespace LambdaIsolationModeMapper {
AWS_GREENGRASSV2_API LambdaIsolationMode GetLambdaIsolationModeForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForLambdaIsolationMode(LambdaIsolationMode value);
}  // namespace LambdaIsolationModeMapper
}  // namespace Model
}  // namespace GreengrassV2
}  // namespace Aws
