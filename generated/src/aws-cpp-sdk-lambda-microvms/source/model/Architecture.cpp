/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/Architecture.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace ArchitectureMapper {

static const int ARM_64_HASH = HashingUtils::HashString("ARM_64");

Architecture GetArchitectureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ARM_64_HASH) {
    return Architecture::ARM_64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Architecture>(hashCode);
  }

  return Architecture::NOT_SET;
}

Aws::String GetNameForArchitecture(Architecture enumValue) {
  switch (enumValue) {
    case Architecture::NOT_SET:
      return {};
    case Architecture::ARM_64:
      return "ARM_64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArchitectureMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
