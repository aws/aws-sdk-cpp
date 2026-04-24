/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ApplicationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppIntegrationsService {
namespace Model {
namespace ApplicationTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
static const int MCP_SERVER_HASH = HashingUtils::HashString("MCP_SERVER");

ApplicationType GetApplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return ApplicationType::STANDARD;
  } else if (hashCode == SERVICE_HASH) {
    return ApplicationType::SERVICE;
  } else if (hashCode == MCP_SERVER_HASH) {
    return ApplicationType::MCP_SERVER;
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
    case ApplicationType::STANDARD:
      return "STANDARD";
    case ApplicationType::SERVICE:
      return "SERVICE";
    case ApplicationType::MCP_SERVER:
      return "MCP_SERVER";
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
}  // namespace AppIntegrationsService
}  // namespace Aws
