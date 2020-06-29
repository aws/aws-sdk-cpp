/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/machinelearning/MachineLearningErrors.h>

using namespace Aws::Client;
using namespace Aws::MachineLearning;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
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
