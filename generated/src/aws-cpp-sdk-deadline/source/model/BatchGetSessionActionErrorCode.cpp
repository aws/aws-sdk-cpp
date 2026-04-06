/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchGetSessionActionErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchGetSessionActionErrorCodeMapper {

static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");

BatchGetSessionActionErrorCode GetBatchGetSessionActionErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerErrorException_HASH) {
    return BatchGetSessionActionErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchGetSessionActionErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchGetSessionActionErrorCode::ValidationException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetSessionActionErrorCode>(hashCode);
  }

  return BatchGetSessionActionErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetSessionActionErrorCode(BatchGetSessionActionErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetSessionActionErrorCode::NOT_SET:
      return {};
    case BatchGetSessionActionErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchGetSessionActionErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchGetSessionActionErrorCode::ValidationException:
      return "ValidationException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetSessionActionErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
