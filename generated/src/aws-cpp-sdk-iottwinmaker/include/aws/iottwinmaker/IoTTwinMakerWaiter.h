/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/iottwinmaker/IoTTwinMakerClient.h>

#include <algorithm>

namespace Aws {
namespace IoTTwinMaker {

template <typename DerivedClient = IoTTwinMakerClient>
class IoTTwinMakerWaiter {
 public:
};
}  // namespace IoTTwinMaker
}  // namespace Aws
