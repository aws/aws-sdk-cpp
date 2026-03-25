/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/databrew/GlueDataBrewClient.h>

#include <algorithm>

namespace Aws {
namespace GlueDataBrew {

template <typename DerivedClient = GlueDataBrewClient>
class GlueDataBrewWaiter {
 public:
};
}  // namespace GlueDataBrew
}  // namespace Aws
