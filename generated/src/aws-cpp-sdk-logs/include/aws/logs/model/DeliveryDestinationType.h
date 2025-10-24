﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
enum class DeliveryDestinationType { NOT_SET, S3, CWL, FH, XRAY };

namespace DeliveryDestinationTypeMapper {
AWS_CLOUDWATCHLOGS_API DeliveryDestinationType GetDeliveryDestinationTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForDeliveryDestinationType(DeliveryDestinationType value);
}  // namespace DeliveryDestinationTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
