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
  enum class CustomPluginState
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE,
    UPDATING,
    UPDATE_FAILED,
    DELETING
  };

namespace CustomPluginStateMapper
{
AWS_KAFKACONNECT_API CustomPluginState GetCustomPluginStateForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForCustomPluginState(CustomPluginState value);
} // namespace CustomPluginStateMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
