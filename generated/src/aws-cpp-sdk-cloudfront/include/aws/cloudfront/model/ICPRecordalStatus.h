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
  enum class ICPRecordalStatus
  {
    NOT_SET,
    APPROVED,
    SUSPENDED,
    PENDING
  };

namespace ICPRecordalStatusMapper
{
AWS_CLOUDFRONT_API ICPRecordalStatus GetICPRecordalStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForICPRecordalStatus(ICPRecordalStatus value);
} // namespace ICPRecordalStatusMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
