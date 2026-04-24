/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/docdb-elastic/DocDBElasticClient.h>

#include <algorithm>

namespace Aws {
namespace DocDBElastic {

template <typename DerivedClient = DocDBElasticClient>
class DocDBElasticWaiter {
 public:
};
}  // namespace DocDBElastic
}  // namespace Aws
