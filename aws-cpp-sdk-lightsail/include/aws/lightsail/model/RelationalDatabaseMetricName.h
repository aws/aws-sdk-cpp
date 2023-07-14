/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class RelationalDatabaseMetricName
  {
    NOT_SET,
    CPUUtilization,
    DatabaseConnections,
    DiskQueueDepth,
    FreeStorageSpace,
    NetworkReceiveThroughput,
    NetworkTransmitThroughput
  };

namespace RelationalDatabaseMetricNameMapper
{
AWS_LIGHTSAIL_API RelationalDatabaseMetricName GetRelationalDatabaseMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRelationalDatabaseMetricName(RelationalDatabaseMetricName value);
} // namespace RelationalDatabaseMetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
