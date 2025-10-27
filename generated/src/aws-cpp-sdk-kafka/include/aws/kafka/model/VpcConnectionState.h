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
enum class VpcConnectionState { NOT_SET, CREATING, AVAILABLE, INACTIVE, DEACTIVATING, DELETING, FAILED, REJECTED, REJECTING };

namespace VpcConnectionStateMapper {
AWS_KAFKA_API VpcConnectionState GetVpcConnectionStateForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForVpcConnectionState(VpcConnectionState value);
}  // namespace VpcConnectionStateMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
