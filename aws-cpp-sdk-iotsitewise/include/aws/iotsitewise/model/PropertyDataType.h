/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class PropertyDataType
  {
    NOT_SET,
    STRING,
    INTEGER,
    DOUBLE,
    BOOLEAN
  };

namespace PropertyDataTypeMapper
{
AWS_IOTSITEWISE_API PropertyDataType GetPropertyDataTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPropertyDataType(PropertyDataType value);
} // namespace PropertyDataTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
