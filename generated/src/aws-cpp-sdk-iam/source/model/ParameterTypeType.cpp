/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/ParameterTypeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace ParameterTypeTypeMapper {

static const int String_HASH = HashingUtils::HashString("String");
static const int StringList_HASH = HashingUtils::HashString("StringList");
static const int Number_HASH = HashingUtils::HashString("Number");
static const int NumberList_HASH = HashingUtils::HashString("NumberList");
static const int Arn_HASH = HashingUtils::HashString("Arn");
static const int ArnList_HASH = HashingUtils::HashString("ArnList");

ParameterTypeType GetParameterTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == String_HASH) {
    return ParameterTypeType::String;
  } else if (hashCode == StringList_HASH) {
    return ParameterTypeType::StringList;
  } else if (hashCode == Number_HASH) {
    return ParameterTypeType::Number;
  } else if (hashCode == NumberList_HASH) {
    return ParameterTypeType::NumberList;
  } else if (hashCode == Arn_HASH) {
    return ParameterTypeType::Arn;
  } else if (hashCode == ArnList_HASH) {
    return ParameterTypeType::ArnList;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ParameterTypeType>(hashCode);
  }

  return ParameterTypeType::NOT_SET;
}

Aws::String GetNameForParameterTypeType(ParameterTypeType enumValue) {
  switch (enumValue) {
    case ParameterTypeType::NOT_SET:
      return {};
    case ParameterTypeType::String:
      return "String";
    case ParameterTypeType::StringList:
      return "StringList";
    case ParameterTypeType::Number:
      return "Number";
    case ParameterTypeType::NumberList:
      return "NumberList";
    case ParameterTypeType::Arn:
      return "Arn";
    case ParameterTypeType::ArnList:
      return "ArnList";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ParameterTypeTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
