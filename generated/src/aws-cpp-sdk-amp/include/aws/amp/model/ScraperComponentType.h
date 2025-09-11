/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{
  enum class ScraperComponentType
  {
    NOT_SET,
    SERVICE_DISCOVERY,
    COLLECTOR,
    EXPORTER
  };

namespace ScraperComponentTypeMapper
{
AWS_PROMETHEUSSERVICE_API ScraperComponentType GetScraperComponentTypeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForScraperComponentType(ScraperComponentType value);
} // namespace ScraperComponentTypeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
