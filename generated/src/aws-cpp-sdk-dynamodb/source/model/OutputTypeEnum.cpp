/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/OutputTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace OutputTypeEnumMapper {

static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int CONDITION_CHECK_FAILURE_HASH = HashingUtils::HashString("CONDITION_CHECK_FAILURE");

OutputTypeEnum GetOutputTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ERROR__HASH) {
    return OutputTypeEnum::ERROR_;
  } else if (hashCode == CONDITION_CHECK_FAILURE_HASH) {
    return OutputTypeEnum::CONDITION_CHECK_FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputTypeEnum>(hashCode);
  }

  return OutputTypeEnum::NOT_SET;
}

Aws::String GetNameForOutputTypeEnum(OutputTypeEnum enumValue) {
  switch (enumValue) {
    case OutputTypeEnum::NOT_SET:
      return {};
    case OutputTypeEnum::ERROR_:
      return "ERROR";
    case OutputTypeEnum::CONDITION_CHECK_FAILURE:
      return "CONDITION_CHECK_FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputTypeEnumMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
