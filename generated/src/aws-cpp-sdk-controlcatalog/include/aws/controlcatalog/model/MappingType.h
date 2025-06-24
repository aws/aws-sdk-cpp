/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{
  enum class MappingType
  {
    NOT_SET,
    FRAMEWORK,
    COMMON_CONTROL
  };

namespace MappingTypeMapper
{
AWS_CONTROLCATALOG_API MappingType GetMappingTypeForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForMappingType(MappingType value);
} // namespace MappingTypeMapper
} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
