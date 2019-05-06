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
#include <aws/elastictranscoder/ElasticTranscoderErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticTranscoder;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace ElasticTranscoderErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int INCOMPATIBLE_VERSION_HASH = HashingUtils::HashString("IncompatibleVersionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticTranscoderErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticTranscoderErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticTranscoderErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INCOMPATIBLE_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticTranscoderErrors::INCOMPATIBLE_VERSION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticTranscoderErrorMapper
} // namespace ElasticTranscoder
} // namespace Aws
