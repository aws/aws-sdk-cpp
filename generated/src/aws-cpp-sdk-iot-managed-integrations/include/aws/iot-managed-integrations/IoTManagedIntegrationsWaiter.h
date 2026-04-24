/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsClient.h>

#include <algorithm>

namespace Aws {
namespace IoTManagedIntegrations {

template <typename DerivedClient = IoTManagedIntegrationsClient>
class IoTManagedIntegrationsWaiter {
 public:
};
}  // namespace IoTManagedIntegrations
}  // namespace Aws
