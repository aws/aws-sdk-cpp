/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/CustomMetadataSchemaComplianceStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace CustomMetadataSchemaComplianceStatusMapper {

static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
static const int NON_COMPLIANT_HASH = HashingUtils::HashString("NON_COMPLIANT");

CustomMetadataSchemaComplianceStatus GetCustomMetadataSchemaComplianceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLIANT_HASH) {
    return CustomMetadataSchemaComplianceStatus::COMPLIANT;
  } else if (hashCode == NON_COMPLIANT_HASH) {
    return CustomMetadataSchemaComplianceStatus::NON_COMPLIANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomMetadataSchemaComplianceStatus>(hashCode);
  }

  return CustomMetadataSchemaComplianceStatus::NOT_SET;
}

Aws::String GetNameForCustomMetadataSchemaComplianceStatus(CustomMetadataSchemaComplianceStatus enumValue) {
  switch (enumValue) {
    case CustomMetadataSchemaComplianceStatus::NOT_SET:
      return {};
    case CustomMetadataSchemaComplianceStatus::COMPLIANT:
      return "COMPLIANT";
    case CustomMetadataSchemaComplianceStatus::NON_COMPLIANT:
      return "NON_COMPLIANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomMetadataSchemaComplianceStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
