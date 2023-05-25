/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ForecastService
{
namespace Model
{
  enum class ImportMode
  {
    NOT_SET,
    FULL,
    INCREMENTAL
  };

namespace ImportModeMapper
{
AWS_FORECASTSERVICE_API ImportMode GetImportModeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForImportMode(ImportMode value);
} // namespace ImportModeMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
