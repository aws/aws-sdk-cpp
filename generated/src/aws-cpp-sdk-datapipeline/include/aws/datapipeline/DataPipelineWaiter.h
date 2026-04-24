/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/datapipeline/DataPipelineClient.h>

#include <algorithm>

namespace Aws {
namespace DataPipeline {

template <typename DerivedClient = DataPipelineClient>
class DataPipelineWaiter {
 public:
};
}  // namespace DataPipeline
}  // namespace Aws
