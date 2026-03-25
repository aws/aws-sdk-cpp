/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeBuild {

template <typename DerivedClient = CodeBuildClient>
class CodeBuildWaiter {
 public:
};
}  // namespace CodeBuild
}  // namespace Aws
