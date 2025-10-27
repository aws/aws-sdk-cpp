/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

namespace Aws {
namespace KafkaConnect {
namespace Model {
enum class ConnectorOperationState {
  NOT_SET,
  PENDING,
  UPDATE_IN_PROGRESS,
  UPDATE_COMPLETE,
  UPDATE_FAILED,
  ROLLBACK_IN_PROGRESS,
  ROLLBACK_FAILED,
  ROLLBACK_COMPLETE
};

namespace ConnectorOperationStateMapper {
AWS_KAFKACONNECT_API ConnectorOperationState GetConnectorOperationStateForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForConnectorOperationState(ConnectorOperationState value);
}  // namespace ConnectorOperationStateMapper
}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
