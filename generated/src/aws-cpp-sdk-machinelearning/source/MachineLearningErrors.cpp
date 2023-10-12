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

static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceededException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t PREDICTOR_NOT_MOUNTED_HASH = ConstExprHashingUtils::HashString("PredictorNotMountedException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == PREDICTOR_NOT_MOUNTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::PREDICTOR_NOT_MOUNTED), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MachineLearningErrors::INVALID_TAG), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MachineLearningErrorMapper
} // namespace MachineLearning
} // namespace Aws
