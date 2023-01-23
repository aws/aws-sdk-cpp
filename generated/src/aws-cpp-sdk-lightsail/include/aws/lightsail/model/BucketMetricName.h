/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class BucketMetricName
  {
    NOT_SET,
    BucketSizeBytes,
    NumberOfObjects
  };

namespace BucketMetricNameMapper
{
AWS_LIGHTSAIL_API BucketMetricName GetBucketMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForBucketMetricName(BucketMetricName value);
} // namespace BucketMetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
