/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/KafkaErrors.h>
#include <aws/kafka/model/ServiceUnavailableException.h>
#include <aws/kafka/model/ConflictException.h>
#include <aws/kafka/model/NotFoundException.h>
#include <aws/kafka/model/UnauthorizedException.h>
#include <aws/kafka/model/ForbiddenException.h>
#include <aws/kafka/model/TooManyRequestsException.h>
#include <aws/kafka/model/BadRequestException.h>
#include <aws/kafka/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Kafka;
using namespace Aws::Kafka::Model;

namespace Aws
{
namespace Kafka
{
template<> AWS_KAFKA_API ServiceUnavailableException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API ConflictException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API NotFoundException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API UnauthorizedException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::UNAUTHORIZED);
  return UnauthorizedException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API ForbiddenException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API TooManyRequestsException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API BadRequestException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_KAFKA_API InternalServerErrorException KafkaError::GetModeledError()
{
  assert(this->GetErrorType() == KafkaErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace KafkaErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::FORBIDDEN), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KafkaErrorMapper
} // namespace Kafka
} // namespace Aws
