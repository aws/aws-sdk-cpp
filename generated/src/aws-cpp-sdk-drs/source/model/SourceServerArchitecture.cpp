/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/SourceServerArchitecture.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace SourceServerArchitectureMapper {

static const int x86_64_HASH = HashingUtils::HashString("x86_64");
static const int arm64_HASH = HashingUtils::HashString("arm64");

SourceServerArchitecture GetSourceServerArchitectureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == x86_64_HASH) {
    return SourceServerArchitecture::x86_64;
  } else if (hashCode == arm64_HASH) {
    return SourceServerArchitecture::arm64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceServerArchitecture>(hashCode);
  }

  return SourceServerArchitecture::NOT_SET;
}

Aws::String GetNameForSourceServerArchitecture(SourceServerArchitecture enumValue) {
  switch (enumValue) {
    case SourceServerArchitecture::NOT_SET:
      return {};
    case SourceServerArchitecture::x86_64:
      return "x86_64";
    case SourceServerArchitecture::arm64:
      return "arm64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceServerArchitectureMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
