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
  enum class OriginGroupSelectionCriteria
  {
    NOT_SET,
    default_,
    media_quality_based
  };

namespace OriginGroupSelectionCriteriaMapper
{
AWS_CLOUDFRONT_API OriginGroupSelectionCriteria GetOriginGroupSelectionCriteriaForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginGroupSelectionCriteria(OriginGroupSelectionCriteria value);
} // namespace OriginGroupSelectionCriteriaMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
