/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class Range
  {
    NOT_SET,
    NARROW,
    FULL,
    FULLPROTECT
  };

namespace RangeMapper
{
AWS_MEDIACONNECT_API Range GetRangeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRange(Range value);
} // namespace RangeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
