/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{
  enum class S3BucketRegion
  {
    NOT_SET,
    ap_east_1,
    me_south_1,
    eu_south_1,
    af_south_1
  };

namespace S3BucketRegionMapper
{
AWS_APPLICATIONCOSTPROFILER_API S3BucketRegion GetS3BucketRegionForName(const Aws::String& name);

AWS_APPLICATIONCOSTPROFILER_API Aws::String GetNameForS3BucketRegion(S3BucketRegion value);
} // namespace S3BucketRegionMapper
} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
