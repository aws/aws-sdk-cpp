/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/CompatibilityPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace CompatibilityPolicyMapper {

static const int Supported_HASH = HashingUtils::HashString("Supported");
static const int NotSupported_HASH = HashingUtils::HashString("NotSupported");

CompatibilityPolicy GetCompatibilityPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Supported_HASH) {
    return CompatibilityPolicy::Supported;
  } else if (hashCode == NotSupported_HASH) {
    return CompatibilityPolicy::NotSupported;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CompatibilityPolicy>(hashCode);
  }

  return CompatibilityPolicy::NOT_SET;
}

Aws::String GetNameForCompatibilityPolicy(CompatibilityPolicy enumValue) {
  switch (enumValue) {
    case CompatibilityPolicy::NOT_SET:
      return {};
    case CompatibilityPolicy::Supported:
      return "Supported";
    case CompatibilityPolicy::NotSupported:
      return "NotSupported";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CompatibilityPolicyMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
