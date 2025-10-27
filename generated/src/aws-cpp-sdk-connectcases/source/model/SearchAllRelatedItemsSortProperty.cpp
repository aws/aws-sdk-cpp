/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchAllRelatedItemsSortProperty.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {
namespace SearchAllRelatedItemsSortPropertyMapper {

static const int AssociationTime_HASH = HashingUtils::HashString("AssociationTime");
static const int CaseId_HASH = HashingUtils::HashString("CaseId");

SearchAllRelatedItemsSortProperty GetSearchAllRelatedItemsSortPropertyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AssociationTime_HASH) {
    return SearchAllRelatedItemsSortProperty::AssociationTime;
  } else if (hashCode == CaseId_HASH) {
    return SearchAllRelatedItemsSortProperty::CaseId;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchAllRelatedItemsSortProperty>(hashCode);
  }

  return SearchAllRelatedItemsSortProperty::NOT_SET;
}

Aws::String GetNameForSearchAllRelatedItemsSortProperty(SearchAllRelatedItemsSortProperty enumValue) {
  switch (enumValue) {
    case SearchAllRelatedItemsSortProperty::NOT_SET:
      return {};
    case SearchAllRelatedItemsSortProperty::AssociationTime:
      return "AssociationTime";
    case SearchAllRelatedItemsSortProperty::CaseId:
      return "CaseId";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchAllRelatedItemsSortPropertyMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
