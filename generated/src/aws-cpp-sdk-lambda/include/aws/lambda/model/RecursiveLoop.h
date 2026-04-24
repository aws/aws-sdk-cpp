/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class RecursiveLoop { NOT_SET, Allow, Terminate };

namespace RecursiveLoopMapper {
AWS_LAMBDA_API RecursiveLoop GetRecursiveLoopForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForRecursiveLoop(RecursiveLoop value);
}  // namespace RecursiveLoopMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
