/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/HostKernel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {
namespace HostKernelMapper {

static const int LINUX_KERNEL_4_HASH = HashingUtils::HashString("LINUX_KERNEL_4");
static const int LINUX_KERNEL_6_HASH = HashingUtils::HashString("LINUX_KERNEL_6");
static const int LINUX_KERNEL_LATEST_HASH = HashingUtils::HashString("LINUX_KERNEL_LATEST");

HostKernel GetHostKernelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINUX_KERNEL_4_HASH) {
    return HostKernel::LINUX_KERNEL_4;
  } else if (hashCode == LINUX_KERNEL_6_HASH) {
    return HostKernel::LINUX_KERNEL_6;
  } else if (hashCode == LINUX_KERNEL_LATEST_HASH) {
    return HostKernel::LINUX_KERNEL_LATEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HostKernel>(hashCode);
  }

  return HostKernel::NOT_SET;
}

Aws::String GetNameForHostKernel(HostKernel enumValue) {
  switch (enumValue) {
    case HostKernel::NOT_SET:
      return {};
    case HostKernel::LINUX_KERNEL_4:
      return "LINUX_KERNEL_4";
    case HostKernel::LINUX_KERNEL_6:
      return "LINUX_KERNEL_6";
    case HostKernel::LINUX_KERNEL_LATEST:
      return "LINUX_KERNEL_LATEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HostKernelMapper
}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
