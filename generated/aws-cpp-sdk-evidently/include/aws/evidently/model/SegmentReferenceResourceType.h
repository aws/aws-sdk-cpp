/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class SegmentReferenceResourceType
  {
    NOT_SET,
    EXPERIMENT,
    LAUNCH
  };

namespace SegmentReferenceResourceTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API SegmentReferenceResourceType GetSegmentReferenceResourceTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForSegmentReferenceResourceType(SegmentReferenceResourceType value);
} // namespace SegmentReferenceResourceTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
