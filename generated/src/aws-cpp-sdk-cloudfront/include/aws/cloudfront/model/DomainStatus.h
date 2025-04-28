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
  enum class DomainStatus
  {
    NOT_SET,
    active,
    inactive
  };

namespace DomainStatusMapper
{
AWS_CLOUDFRONT_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
