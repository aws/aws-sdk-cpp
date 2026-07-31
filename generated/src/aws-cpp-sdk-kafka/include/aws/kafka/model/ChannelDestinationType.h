/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class ChannelDestinationType { NOT_SET, ICEBERG, S3 };

namespace ChannelDestinationTypeMapper {
AWS_KAFKA_API ChannelDestinationType GetChannelDestinationTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForChannelDestinationType(ChannelDestinationType value);
}  // namespace ChannelDestinationTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
