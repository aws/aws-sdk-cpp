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
  enum class DiscoveryModification
  {
    NOT_SET,
    DISCOVERED,
    UPDATED,
    NO_CHANGE
  };

namespace DiscoveryModificationMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API DiscoveryModification GetDiscoveryModificationForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDiscoveryModification(DiscoveryModification value);
} // namespace DiscoveryModificationMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
