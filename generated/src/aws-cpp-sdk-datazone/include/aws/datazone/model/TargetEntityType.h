/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class TargetEntityType
  {
    NOT_SET,
    DOMAIN_UNIT,
    ENVIRONMENT_BLUEPRINT_CONFIGURATION,
    ENVIRONMENT_PROFILE,
    ASSET_TYPE
  };

namespace TargetEntityTypeMapper
{
AWS_DATAZONE_API TargetEntityType GetTargetEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTargetEntityType(TargetEntityType value);
} // namespace TargetEntityTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
