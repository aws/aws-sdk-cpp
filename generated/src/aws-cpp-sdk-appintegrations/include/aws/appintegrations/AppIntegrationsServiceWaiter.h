/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppIntegrationsService {

template <typename DerivedClient = AppIntegrationsServiceClient>
class AppIntegrationsServiceWaiter {
 public:
};
}  // namespace AppIntegrationsService
}  // namespace Aws
