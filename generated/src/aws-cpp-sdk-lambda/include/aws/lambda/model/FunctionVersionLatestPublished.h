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
enum class FunctionVersionLatestPublished { NOT_SET, LATEST_PUBLISHED };

namespace FunctionVersionLatestPublishedMapper {
AWS_LAMBDA_API FunctionVersionLatestPublished GetFunctionVersionLatestPublishedForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForFunctionVersionLatestPublished(FunctionVersionLatestPublished value);
}  // namespace FunctionVersionLatestPublishedMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
