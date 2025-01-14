/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{
  enum class ConnectorOperationStepState
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace ConnectorOperationStepStateMapper
{
AWS_KAFKACONNECT_API ConnectorOperationStepState GetConnectorOperationStepStateForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForConnectorOperationStepState(ConnectorOperationStepState value);
} // namespace ConnectorOperationStepStateMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
