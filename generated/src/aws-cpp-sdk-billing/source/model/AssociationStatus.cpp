/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AssociationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace AssociationStatusMapper {

static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
static const int NOT_ASSOCIATED_HASH = HashingUtils::HashString("NOT_ASSOCIATED");

AssociationStatus GetAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATED_HASH) {
    return AssociationStatus::ASSOCIATED;
  } else if (hashCode == NOT_ASSOCIATED_HASH) {
    return AssociationStatus::NOT_ASSOCIATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationStatus>(hashCode);
  }

  return AssociationStatus::NOT_SET;
}

Aws::String GetNameForAssociationStatus(AssociationStatus enumValue) {
  switch (enumValue) {
    case AssociationStatus::NOT_SET:
      return {};
    case AssociationStatus::ASSOCIATED:
      return "ASSOCIATED";
    case AssociationStatus::NOT_ASSOCIATED:
      return "NOT_ASSOCIATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationStatusMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
