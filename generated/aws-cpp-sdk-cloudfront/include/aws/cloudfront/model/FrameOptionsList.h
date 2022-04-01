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
  enum class FrameOptionsList
  {
    NOT_SET,
    DENY,
    SAMEORIGIN
  };

namespace FrameOptionsListMapper
{
AWS_CLOUDFRONT_API FrameOptionsList GetFrameOptionsListForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForFrameOptionsList(FrameOptionsList value);
} // namespace FrameOptionsListMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
