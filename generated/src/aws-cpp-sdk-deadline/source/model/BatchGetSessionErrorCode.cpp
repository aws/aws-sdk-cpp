/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchGetSessionErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchGetSessionErrorCodeMapper {

static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");

BatchGetSessionErrorCode GetBatchGetSessionErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerErrorException_HASH) {
    return BatchGetSessionErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchGetSessionErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchGetSessionErrorCode::ValidationException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetSessionErrorCode>(hashCode);
  }

  return BatchGetSessionErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetSessionErrorCode(BatchGetSessionErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetSessionErrorCode::NOT_SET:
      return {};
    case BatchGetSessionErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchGetSessionErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchGetSessionErrorCode::ValidationException:
      return "ValidationException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetSessionErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
