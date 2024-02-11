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
  enum class DataFormat
  {
    NOT_SET,
    JSON,
    PARQUET
  };

namespace DataFormatMapper
{
AWS_IOTFLEETWISE_API DataFormat GetDataFormatForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForDataFormat(DataFormat value);
} // namespace DataFormatMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
