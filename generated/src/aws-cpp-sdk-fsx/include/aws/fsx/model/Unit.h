/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    DAYS
  };

namespace UnitMapper
{
AWS_FSX_API Unit GetUnitForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
