/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SearchCertificatesSortOrder.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace SearchCertificatesSortOrderMapper {

static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");

SearchCertificatesSortOrder GetSearchCertificatesSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASCENDING_HASH) {
    return SearchCertificatesSortOrder::ASCENDING;
  } else if (hashCode == DESCENDING_HASH) {
    return SearchCertificatesSortOrder::DESCENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchCertificatesSortOrder>(hashCode);
  }

  return SearchCertificatesSortOrder::NOT_SET;
}

Aws::String GetNameForSearchCertificatesSortOrder(SearchCertificatesSortOrder enumValue) {
  switch (enumValue) {
    case SearchCertificatesSortOrder::NOT_SET:
      return {};
    case SearchCertificatesSortOrder::ASCENDING:
      return "ASCENDING";
    case SearchCertificatesSortOrder::DESCENDING:
      return "DESCENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchCertificatesSortOrderMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
