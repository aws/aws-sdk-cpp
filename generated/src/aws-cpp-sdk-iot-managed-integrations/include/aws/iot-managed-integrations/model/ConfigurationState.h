/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class ConfigurationState
  {
    NOT_SET,
    ENABLED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED
  };

namespace ConfigurationStateMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API ConfigurationState GetConfigurationStateForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForConfigurationState(ConfigurationState value);
} // namespace ConfigurationStateMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
