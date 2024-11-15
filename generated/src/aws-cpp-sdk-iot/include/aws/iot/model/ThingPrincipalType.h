/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ThingPrincipalType
  {
    NOT_SET,
    EXCLUSIVE_THING,
    NON_EXCLUSIVE_THING
  };

namespace ThingPrincipalTypeMapper
{
AWS_IOT_API ThingPrincipalType GetThingPrincipalTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForThingPrincipalType(ThingPrincipalType value);
} // namespace ThingPrincipalTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
