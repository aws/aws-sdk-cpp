/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Errors.h>
#include <aws/connectcampaignsv2/model/ConflictException.h>
#include <aws/connectcampaignsv2/model/ServiceQuotaExceededException.h>
#include <aws/connectcampaignsv2/model/ThrottlingException.h>
#include <aws/connectcampaignsv2/model/InternalServerException.h>
#include <aws/connectcampaignsv2/model/ResourceNotFoundException.h>
#include <aws/connectcampaignsv2/model/ValidationException.h>
#include <aws/connectcampaignsv2/model/AccessDeniedException.h>
#include <aws/connectcampaignsv2/model/InvalidCampaignStateException.h>
#include <aws/connectcampaignsv2/model/InvalidStateException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectCampaignsV2;
using namespace Aws::ConnectCampaignsV2::Model;

namespace Aws
{
namespace ConnectCampaignsV2
{
template<> AWS_CONNECTCAMPAIGNSV2_API ConflictException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API ServiceQuotaExceededException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API ThrottlingException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API InternalServerException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API ResourceNotFoundException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API ValidationException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API AccessDeniedException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API InvalidCampaignStateException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::INVALID_CAMPAIGN_STATE);
  return InvalidCampaignStateException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNSV2_API InvalidStateException ConnectCampaignsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsV2Errors::INVALID_STATE);
  return InvalidStateException(this->GetJsonPayload().View());
}

namespace ConnectCampaignsV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_CAMPAIGN_STATE_HASH = HashingUtils::HashString("InvalidCampaignStateException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsV2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsV2Errors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_CAMPAIGN_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsV2Errors::INVALID_CAMPAIGN_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsV2Errors::INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectCampaignsV2ErrorMapper
} // namespace ConnectCampaignsV2
} // namespace Aws
