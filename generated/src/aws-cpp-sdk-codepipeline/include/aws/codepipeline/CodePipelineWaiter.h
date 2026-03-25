/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodePipeline {

template <typename DerivedClient = CodePipelineClient>
class CodePipelineWaiter {
 public:
};
}  // namespace CodePipeline
}  // namespace Aws
