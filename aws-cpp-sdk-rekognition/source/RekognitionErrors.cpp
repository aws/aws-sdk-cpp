/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rekognition/RekognitionErrors.h>

using namespace Aws::Client;
using namespace Aws::Rekognition;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace RekognitionErrorMapper
{

static const int INVALID_IMAGE_FORMAT_HASH = HashingUtils::HashString("InvalidImageFormatException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int IMAGE_TOO_LARGE_HASH = HashingUtils::HashString("ImageTooLargeException");
static const int INVALID_S3_OBJECT_HASH = HashingUtils::HashString("InvalidS3ObjectException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_IMAGE_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_IMAGE_FORMAT), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::PROVISIONED_THROUGHPUT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == IMAGE_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::IMAGE_TOO_LARGE), false);
  }
  else if (hashCode == INVALID_S3_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_S3_OBJECT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RekognitionErrors::INVALID_PARAMETER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RekognitionErrorMapper
} // namespace Rekognition
} // namespace Aws
