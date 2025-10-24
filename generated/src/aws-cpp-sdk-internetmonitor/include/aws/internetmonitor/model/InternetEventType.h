/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>

namespace Aws {
namespace InternetMonitor {
namespace Model {
enum class InternetEventType { NOT_SET, AVAILABILITY, PERFORMANCE };

namespace InternetEventTypeMapper {
AWS_INTERNETMONITOR_API InternetEventType GetInternetEventTypeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForInternetEventType(InternetEventType value);
}  // namespace InternetEventTypeMapper
}  // namespace Model
}  // namespace InternetMonitor
}  // namespace Aws
