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
enum class NetworkType { NOT_SET, IPV4, DUAL };

namespace NetworkTypeMapper {
AWS_KAFKA_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForNetworkType(NetworkType value);
}  // namespace NetworkTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
