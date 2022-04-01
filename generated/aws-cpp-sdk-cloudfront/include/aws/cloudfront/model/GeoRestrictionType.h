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
  enum class GeoRestrictionType
  {
    NOT_SET,
    blacklist,
    whitelist,
    none
  };

namespace GeoRestrictionTypeMapper
{
AWS_CLOUDFRONT_API GeoRestrictionType GetGeoRestrictionTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForGeoRestrictionType(GeoRestrictionType value);
} // namespace GeoRestrictionTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
