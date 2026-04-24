/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchUpdateTaskErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchUpdateTaskErrorCodeMapper {

static const int ConflictException_HASH = HashingUtils::HashString("ConflictException");
static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");

BatchUpdateTaskErrorCode GetBatchUpdateTaskErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ConflictException_HASH) {
    return BatchUpdateTaskErrorCode::ConflictException;
  } else if (hashCode == InternalServerErrorException_HASH) {
    return BatchUpdateTaskErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchUpdateTaskErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchUpdateTaskErrorCode::ValidationException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return BatchUpdateTaskErrorCode::AccessDeniedException;
  } else if (hashCode == ThrottlingException_HASH) {
    return BatchUpdateTaskErrorCode::ThrottlingException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchUpdateTaskErrorCode>(hashCode);
  }

  return BatchUpdateTaskErrorCode::NOT_SET;
}

Aws::String GetNameForBatchUpdateTaskErrorCode(BatchUpdateTaskErrorCode enumValue) {
  switch (enumValue) {
    case BatchUpdateTaskErrorCode::NOT_SET:
      return {};
    case BatchUpdateTaskErrorCode::ConflictException:
      return "ConflictException";
    case BatchUpdateTaskErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchUpdateTaskErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchUpdateTaskErrorCode::ValidationException:
      return "ValidationException";
    case BatchUpdateTaskErrorCode::AccessDeniedException:
      return "AccessDeniedException";
    case BatchUpdateTaskErrorCode::ThrottlingException:
      return "ThrottlingException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchUpdateTaskErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
