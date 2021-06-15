/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class FormatType
  {
    NOT_SET,
    CSV,
    JSON,
    PARQUET,
    XML
  };

namespace FormatTypeMapper
{
AWS_FINSPACEDATA_API FormatType GetFormatTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForFormatType(FormatType value);
} // namespace FormatTypeMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
