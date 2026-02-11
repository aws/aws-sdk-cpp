/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/KafkaErrors.h>
#include <aws/kafka/model/BadRequestException.h>
#include <aws/kafka/model/ClusterConnectivityException.h>
#include <aws/kafka/model/ConflictException.h>
#include <aws/kafka/model/ControllerMovedException.h>
#include <aws/kafka/model/ForbiddenException.h>
#include <aws/kafka/model/GroupSubscribedToTopicException.h>
#include <aws/kafka/model/InternalServerErrorException.h>
#include <aws/kafka/model/KafkaRequestException.h>
#include <aws/kafka/model/KafkaTimeoutException.h>
#include <aws/kafka/model/NotControllerException.h>
#include <aws/kafka/model/NotFoundException.h>
#include <aws/kafka/model/ReassignmentInProgressException.h>
#include <aws/kafka/model/ServiceUnavailableException.h>
#include <aws/kafka/model/TooManyRequestsException.h>
#include <aws/kafka/model/TopicExistsException.h>
#include <aws/kafka/model/UnauthorizedException.h>
#include <aws/kafka/model/UnknownTopicOrPartitionException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Kafka;
using namespace Aws::Kafka::Model;

namespace Aws {
namespace Kafka {
template <>
AWS_KAFKA_API ConflictException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API KafkaTimeoutException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::KAFKA_TIMEOUT);
  return KafkaTimeoutException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API UnknownTopicOrPartitionException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::UNKNOWN_TOPIC_OR_PARTITION);
  return UnknownTopicOrPartitionException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API ForbiddenException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API NotControllerException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::NOT_CONTROLLER);
  return NotControllerException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API KafkaRequestException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::KAFKA_REQUEST);
  return KafkaRequestException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API ServiceUnavailableException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API NotFoundException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API GroupSubscribedToTopicException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::GROUP_SUBSCRIBED_TO_TOPIC);
  return GroupSubscribedToTopicException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API ReassignmentInProgressException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::REASSIGNMENT_IN_PROGRESS);
  return ReassignmentInProgressException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API UnauthorizedException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::UNAUTHORIZED);
  return UnauthorizedException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API TopicExistsException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::TOPIC_EXISTS);
  return TopicExistsException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API TooManyRequestsException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API BadRequestException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API InternalServerErrorException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API ClusterConnectivityException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::CLUSTER_CONNECTIVITY);
  return ClusterConnectivityException(this->GetJsonPayload().View());
}

template <>
AWS_KAFKA_API ControllerMovedException KafkaError::GetModeledError() {
  assert(this->GetErrorType() == KafkaErrors::CONTROLLER_MOVED);
  return ControllerMovedException(this->GetJsonPayload().View());
}

namespace KafkaErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int KAFKA_TIMEOUT_HASH = HashingUtils::HashString("KafkaTimeoutException");
static const int UNKNOWN_TOPIC_OR_PARTITION_HASH = HashingUtils::HashString("UnknownTopicOrPartitionException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int NOT_CONTROLLER_HASH = HashingUtils::HashString("NotControllerException");
static const int KAFKA_REQUEST_HASH = HashingUtils::HashString("KafkaRequestException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int GROUP_SUBSCRIBED_TO_TOPIC_HASH = HashingUtils::HashString("GroupSubscribedToTopicException");
static const int REASSIGNMENT_IN_PROGRESS_HASH = HashingUtils::HashString("ReassignmentInProgressException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int TOPIC_EXISTS_HASH = HashingUtils::HashString("TopicExistsException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int CLUSTER_CONNECTIVITY_HASH = HashingUtils::HashString("ClusterConnectivityException");
static const int CONTROLLER_MOVED_HASH = HashingUtils::HashString("ControllerMovedException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == KAFKA_TIMEOUT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::KAFKA_TIMEOUT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNKNOWN_TOPIC_OR_PARTITION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::UNKNOWN_TOPIC_OR_PARTITION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FORBIDDEN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NOT_CONTROLLER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::NOT_CONTROLLER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == KAFKA_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::KAFKA_REQUEST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NOT_FOUND_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == GROUP_SUBSCRIBED_TO_TOPIC_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::GROUP_SUBSCRIBED_TO_TOPIC), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == REASSIGNMENT_IN_PROGRESS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::REASSIGNMENT_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNAUTHORIZED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOPIC_EXISTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::TOPIC_EXISTS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  } else if (hashCode == BAD_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_ERROR_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::INTERNAL_SERVER_ERROR), RetryableType::RETRYABLE);
  } else if (hashCode == CLUSTER_CONNECTIVITY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::CLUSTER_CONNECTIVITY), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CONTROLLER_MOVED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KafkaErrors::CONTROLLER_MOVED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace KafkaErrorMapper
}  // namespace Kafka
}  // namespace Aws
