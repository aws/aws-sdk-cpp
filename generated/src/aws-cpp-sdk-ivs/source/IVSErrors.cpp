/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ivs/IVSErrors.h>
#include <aws/ivs/model/ConflictException.h>
#include <aws/ivs/model/ThrottlingException.h>
#include <aws/ivs/model/ServiceQuotaExceededException.h>
#include <aws/ivs/model/StreamUnavailable.h>
#include <aws/ivs/model/ResourceNotFoundException.h>
#include <aws/ivs/model/InternalServerException.h>
#include <aws/ivs/model/ValidationException.h>
#include <aws/ivs/model/PendingVerification.h>
#include <aws/ivs/model/AccessDeniedException.h>
#include <aws/ivs/model/ChannelNotBroadcasting.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IVS;
using namespace Aws::IVS::Model;

namespace Aws
{
namespace IVS
{
template<> AWS_IVS_API ConflictException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API ThrottlingException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API ServiceQuotaExceededException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API StreamUnavailable IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::STREAM_UNAVAILABLE);
  return StreamUnavailable(this->GetJsonPayload().View());
}

template<> AWS_IVS_API ResourceNotFoundException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API InternalServerException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API ValidationException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API PendingVerification IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::PENDING_VERIFICATION);
  return PendingVerification(this->GetJsonPayload().View());
}

template<> AWS_IVS_API AccessDeniedException IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_IVS_API ChannelNotBroadcasting IVSError::GetModeledError()
{
  assert(this->GetErrorType() == IVSErrors::CHANNEL_NOT_BROADCASTING);
  return ChannelNotBroadcasting(this->GetJsonPayload().View());
}

namespace IVSErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t STREAM_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("StreamUnavailable");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t PENDING_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PendingVerification");
static constexpr uint32_t CHANNEL_NOT_BROADCASTING_HASH = ConstExprHashingUtils::HashString("ChannelNotBroadcasting");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == STREAM_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::STREAM_UNAVAILABLE), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == PENDING_VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::PENDING_VERIFICATION), false);
  }
  else if (hashCode == CHANNEL_NOT_BROADCASTING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IVSErrors::CHANNEL_NOT_BROADCASTING), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IVSErrorMapper
} // namespace IVS
} // namespace Aws
