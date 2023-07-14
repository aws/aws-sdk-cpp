/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class BucketLocationConstraint
  {
    NOT_SET,
    EU,
    eu_west_1,
    us_west_1,
    us_west_2,
    ap_south_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_northeast_1,
    sa_east_1,
    cn_north_1,
    eu_central_1
  };

namespace BucketLocationConstraintMapper
{
AWS_S3CONTROL_API BucketLocationConstraint GetBucketLocationConstraintForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForBucketLocationConstraint(BucketLocationConstraint value);
} // namespace BucketLocationConstraintMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
