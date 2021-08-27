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
  enum class DimensionType
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE
  };

namespace DimensionTypeMapper
{
AWS_PINPOINT_API DimensionType GetDimensionTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForDimensionType(DimensionType value);
} // namespace DimensionTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
