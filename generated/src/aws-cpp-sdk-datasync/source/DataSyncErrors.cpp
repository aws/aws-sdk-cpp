/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datasync/DataSyncErrors.h>
#include <aws/datasync/model/InternalException.h>
#include <aws/datasync/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DataSync;
using namespace Aws::DataSync::Model;

namespace Aws
{
namespace DataSync
{
template<> AWS_DATASYNC_API InternalException DataSyncError::GetModeledError()
{
  assert(this->GetErrorType() == DataSyncErrors::INTERNAL);
  return InternalException(this->GetJsonPayload().View());
}

template<> AWS_DATASYNC_API InvalidRequestException DataSyncError::GetModeledError()
{
  assert(this->GetErrorType() == DataSyncErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace DataSyncErrorMapper
{

static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataSyncErrors::INTERNAL), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataSyncErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DataSyncErrorMapper
} // namespace DataSync
} // namespace Aws
