/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/cloudhsm/model/CloudHsmServiceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudHSM;
using namespace Aws::CloudHSM::Model;

namespace Aws
{
namespace CloudHSM
{
template<> AWS_CLOUDHSM_API CloudHsmServiceException CloudHSMError::GetModeledError()
{
  assert(this->GetErrorType() == CloudHSMErrors::CLOUD_HSM_SERVICE);
  return CloudHsmServiceException(this->GetJsonPayload().View());
}

namespace CloudHSMErrorMapper
{

static const int CLOUD_HSM_SERVICE_HASH = HashingUtils::HashString("CloudHsmServiceException");
static const int CLOUD_HSM_INTERNAL_HASH = HashingUtils::HashString("CloudHsmInternalException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLOUD_HSM_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMErrors::CLOUD_HSM_SERVICE), false);
  }
  else if (hashCode == CLOUD_HSM_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMErrors::CLOUD_HSM_INTERNAL), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudHSMErrorMapper
} // namespace CloudHSM
} // namespace Aws
