/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lex-models/LexModelBuildingServiceClient.h>

#include <algorithm>

namespace Aws {
namespace LexModelBuildingService {

template <typename DerivedClient = LexModelBuildingServiceClient>
class LexModelBuildingServiceWaiter {
 public:
};
}  // namespace LexModelBuildingService
}  // namespace Aws
