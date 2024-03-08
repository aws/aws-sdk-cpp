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
  enum class WorkerConfigurationState
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace WorkerConfigurationStateMapper
{
AWS_KAFKACONNECT_API WorkerConfigurationState GetWorkerConfigurationStateForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForWorkerConfigurationState(WorkerConfigurationState value);
} // namespace WorkerConfigurationStateMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
