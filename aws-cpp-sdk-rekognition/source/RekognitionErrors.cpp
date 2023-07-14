/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rekognition/RekognitionErrors.h>
#include <aws/rekognition/model/HumanLoopQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Rekognition;
using namespace Aws::Rekognition::Model;

namespace Aws
{
namespace Rekognition
{
template<> AWS_REKOGNITION_API HumanLoopQuotaExceededException RekognitionError::GetModeledError()
{
  assert(this->GetErrorType() == RekognitionErrors::HUMAN_LOOP_QUOTA_EXCEEDED);
  return HumanLoopQuotaExceededException(this->GetJsonPayload().View());
}

namespace RekognitionErrorMapper
{

static const int IMAGE_TOO_LARGE_HASH = HashingUtils::HashString("ImageTooLargeException");
static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("ResourceNotReadyException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int VIDEO_TOO_LARGE_HASH = HashingUtils::HashString("VideoTooLargeException");
static const int INVALID_S3_OBJECT_HASH = HashingUtils::HashString("InvalidS3ObjectException");
static const int INVALID_IMAGE_FORMAT_HASH = HashingUtils::HashString("InvalidImageFormatException");
static const int HUMAN_LOOP_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("HumanLoopQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IMAGE_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::IMAGE_TOO_LARGE), false);
  }
  else if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == VIDEO_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::VIDEO_TOO_LARGE), false);
  }
  else if (hashCode == INVALID_S3_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_S3_OBJECT), false);
  }
  else if (hashCode == INVALID_IMAGE_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_IMAGE_FORMAT), false);
  }
  else if (hashCode == HUMAN_LOOP_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::HUMAN_LOOP_QUOTA_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RekognitionErrorMapper
} // namespace Rekognition
} // namespace Aws
