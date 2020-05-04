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
#include <aws/dlm/DLMErrors.h>
#include <aws/dlm/model/InternalServerException.h>
#include <aws/dlm/model/ResourceNotFoundException.h>
#include <aws/dlm/model/LimitExceededException.h>
#include <aws/dlm/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DLM;
using namespace Aws::DLM::Model;

namespace Aws
{
namespace DLM
{
template<> AWS_DLM_API InternalServerException DLMError::GetModeledError()
{
  assert(this->GetErrorType() == DLMErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_DLM_API ResourceNotFoundException DLMError::GetModeledError()
{
  assert(this->GetErrorType() == DLMErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DLM_API LimitExceededException DLMError::GetModeledError()
{
  assert(this->GetErrorType() == DLMErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DLM_API InvalidRequestException DLMError::GetModeledError()
{
  assert(this->GetErrorType() == DLMErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace DLMErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DLMErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DLMErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DLMErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DLMErrorMapper
} // namespace DLM
} // namespace Aws
