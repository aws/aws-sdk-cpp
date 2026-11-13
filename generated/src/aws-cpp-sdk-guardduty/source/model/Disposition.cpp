/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/Disposition.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DispositionMapper {

static const int Isolated_HASH = HashingUtils::HashString("Isolated");
static const int Blocked_HASH = HashingUtils::HashString("Blocked");
static const int Deleted_HASH = HashingUtils::HashString("Deleted");
static const int Access_Revoked_HASH = HashingUtils::HashString("Access Revoked");
static const int Logged_HASH = HashingUtils::HashString("Logged");

Disposition GetDispositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Isolated_HASH) {
    return Disposition::Isolated;
  } else if (hashCode == Blocked_HASH) {
    return Disposition::Blocked;
  } else if (hashCode == Deleted_HASH) {
    return Disposition::Deleted;
  } else if (hashCode == Access_Revoked_HASH) {
    return Disposition::Access_Revoked;
  } else if (hashCode == Logged_HASH) {
    return Disposition::Logged;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Disposition>(hashCode);
  }

  return Disposition::NOT_SET;
}

Aws::String GetNameForDisposition(Disposition enumValue) {
  switch (enumValue) {
    case Disposition::NOT_SET:
      return {};
    case Disposition::Isolated:
      return "Isolated";
    case Disposition::Blocked:
      return "Blocked";
    case Disposition::Deleted:
      return "Deleted";
    case Disposition::Access_Revoked:
      return "Access Revoked";
    case Disposition::Logged:
      return "Logged";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DispositionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
