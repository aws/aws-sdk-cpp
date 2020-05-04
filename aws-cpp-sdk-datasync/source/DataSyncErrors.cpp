/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
