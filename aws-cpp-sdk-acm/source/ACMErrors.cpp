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
#include <aws/acm/ACMErrors.h>

using namespace Aws::Client;
using namespace Aws::ACM;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace ACMErrorMapper
{

static const int INVALID_ARGS_HASH = HashingUtils::HashString("InvalidArgsException");
static const int INVALID_DOMAIN_VALIDATION_OPTIONS_HASH = HashingUtils::HashString("InvalidDomainValidationOptionsException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int REQUEST_IN_PROGRESS_HASH = HashingUtils::HashString("RequestInProgressException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ARGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_ARGS), false);
  }
  else if (hashCode == INVALID_DOMAIN_VALIDATION_OPTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_DOMAIN_VALIDATION_OPTIONS), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_ARN), false);
  }
  else if (hashCode == REQUEST_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::REQUEST_IN_PROGRESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_TAG), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ACMErrorMapper
} // namespace ACM
} // namespace Aws
