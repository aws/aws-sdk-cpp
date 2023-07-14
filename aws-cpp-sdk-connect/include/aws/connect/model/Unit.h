/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    SECONDS,
    COUNT,
    PERCENT
  };

namespace UnitMapper
{
AWS_CONNECT_API Unit GetUnitForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
