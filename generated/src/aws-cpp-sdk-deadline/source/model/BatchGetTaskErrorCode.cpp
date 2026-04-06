/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchGetTaskErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchGetTaskErrorCodeMapper {

static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");

BatchGetTaskErrorCode GetBatchGetTaskErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerErrorException_HASH) {
    return BatchGetTaskErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchGetTaskErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchGetTaskErrorCode::ValidationException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return BatchGetTaskErrorCode::AccessDeniedException;
  } else if (hashCode == ThrottlingException_HASH) {
    return BatchGetTaskErrorCode::ThrottlingException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetTaskErrorCode>(hashCode);
  }

  return BatchGetTaskErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetTaskErrorCode(BatchGetTaskErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetTaskErrorCode::NOT_SET:
      return {};
    case BatchGetTaskErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchGetTaskErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchGetTaskErrorCode::ValidationException:
      return "ValidationException";
    case BatchGetTaskErrorCode::AccessDeniedException:
      return "AccessDeniedException";
    case BatchGetTaskErrorCode::ThrottlingException:
      return "ThrottlingException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetTaskErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
