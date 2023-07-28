/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class FunctionRuntime
  {
    NOT_SET,
    cloudfront_js_1_0,
    cloudfront_js_2_0
  };

namespace FunctionRuntimeMapper
{
AWS_CLOUDFRONT_API FunctionRuntime GetFunctionRuntimeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForFunctionRuntime(FunctionRuntime value);
} // namespace FunctionRuntimeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
