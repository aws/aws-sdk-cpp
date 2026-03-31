/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/PrivateConnectionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace PrivateConnectionTypeMapper {

static const int SELF_MANAGED_HASH = HashingUtils::HashString("SELF_MANAGED");
static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");

PrivateConnectionType GetPrivateConnectionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_MANAGED_HASH) {
    return PrivateConnectionType::SELF_MANAGED;
  } else if (hashCode == SERVICE_MANAGED_HASH) {
    return PrivateConnectionType::SERVICE_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrivateConnectionType>(hashCode);
  }

  return PrivateConnectionType::NOT_SET;
}

Aws::String GetNameForPrivateConnectionType(PrivateConnectionType enumValue) {
  switch (enumValue) {
    case PrivateConnectionType::NOT_SET:
      return {};
    case PrivateConnectionType::SELF_MANAGED:
      return "SELF_MANAGED";
    case PrivateConnectionType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrivateConnectionTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
