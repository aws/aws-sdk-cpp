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
  enum class Domain
  {
    NOT_SET,
    RETAIL,
    CUSTOM,
    INVENTORY_PLANNING,
    EC2_CAPACITY,
    WORK_FORCE,
    WEB_TRAFFIC,
    METRICS
  };

namespace DomainMapper
{
AWS_FORECASTSERVICE_API Domain GetDomainForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForDomain(Domain value);
} // namespace DomainMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
