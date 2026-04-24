/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ApplicationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ApplicationTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int THIRD_PARTY_APPLICATION_HASH = HashingUtils::HashString("THIRD_PARTY_APPLICATION");

ApplicationType GetApplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return ApplicationType::MCP;
  } else if (hashCode == THIRD_PARTY_APPLICATION_HASH) {
    return ApplicationType::THIRD_PARTY_APPLICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationType>(hashCode);
  }

  return ApplicationType::NOT_SET;
}

Aws::String GetNameForApplicationType(ApplicationType enumValue) {
  switch (enumValue) {
    case ApplicationType::NOT_SET:
      return {};
    case ApplicationType::MCP:
      return "MCP";
    case ApplicationType::THIRD_PARTY_APPLICATION:
      return "THIRD_PARTY_APPLICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
