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

static constexpr uint32_t CHANNEL_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ChannelNotFound");
static constexpr uint32_t INVALID_CHANNEL_A_R_N_HASH = ConstExprHashingUtils::HashString("InvalidChannelARN");
static constexpr uint32_t CHANNEL_UNSUPPORTED_SCHEMA_HASH = ConstExprHashingUtils::HashString("ChannelUnsupportedSchema");
static constexpr uint32_t DUPLICATED_AUDIT_EVENT_ID_HASH = ConstExprHashingUtils::HashString("DuplicatedAuditEventId");
static constexpr uint32_t CHANNEL_INSUFFICIENT_PERMISSION_HASH = ConstExprHashingUtils::HashString("ChannelInsufficientPermission");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CHANNEL_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CHANNEL_A_R_N_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::INVALID_CHANNEL_A_R_N), false);
  }
  else if (hashCode == CHANNEL_UNSUPPORTED_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_UNSUPPORTED_SCHEMA), false);
  }
  else if (hashCode == DUPLICATED_AUDIT_EVENT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::DUPLICATED_AUDIT_EVENT_ID), false);
  }
  else if (hashCode == CHANNEL_INSUFFICIENT_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::CHANNEL_INSUFFICIENT_PERMISSION), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailDataErrors::UNSUPPORTED_OPERATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudTrailDataErrorMapper
} // namespace CloudTrailData
} // namespace Aws
