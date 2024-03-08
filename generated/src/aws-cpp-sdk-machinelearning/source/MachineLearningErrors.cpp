/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/machinelearning/MachineLearningErrors.h>
#include <aws/machinelearning/model/ResourceNotFoundException.h>
#include <aws/machinelearning/model/InternalServerException.h>
#include <aws/machinelearning/model/IdempotentParameterMismatchException.h>
#include <aws/machinelearning/model/LimitExceededException.h>
#include <aws/machinelearning/model/InvalidInputException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MachineLearning;
using namespace Aws::MachineLearning::Model;

namespace Aws
{
namespace MachineLearning
{
template<> AWS_MACHINELEARNING_API ResourceNotFoundException MachineLearningError::GetModeledError()
{
  assert(this->GetErrorType() == MachineLearningErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MACHINELEARNING_API InternalServerException MachineLearningError::GetModeledError()
{
  assert(this->GetErrorType() == MachineLearningErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_MACHINELEARNING_API IdempotentParameterMismatchException MachineLearningError::GetModeledError()
{
  assert(this->GetErrorType() == MachineLearningErrors::IDEMPOTENT_PARAMETER_MISMATCH);
  return IdempotentParameterMismatchException(this->GetJsonPayload().View());
}

template<> AWS_MACHINELEARNING_API LimitExceededException MachineLearningError::GetModeledError()
{
  assert(this->GetErrorType() == MachineLearningErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_MACHINELEARNING_API InvalidInputException MachineLearningError::GetModeledError()
{
  assert(this->GetErrorType() == MachineLearningErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

namespace MachineLearningErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int PREDICTOR_NOT_MOUNTED_HASH = HashingUtils::HashString("PredictorNotMountedException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::TAG_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == PREDICTOR_NOT_MOUNTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::PREDICTOR_NOT_MOUNTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INVALID_TAG), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MachineLearningErrorMapper
} // namespace MachineLearning
} // namespace Aws
