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
  enum class StorageMaximumSizeUnit
  {
    NOT_SET,
    MB,
    GB,
    TB
  };

namespace StorageMaximumSizeUnitMapper
{
AWS_IOTFLEETWISE_API StorageMaximumSizeUnit GetStorageMaximumSizeUnitForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForStorageMaximumSizeUnit(StorageMaximumSizeUnit value);
} // namespace StorageMaximumSizeUnitMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
