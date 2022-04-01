/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class OfferingType
  {
    NOT_SET,
    RECURRING
  };

namespace OfferingTypeMapper
{
AWS_DEVICEFARM_API OfferingType GetOfferingTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForOfferingType(OfferingType value);
} // namespace OfferingTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
