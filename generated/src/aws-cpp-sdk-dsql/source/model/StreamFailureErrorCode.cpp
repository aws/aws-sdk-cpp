/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/model/StreamFailureErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {
namespace StreamFailureErrorCodeMapper {

static const int KINESIS_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("KINESIS_THROUGHPUT_EXCEEDED");
static const int KINESIS_STREAM_NOT_FOUND_HASH = HashingUtils::HashString("KINESIS_STREAM_NOT_FOUND");
static const int ROLE_ACCESS_DENIED_HASH = HashingUtils::HashString("ROLE_ACCESS_DENIED");
static const int KINESIS_ACCESS_DENIED_HASH = HashingUtils::HashString("KINESIS_ACCESS_DENIED");
static const int KINESIS_KMS_ACCESS_DENIED_HASH = HashingUtils::HashString("KINESIS_KMS_ACCESS_DENIED");
static const int KINESIS_OVERSIZE_RECORD_HASH = HashingUtils::HashString("KINESIS_OVERSIZE_RECORD");
static const int CLUSTER_CMK_INACCESSIBLE_HASH = HashingUtils::HashString("CLUSTER_CMK_INACCESSIBLE");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

StreamFailureErrorCode GetStreamFailureErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KINESIS_THROUGHPUT_EXCEEDED_HASH) {
    return StreamFailureErrorCode::KINESIS_THROUGHPUT_EXCEEDED;
  } else if (hashCode == KINESIS_STREAM_NOT_FOUND_HASH) {
    return StreamFailureErrorCode::KINESIS_STREAM_NOT_FOUND;
  } else if (hashCode == ROLE_ACCESS_DENIED_HASH) {
    return StreamFailureErrorCode::ROLE_ACCESS_DENIED;
  } else if (hashCode == KINESIS_ACCESS_DENIED_HASH) {
    return StreamFailureErrorCode::KINESIS_ACCESS_DENIED;
  } else if (hashCode == KINESIS_KMS_ACCESS_DENIED_HASH) {
    return StreamFailureErrorCode::KINESIS_KMS_ACCESS_DENIED;
  } else if (hashCode == KINESIS_OVERSIZE_RECORD_HASH) {
    return StreamFailureErrorCode::KINESIS_OVERSIZE_RECORD;
  } else if (hashCode == CLUSTER_CMK_INACCESSIBLE_HASH) {
    return StreamFailureErrorCode::CLUSTER_CMK_INACCESSIBLE;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return StreamFailureErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamFailureErrorCode>(hashCode);
  }

  return StreamFailureErrorCode::NOT_SET;
}

Aws::String GetNameForStreamFailureErrorCode(StreamFailureErrorCode enumValue) {
  switch (enumValue) {
    case StreamFailureErrorCode::NOT_SET:
      return {};
    case StreamFailureErrorCode::KINESIS_THROUGHPUT_EXCEEDED:
      return "KINESIS_THROUGHPUT_EXCEEDED";
    case StreamFailureErrorCode::KINESIS_STREAM_NOT_FOUND:
      return "KINESIS_STREAM_NOT_FOUND";
    case StreamFailureErrorCode::ROLE_ACCESS_DENIED:
      return "ROLE_ACCESS_DENIED";
    case StreamFailureErrorCode::KINESIS_ACCESS_DENIED:
      return "KINESIS_ACCESS_DENIED";
    case StreamFailureErrorCode::KINESIS_KMS_ACCESS_DENIED:
      return "KINESIS_KMS_ACCESS_DENIED";
    case StreamFailureErrorCode::KINESIS_OVERSIZE_RECORD:
      return "KINESIS_OVERSIZE_RECORD";
    case StreamFailureErrorCode::CLUSTER_CMK_INACCESSIBLE:
      return "CLUSTER_CMK_INACCESSIBLE";
    case StreamFailureErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamFailureErrorCodeMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
