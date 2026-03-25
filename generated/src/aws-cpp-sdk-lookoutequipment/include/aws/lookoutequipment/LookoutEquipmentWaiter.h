/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lookoutequipment/LookoutEquipmentClient.h>

#include <algorithm>

namespace Aws {
namespace LookoutEquipment {

template <typename DerivedClient = LookoutEquipmentClient>
class LookoutEquipmentWaiter {
 public:
};
}  // namespace LookoutEquipment
}  // namespace Aws
