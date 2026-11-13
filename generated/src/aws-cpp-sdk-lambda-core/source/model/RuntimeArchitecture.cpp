/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/RuntimeArchitecture.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace RuntimeArchitectureMapper {

static const int x86_64_HASH = HashingUtils::HashString("x86_64");
static const int arm64_HASH = HashingUtils::HashString("arm64");

RuntimeArchitecture GetRuntimeArchitectureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == x86_64_HASH) {
    return RuntimeArchitecture::x86_64;
  } else if (hashCode == arm64_HASH) {
    return RuntimeArchitecture::arm64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeArchitecture>(hashCode);
  }

  return RuntimeArchitecture::NOT_SET;
}

Aws::String GetNameForRuntimeArchitecture(RuntimeArchitecture enumValue) {
  switch (enumValue) {
    case RuntimeArchitecture::NOT_SET:
      return {};
    case RuntimeArchitecture::x86_64:
      return "x86_64";
    case RuntimeArchitecture::arm64:
      return "arm64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeArchitectureMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
