/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchGetStepErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchGetStepErrorCodeMapper {

static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");

BatchGetStepErrorCode GetBatchGetStepErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerErrorException_HASH) {
    return BatchGetStepErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchGetStepErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchGetStepErrorCode::ValidationException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return BatchGetStepErrorCode::AccessDeniedException;
  } else if (hashCode == ThrottlingException_HASH) {
    return BatchGetStepErrorCode::ThrottlingException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetStepErrorCode>(hashCode);
  }

  return BatchGetStepErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetStepErrorCode(BatchGetStepErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetStepErrorCode::NOT_SET:
      return {};
    case BatchGetStepErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchGetStepErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchGetStepErrorCode::ValidationException:
      return "ValidationException";
    case BatchGetStepErrorCode::AccessDeniedException:
      return "AccessDeniedException";
    case BatchGetStepErrorCode::ThrottlingException:
      return "ThrottlingException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetStepErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
