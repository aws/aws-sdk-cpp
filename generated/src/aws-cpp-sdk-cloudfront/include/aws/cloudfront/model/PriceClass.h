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
  enum class PriceClass
  {
    NOT_SET,
    PriceClass_100,
    PriceClass_200,
    PriceClass_All
  };

namespace PriceClassMapper
{
AWS_CLOUDFRONT_API PriceClass GetPriceClassForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForPriceClass(PriceClass value);
} // namespace PriceClassMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
