/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AmplifyUIBuilder {

template <typename DerivedClient = AmplifyUIBuilderClient>
class AmplifyUIBuilderWaiter {
 public:
};
}  // namespace AmplifyUIBuilder
}  // namespace Aws
