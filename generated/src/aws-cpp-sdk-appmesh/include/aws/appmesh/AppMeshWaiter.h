/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMeshClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppMesh {

template <typename DerivedClient = AppMeshClient>
class AppMeshWaiter {
 public:
};
}  // namespace AppMesh
}  // namespace Aws
