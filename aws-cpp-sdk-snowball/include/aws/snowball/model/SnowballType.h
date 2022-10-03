/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class SnowballType
  {
    NOT_SET,
    STANDARD,
    EDGE,
    EDGE_C,
    EDGE_CG,
    EDGE_S,
    SNC1_HDD,
    SNC1_SSD,
    V3_5C
  };

namespace SnowballTypeMapper
{
AWS_SNOWBALL_API SnowballType GetSnowballTypeForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForSnowballType(SnowballType value);
} // namespace SnowballTypeMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
