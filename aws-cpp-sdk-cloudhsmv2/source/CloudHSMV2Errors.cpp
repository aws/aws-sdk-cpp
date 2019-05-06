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
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>

using namespace Aws::Client;
using namespace Aws::CloudHSMV2;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace CloudHSMV2ErrorMapper
{

static const int CLOUD_HSM_INVALID_REQUEST_HASH = HashingUtils::HashString("CloudHsmInvalidRequestException");
static const int CLOUD_HSM_INTERNAL_FAILURE_HASH = HashingUtils::HashString("CloudHsmInternalFailureException");
static const int CLOUD_HSM_SERVICE_HASH = HashingUtils::HashString("CloudHsmServiceException");
static const int CLOUD_HSM_ACCESS_DENIED_HASH = HashingUtils::HashString("CloudHsmAccessDeniedException");
static const int CLOUD_HSM_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("CloudHsmResourceNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLOUD_HSM_INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_INVALID_REQUEST), false);
  }
  else if (hashCode == CLOUD_HSM_INTERNAL_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_INTERNAL_FAILURE), false);
  }
  else if (hashCode == CLOUD_HSM_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_SERVICE), false);
  }
  else if (hashCode == CLOUD_HSM_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_ACCESS_DENIED), false);
  }
  else if (hashCode == CLOUD_HSM_RESOURCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_RESOURCE_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudHSMV2ErrorMapper
} // namespace CloudHSMV2
} // namespace Aws
