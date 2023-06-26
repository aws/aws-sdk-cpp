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
  enum class OriginAccessControlSigningBehaviors
  {
    NOT_SET,
    never,
    always,
    no_override
  };

namespace OriginAccessControlSigningBehaviorsMapper
{
AWS_CLOUDFRONT_API OriginAccessControlSigningBehaviors GetOriginAccessControlSigningBehaviorsForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginAccessControlSigningBehaviors(OriginAccessControlSigningBehaviors value);
} // namespace OriginAccessControlSigningBehaviorsMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
