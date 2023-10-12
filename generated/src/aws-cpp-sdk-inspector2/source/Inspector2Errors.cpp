/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/Inspector2Errors.h>
#include <aws/inspector2/model/ConflictException.h>
#include <aws/inspector2/model/ThrottlingException.h>
#include <aws/inspector2/model/ServiceQuotaExceededException.h>
#include <aws/inspector2/model/InternalServerException.h>
#include <aws/inspector2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Inspector2;
using namespace Aws::Inspector2::Model;

namespace Aws
{
namespace Inspector2
{
template<> AWS_INSPECTOR2_API ConflictException Inspector2Error::GetModeledError()
{
  assert(this->GetErrorType() == Inspector2Errors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR2_API ThrottlingException Inspector2Error::GetModeledError()
{
  assert(this->GetErrorType() == Inspector2Errors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR2_API ServiceQuotaExceededException Inspector2Error::GetModeledError()
{
  assert(this->GetErrorType() == Inspector2Errors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR2_API InternalServerException Inspector2Error::GetModeledError()
{
  assert(this->GetErrorType() == Inspector2Errors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR2_API ValidationException Inspector2Error::GetModeledError()
{
  assert(this->GetErrorType() == Inspector2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace Inspector2ErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Inspector2Errors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Inspector2Errors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Inspector2Errors::INTERNAL_SERVER), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Inspector2Errors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Inspector2ErrorMapper
} // namespace Inspector2
} // namespace Aws
