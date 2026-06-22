/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/Capability.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace CapabilityMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");

Capability GetCapabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return Capability::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Capability>(hashCode);
  }

  return Capability::NOT_SET;
}

Aws::String GetNameForCapability(Capability enumValue) {
  switch (enumValue) {
    case Capability::NOT_SET:
      return {};
    case Capability::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
