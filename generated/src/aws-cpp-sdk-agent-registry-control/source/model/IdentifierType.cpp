/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/IdentifierType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace IdentifierTypeMapper {

static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");

IdentifierType GetIdentifierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOMAIN__HASH) {
    return IdentifierType::DOMAIN_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdentifierType>(hashCode);
  }

  return IdentifierType::NOT_SET;
}

Aws::String GetNameForIdentifierType(IdentifierType enumValue) {
  switch (enumValue) {
    case IdentifierType::NOT_SET:
      return {};
    case IdentifierType::DOMAIN_:
      return "DOMAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdentifierTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
