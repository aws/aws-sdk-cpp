/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class IsolineEngineType
  {
    NOT_SET,
    Electric,
    InternalCombustion,
    PluginHybrid
  };

namespace IsolineEngineTypeMapper
{
AWS_GEOROUTES_API IsolineEngineType GetIsolineEngineTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineEngineType(IsolineEngineType value);
} // namespace IsolineEngineTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
