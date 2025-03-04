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
  enum class HubNetworkMode
  {
    NOT_SET,
    STANDARD,
    NETWORK_WIDE_EXCLUSION
  };

namespace HubNetworkModeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API HubNetworkMode GetHubNetworkModeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForHubNetworkMode(HubNetworkMode value);
} // namespace HubNetworkModeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
