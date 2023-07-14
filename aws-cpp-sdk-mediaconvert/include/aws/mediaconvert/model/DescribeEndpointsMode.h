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
  enum class DescribeEndpointsMode
  {
    NOT_SET,
    DEFAULT,
    GET_ONLY
  };

namespace DescribeEndpointsModeMapper
{
AWS_MEDIACONVERT_API DescribeEndpointsMode GetDescribeEndpointsModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDescribeEndpointsMode(DescribeEndpointsMode value);
} // namespace DescribeEndpointsModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
