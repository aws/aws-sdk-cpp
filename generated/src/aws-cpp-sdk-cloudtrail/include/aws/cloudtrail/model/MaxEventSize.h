/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class MaxEventSize
  {
    NOT_SET,
    Standard,
    Large
  };

namespace MaxEventSizeMapper
{
AWS_CLOUDTRAIL_API MaxEventSize GetMaxEventSizeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForMaxEventSize(MaxEventSize value);
} // namespace MaxEventSizeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
