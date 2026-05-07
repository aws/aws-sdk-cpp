/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/TaxAuthorityStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace TaxAuthorityStatusMapper {

static const int ISSUED_HASH = HashingUtils::HashString("ISSUED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

TaxAuthorityStatus GetTaxAuthorityStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ISSUED_HASH) {
    return TaxAuthorityStatus::ISSUED;
  } else if (hashCode == CANCELLED_HASH) {
    return TaxAuthorityStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaxAuthorityStatus>(hashCode);
  }

  return TaxAuthorityStatus::NOT_SET;
}

Aws::String GetNameForTaxAuthorityStatus(TaxAuthorityStatus enumValue) {
  switch (enumValue) {
    case TaxAuthorityStatus::NOT_SET:
      return {};
    case TaxAuthorityStatus::ISSUED:
      return "ISSUED";
    case TaxAuthorityStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaxAuthorityStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
