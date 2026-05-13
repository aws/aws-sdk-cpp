/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>

namespace Aws {
namespace DSQL {
namespace Model {
enum class StreamFailureErrorCode {
  NOT_SET,
  KINESIS_THROUGHPUT_EXCEEDED,
  KINESIS_STREAM_NOT_FOUND,
  ROLE_ACCESS_DENIED,
  KINESIS_ACCESS_DENIED,
  KINESIS_KMS_ACCESS_DENIED,
  KINESIS_OVERSIZE_RECORD,
  CLUSTER_CMK_INACCESSIBLE,
  INTERNAL_ERROR
};

namespace StreamFailureErrorCodeMapper {
AWS_DSQL_API StreamFailureErrorCode GetStreamFailureErrorCodeForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForStreamFailureErrorCode(StreamFailureErrorCode value);
}  // namespace StreamFailureErrorCodeMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
