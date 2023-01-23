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
  enum class CurrencyCode
  {
    NOT_SET,
    USD
  };

namespace CurrencyCodeMapper
{
AWS_DEVICEFARM_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
} // namespace CurrencyCodeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
