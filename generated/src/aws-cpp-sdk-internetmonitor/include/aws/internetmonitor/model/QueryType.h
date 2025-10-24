﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>

namespace Aws {
namespace InternetMonitor {
namespace Model {
enum class QueryType {
  NOT_SET,
  MEASUREMENTS,
  TOP_LOCATIONS,
  TOP_LOCATION_DETAILS,
  OVERALL_TRAFFIC_SUGGESTIONS,
  OVERALL_TRAFFIC_SUGGESTIONS_DETAILS,
  ROUTING_SUGGESTIONS
};

namespace QueryTypeMapper {
AWS_INTERNETMONITOR_API QueryType GetQueryTypeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForQueryType(QueryType value);
}  // namespace QueryTypeMapper
}  // namespace Model
}  // namespace InternetMonitor
}  // namespace Aws
