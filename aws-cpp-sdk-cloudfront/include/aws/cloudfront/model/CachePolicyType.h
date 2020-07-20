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
  enum class CachePolicyType
  {
    NOT_SET,
    managed,
    custom
  };

namespace CachePolicyTypeMapper
{
AWS_CLOUDFRONT_API CachePolicyType GetCachePolicyTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCachePolicyType(CachePolicyType value);
} // namespace CachePolicyTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
