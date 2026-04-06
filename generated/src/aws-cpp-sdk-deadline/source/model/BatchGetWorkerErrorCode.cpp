/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/BatchGetWorkerErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace BatchGetWorkerErrorCodeMapper {

static const int InternalServerErrorException_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");

BatchGetWorkerErrorCode GetBatchGetWorkerErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerErrorException_HASH) {
    return BatchGetWorkerErrorCode::InternalServerErrorException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return BatchGetWorkerErrorCode::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return BatchGetWorkerErrorCode::ValidationException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetWorkerErrorCode>(hashCode);
  }

  return BatchGetWorkerErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetWorkerErrorCode(BatchGetWorkerErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetWorkerErrorCode::NOT_SET:
      return {};
    case BatchGetWorkerErrorCode::InternalServerErrorException:
      return "InternalServerErrorException";
    case BatchGetWorkerErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchGetWorkerErrorCode::ValidationException:
      return "ValidationException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetWorkerErrorCodeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
