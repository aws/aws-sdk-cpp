/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class GrowthType
  {
    NOT_SET,
    LINEAR,
    EXPONENTIAL
  };

namespace GrowthTypeMapper
{
AWS_APPCONFIG_API GrowthType GetGrowthTypeForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForGrowthType(GrowthType value);
} // namespace GrowthTypeMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
