/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchUpdateJobErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchUpdateJobErrorCodeMapper {

static const int ConflictException_HASH = HashingUtils::HashString("ConflictException");
static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");

BatchUpdateJobErrorCode GetBatchUpdateJobErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ConflictException_HASH) {
    return BatchUpdateJobErrorCode::ConflictException;
  } else if (hashCode == InternalServerErrorException_HASH) {
    return BatchUpdateJobErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchUpdateJobErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchUpdateJobErrorCode::ValidationException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return BatchUpdateJobErrorCode::AccessDeniedException;
  } else if (hashCode == ThrottlingException_HASH) {
    return BatchUpdateJobErrorCode::ThrottlingException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchUpdateJobErrorCode>(hashCode);
  }

  return BatchUpdateJobErrorCode::NOT_SET;
}

Aws::String GetNameForBatchUpdateJobErrorCode(BatchUpdateJobErrorCode enumValue) {
  switch (enumValue) {
    case BatchUpdateJobErrorCode::NOT_SET:
      return {};
    case BatchUpdateJobErrorCode::ConflictException:
      return "ConflictException";
    case BatchUpdateJobErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchUpdateJobErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchUpdateJobErrorCode::ValidationException:
      return "ValidationException";
    case BatchUpdateJobErrorCode::AccessDeniedException:
      return "AccessDeniedException";
    case BatchUpdateJobErrorCode::ThrottlingException:
      return "ThrottlingException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchUpdateJobErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
