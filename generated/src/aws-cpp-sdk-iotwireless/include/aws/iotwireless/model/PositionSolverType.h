/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class PositionSolverType
  {
    NOT_SET,
    GNSS
  };

namespace PositionSolverTypeMapper
{
AWS_IOTWIRELESS_API PositionSolverType GetPositionSolverTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositionSolverType(PositionSolverType value);
} // namespace PositionSolverTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
