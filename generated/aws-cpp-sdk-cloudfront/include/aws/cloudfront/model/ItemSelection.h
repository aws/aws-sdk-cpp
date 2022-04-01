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
  enum class ItemSelection
  {
    NOT_SET,
    none,
    whitelist,
    all
  };

namespace ItemSelectionMapper
{
AWS_CLOUDFRONT_API ItemSelection GetItemSelectionForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForItemSelection(ItemSelection value);
} // namespace ItemSelectionMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
