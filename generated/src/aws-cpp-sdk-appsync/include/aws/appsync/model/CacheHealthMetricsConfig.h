﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppSync {
namespace Model {
enum class CacheHealthMetricsConfig { NOT_SET, ENABLED, DISABLED };

namespace CacheHealthMetricsConfigMapper {
AWS_APPSYNC_API CacheHealthMetricsConfig GetCacheHealthMetricsConfigForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForCacheHealthMetricsConfig(CacheHealthMetricsConfig value);
}  // namespace CacheHealthMetricsConfigMapper
}  // namespace Model
}  // namespace AppSync
}  // namespace Aws
