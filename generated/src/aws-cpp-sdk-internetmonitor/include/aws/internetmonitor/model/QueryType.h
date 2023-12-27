/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class QueryType
  {
    NOT_SET,
    MEASUREMENTS,
    TOP_LOCATIONS,
    TOP_LOCATION_DETAILS
  };

namespace QueryTypeMapper
{
AWS_INTERNETMONITOR_API QueryType GetQueryTypeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForQueryType(QueryType value);
} // namespace QueryTypeMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
