/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ResultTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ResultTypeEnumMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int PASSED_ONLY_HASH = HashingUtils::HashString("PASSED_ONLY");
static const int FAILED_ONLY_HASH = HashingUtils::HashString("FAILED_ONLY");

ResultTypeEnum GetResultTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return ResultTypeEnum::ALL;
  } else if (hashCode == PASSED_ONLY_HASH) {
    return ResultTypeEnum::PASSED_ONLY;
  } else if (hashCode == FAILED_ONLY_HASH) {
    return ResultTypeEnum::FAILED_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResultTypeEnum>(hashCode);
  }

  return ResultTypeEnum::NOT_SET;
}

Aws::String GetNameForResultTypeEnum(ResultTypeEnum enumValue) {
  switch (enumValue) {
    case ResultTypeEnum::NOT_SET:
      return {};
    case ResultTypeEnum::ALL:
      return "ALL";
    case ResultTypeEnum::PASSED_ONLY:
      return "PASSED_ONLY";
    case ResultTypeEnum::FAILED_ONLY:
      return "FAILED_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResultTypeEnumMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
