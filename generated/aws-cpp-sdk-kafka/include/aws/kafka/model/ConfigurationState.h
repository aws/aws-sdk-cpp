/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class ConfigurationState
  {
    NOT_SET,
    ACTIVE,
    DELETING,
    DELETE_FAILED
  };

namespace ConfigurationStateMapper
{
AWS_KAFKA_API ConfigurationState GetConfigurationStateForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForConfigurationState(ConfigurationState value);
} // namespace ConfigurationStateMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
