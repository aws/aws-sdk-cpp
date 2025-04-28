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
  enum class CustomizationActionType
  {
    NOT_SET,
    override,
    disable
  };

namespace CustomizationActionTypeMapper
{
AWS_CLOUDFRONT_API CustomizationActionType GetCustomizationActionTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCustomizationActionType(CustomizationActionType value);
} // namespace CustomizationActionTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
