/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class BillingTagsSource
  {
    NOT_SET,
    QUEUE,
    PRESET,
    JOB_TEMPLATE,
    JOB
  };

namespace BillingTagsSourceMapper
{
AWS_MEDIACONVERT_API BillingTagsSource GetBillingTagsSourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBillingTagsSource(BillingTagsSource value);
} // namespace BillingTagsSourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
