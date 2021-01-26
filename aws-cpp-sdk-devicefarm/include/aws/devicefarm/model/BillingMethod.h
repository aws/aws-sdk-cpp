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
  enum class BillingMethod
  {
    NOT_SET,
    METERED,
    UNMETERED
  };

namespace BillingMethodMapper
{
AWS_DEVICEFARM_API BillingMethod GetBillingMethodForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForBillingMethod(BillingMethod value);
} // namespace BillingMethodMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
