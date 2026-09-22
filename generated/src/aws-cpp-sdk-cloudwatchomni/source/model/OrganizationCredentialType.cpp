/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/OrganizationCredentialType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace OrganizationCredentialTypeMapper {

static const int SPACE_OPERATION_HASH = HashingUtils::HashString("SPACE_OPERATION");

OrganizationCredentialType GetOrganizationCredentialTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPACE_OPERATION_HASH) {
    return OrganizationCredentialType::SPACE_OPERATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationCredentialType>(hashCode);
  }

  return OrganizationCredentialType::NOT_SET;
}

Aws::String GetNameForOrganizationCredentialType(OrganizationCredentialType enumValue) {
  switch (enumValue) {
    case OrganizationCredentialType::NOT_SET:
      return {};
    case OrganizationCredentialType::SPACE_OPERATION:
      return "SPACE_OPERATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationCredentialTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
