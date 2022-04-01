/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class SegmentType
  {
    NOT_SET,
    DIMENSIONAL,
    IMPORT
  };

namespace SegmentTypeMapper
{
AWS_PINPOINT_API SegmentType GetSegmentTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForSegmentType(SegmentType value);
} // namespace SegmentTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
