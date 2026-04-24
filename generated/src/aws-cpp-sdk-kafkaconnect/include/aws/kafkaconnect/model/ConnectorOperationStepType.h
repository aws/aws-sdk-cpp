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
enum class ConnectorOperationStepType {
  NOT_SET,
  INITIALIZE_UPDATE,
  FINALIZE_UPDATE,
  UPDATE_WORKER_SETTING,
  UPDATE_CONNECTOR_CONFIGURATION,
  VALIDATE_UPDATE
};

namespace ConnectorOperationStepTypeMapper {
AWS_KAFKACONNECT_API ConnectorOperationStepType GetConnectorOperationStepTypeForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForConnectorOperationStepType(ConnectorOperationStepType value);
}  // namespace ConnectorOperationStepTypeMapper
}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
