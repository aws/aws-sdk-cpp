/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeAccountStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeAccountStatusMapper {

static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");

AcmeAccountStatus GetAcmeAccountStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALID_HASH) {
    return AcmeAccountStatus::VALID;
  } else if (hashCode == DEACTIVATED_HASH) {
    return AcmeAccountStatus::DEACTIVATED;
  } else if (hashCode == REVOKED_HASH) {
    return AcmeAccountStatus::REVOKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeAccountStatus>(hashCode);
  }

  return AcmeAccountStatus::NOT_SET;
}

Aws::String GetNameForAcmeAccountStatus(AcmeAccountStatus enumValue) {
  switch (enumValue) {
    case AcmeAccountStatus::NOT_SET:
      return {};
    case AcmeAccountStatus::VALID:
      return "VALID";
    case AcmeAccountStatus::DEACTIVATED:
      return "DEACTIVATED";
    case AcmeAccountStatus::REVOKED:
      return "REVOKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeAccountStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
