/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class ColumnType
  {
    NOT_SET,
    NODE,
    EDGE,
    VALUE
  };

namespace ColumnTypeMapper
{
AWS_IOTTWINMAKER_API ColumnType GetColumnTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForColumnType(ColumnType value);
} // namespace ColumnTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
