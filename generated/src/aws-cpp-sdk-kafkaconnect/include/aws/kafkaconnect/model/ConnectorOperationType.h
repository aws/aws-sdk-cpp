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
  enum class ConnectorOperationType
  {
    NOT_SET,
    UPDATE_WORKER_SETTING,
    UPDATE_CONNECTOR_CONFIGURATION,
    ISOLATE_CONNECTOR,
    RESTORE_CONNECTOR
  };

namespace ConnectorOperationTypeMapper
{
AWS_KAFKACONNECT_API ConnectorOperationType GetConnectorOperationTypeForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForConnectorOperationType(ConnectorOperationType value);
} // namespace ConnectorOperationTypeMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
