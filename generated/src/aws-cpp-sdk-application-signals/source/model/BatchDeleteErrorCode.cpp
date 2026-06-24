/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace BatchDeleteErrorCodeMapper {

static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int InternalServiceException_HASH = HashingUtils::HashString("InternalServiceException");

BatchDeleteErrorCode GetBatchDeleteErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceNotFoundException_HASH) {
    return BatchDeleteErrorCode::ResourceNotFoundException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return BatchDeleteErrorCode::AccessDeniedException;
  } else if (hashCode == InternalServiceException_HASH) {
    return BatchDeleteErrorCode::InternalServiceException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchDeleteErrorCode>(hashCode);
  }

  return BatchDeleteErrorCode::NOT_SET;
}

Aws::String GetNameForBatchDeleteErrorCode(BatchDeleteErrorCode enumValue) {
  switch (enumValue) {
    case BatchDeleteErrorCode::NOT_SET:
      return {};
    case BatchDeleteErrorCode::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case BatchDeleteErrorCode::AccessDeniedException:
      return "AccessDeniedException";
    case BatchDeleteErrorCode::InternalServiceException:
      return "InternalServiceException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchDeleteErrorCodeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
