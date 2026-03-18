/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedicalClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ComprehendMedical {

template <typename DerivedClient = ComprehendMedicalClient>
class ComprehendMedicalWaiter {
 public:
};
}  // namespace ComprehendMedical
}  // namespace Aws
