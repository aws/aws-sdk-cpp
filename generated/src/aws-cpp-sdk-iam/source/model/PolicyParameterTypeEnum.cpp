/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/PolicyParameterTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace PolicyParameterTypeEnumMapper {

static const int string_HASH = HashingUtils::HashString("string");
static const int stringList_HASH = HashingUtils::HashString("stringList");

PolicyParameterTypeEnum GetPolicyParameterTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == string_HASH) {
    return PolicyParameterTypeEnum::string;
  } else if (hashCode == stringList_HASH) {
    return PolicyParameterTypeEnum::stringList;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyParameterTypeEnum>(hashCode);
  }

  return PolicyParameterTypeEnum::NOT_SET;
}

Aws::String GetNameForPolicyParameterTypeEnum(PolicyParameterTypeEnum enumValue) {
  switch (enumValue) {
    case PolicyParameterTypeEnum::NOT_SET:
      return {};
    case PolicyParameterTypeEnum::string:
      return "string";
    case PolicyParameterTypeEnum::stringList:
      return "stringList";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyParameterTypeEnumMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
