/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connectcampaigns/ConnectCampaignsErrors.h>
#include <aws/connectcampaigns/model/ConflictException.h>
#include <aws/connectcampaigns/model/ServiceQuotaExceededException.h>
#include <aws/connectcampaigns/model/ThrottlingException.h>
#include <aws/connectcampaigns/model/InternalServerException.h>
#include <aws/connectcampaigns/model/ResourceNotFoundException.h>
#include <aws/connectcampaigns/model/ValidationException.h>
#include <aws/connectcampaigns/model/AccessDeniedException.h>
#include <aws/connectcampaigns/model/InvalidCampaignStateException.h>
#include <aws/connectcampaigns/model/InvalidStateException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectCampaigns;
using namespace Aws::ConnectCampaigns::Model;

namespace Aws
{
namespace ConnectCampaigns
{
template<> AWS_CONNECTCAMPAIGNS_API ConflictException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API ServiceQuotaExceededException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API ThrottlingException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API InternalServerException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API ResourceNotFoundException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API ValidationException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API AccessDeniedException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API InvalidCampaignStateException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::INVALID_CAMPAIGN_STATE);
  return InvalidCampaignStateException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCAMPAIGNS_API InvalidStateException ConnectCampaignsError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCampaignsErrors::INVALID_STATE);
  return InvalidStateException(this->GetJsonPayload().View());
}

namespace ConnectCampaignsErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_CAMPAIGN_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsErrors::INVALID_CAMPAIGN_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCampaignsErrors::INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectCampaignsErrorMapper
} // namespace ConnectCampaigns
} // namespace Aws
