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
  enum class SnowballCapacity
  {
    NOT_SET,
    T50,
    T80,
    T100,
    T42,
    T98,
    T8,
    T14,
    NoPreference,
    T32
  };

namespace SnowballCapacityMapper
{
AWS_SNOWBALL_API SnowballCapacity GetSnowballCapacityForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForSnowballCapacity(SnowballCapacity value);
} // namespace SnowballCapacityMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
