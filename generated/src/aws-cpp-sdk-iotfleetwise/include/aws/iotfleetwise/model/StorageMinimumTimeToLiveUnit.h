/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class StorageMinimumTimeToLiveUnit
  {
    NOT_SET,
    HOURS,
    DAYS,
    WEEKS
  };

namespace StorageMinimumTimeToLiveUnitMapper
{
AWS_IOTFLEETWISE_API StorageMinimumTimeToLiveUnit GetStorageMinimumTimeToLiveUnitForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForStorageMinimumTimeToLiveUnit(StorageMinimumTimeToLiveUnit value);
} // namespace StorageMinimumTimeToLiveUnitMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
