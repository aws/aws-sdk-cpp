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
  enum class BehaviorEnum
  {
    NOT_SET,
    dont_cache,
    cache
  };

namespace BehaviorEnumMapper
{
AWS_LIGHTSAIL_API BehaviorEnum GetBehaviorEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForBehaviorEnum(BehaviorEnum value);
} // namespace BehaviorEnumMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
