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
  enum class OfferingTransactionType
  {
    NOT_SET,
    PURCHASE,
    RENEW,
    SYSTEM
  };

namespace OfferingTransactionTypeMapper
{
AWS_DEVICEFARM_API OfferingTransactionType GetOfferingTransactionTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForOfferingTransactionType(OfferingTransactionType value);
} // namespace OfferingTransactionTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
