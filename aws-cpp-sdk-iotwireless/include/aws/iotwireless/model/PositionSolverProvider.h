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
  enum class PositionSolverProvider
  {
    NOT_SET,
    Semtech
  };

namespace PositionSolverProviderMapper
{
AWS_IOTWIRELESS_API PositionSolverProvider GetPositionSolverProviderForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPositionSolverProvider(PositionSolverProvider value);
} // namespace PositionSolverProviderMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
