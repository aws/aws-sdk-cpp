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
enum class PropagateTagsMode { NOT_SET, None, Explicit };

namespace PropagateTagsModeMapper {
AWS_LAMBDA_API PropagateTagsMode GetPropagateTagsModeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForPropagateTagsMode(PropagateTagsMode value);
}  // namespace PropagateTagsModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
