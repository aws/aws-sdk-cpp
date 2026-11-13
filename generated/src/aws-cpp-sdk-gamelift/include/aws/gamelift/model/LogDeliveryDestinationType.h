/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class LogDeliveryDestinationType { NOT_SET, CLOUDWATCH, S3, FIREHOSE };

namespace LogDeliveryDestinationTypeMapper {
AWS_GAMELIFT_API LogDeliveryDestinationType GetLogDeliveryDestinationTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForLogDeliveryDestinationType(LogDeliveryDestinationType value);
}  // namespace LogDeliveryDestinationTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
