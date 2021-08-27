/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class PreloadDataType
  {
    NOT_SET,
    SYNTHEA
  };

namespace PreloadDataTypeMapper
{
AWS_HEALTHLAKE_API PreloadDataType GetPreloadDataTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForPreloadDataType(PreloadDataType value);
} // namespace PreloadDataTypeMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
