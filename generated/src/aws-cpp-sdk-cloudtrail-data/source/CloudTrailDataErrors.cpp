/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudtrail-data/CloudTrailDataErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudTrailData;

namespace Aws
{
namespace CloudTrailData
{
namespace CloudTrailDataErrorMapper
{

static const int CHANNEL_NOT_FOUND_HASH = HashingUtils::HashString("ChannelNotFound");
static const int INVALID_CHANNEL_A_R_N_HASH = HashingUtils::HashString("InvalidChannelARN");
static const int CHANNEL_UNSUPPORTED_SCHEMA_HASH = HashingUtils::HashString("ChannelUnsupportedSchema");
static const int DUPLICATED_AUDIT_EVENT_ID_HASH = HashingUtils::HashString("DuplicatedAuditEventId");
static const int CHANNEL_INSUFFICIENT_PERMISSION_HASH = HashingUtils::HashString("ChannelInsufficientPermission");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CHANNEL_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CHANNEL_A_R_N_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::INVALID_CHANNEL_A_R_N), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CHANNEL_UNSUPPORTED_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_UNSUPPORTED_SCHEMA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATED_AUDIT_EVENT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::DUPLICATED_AUDIT_EVENT_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CHANNEL_INSUFFICIENT_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_INSUFFICIENT_PERMISSION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudTrailDataErrorMapper
} // namespace CloudTrailData
} // namespace Aws
