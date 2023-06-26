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
  enum class Method
  {
    NOT_SET,
    GET_,
    HEAD,
    POST,
    PUT,
    PATCH,
    OPTIONS,
    DELETE_
  };

namespace MethodMapper
{
AWS_CLOUDFRONT_API Method GetMethodForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForMethod(Method value);
} // namespace MethodMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
