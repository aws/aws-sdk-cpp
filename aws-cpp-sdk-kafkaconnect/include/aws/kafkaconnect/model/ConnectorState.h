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
  enum class ConnectorState
  {
    NOT_SET,
    RUNNING,
    CREATING,
    UPDATING,
    DELETING,
    FAILED
  };

namespace ConnectorStateMapper
{
AWS_KAFKACONNECT_API ConnectorState GetConnectorStateForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForConnectorState(ConnectorState value);
} // namespace ConnectorStateMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
