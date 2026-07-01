/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CodeBuild {
namespace Model {
enum class HostKernel { NOT_SET, LINUX_KERNEL_4, LINUX_KERNEL_6, LINUX_KERNEL_LATEST };

namespace HostKernelMapper {
AWS_CODEBUILD_API HostKernel GetHostKernelForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForHostKernel(HostKernel value);
}  // namespace HostKernelMapper
}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
