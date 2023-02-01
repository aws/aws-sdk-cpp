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
  enum class LogType
  {
    NOT_SET,
    OFF,
    ERROR_
  };

namespace LogTypeMapper
{
AWS_IOTFLEETWISE_API LogType GetLogTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
