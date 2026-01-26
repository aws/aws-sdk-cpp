/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TagPropagationResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {
namespace TagPropagationResourceTypeMapper {

static const int Cases_HASH = HashingUtils::HashString("Cases");

TagPropagationResourceType GetTagPropagationResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Cases_HASH) {
    return TagPropagationResourceType::Cases;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagPropagationResourceType>(hashCode);
  }

  return TagPropagationResourceType::NOT_SET;
}

Aws::String GetNameForTagPropagationResourceType(TagPropagationResourceType enumValue) {
  switch (enumValue) {
    case TagPropagationResourceType::NOT_SET:
      return {};
    case TagPropagationResourceType::Cases:
      return "Cases";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagPropagationResourceTypeMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
