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
#include <aws/pinpoint-email/PinpointEmailErrors.h>

using namespace Aws::Client;
using namespace Aws::PinpointEmail;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace PinpointEmailErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");
static const int SENDING_PAUSED_HASH = HashingUtils::HashString("SendingPausedException");
static const int MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = HashingUtils::HashString("MailFromDomainNotVerifiedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("AccountSuspendedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::NOT_FOUND), false);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MESSAGE_REJECTED), false);
  }
  else if (hashCode == SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::SENDING_PAUSED), false);
  }
  else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::MAIL_FROM_DOMAIN_NOT_VERIFIED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::BAD_REQUEST), false);
  }
  else if (hashCode == ACCOUNT_SUSPENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointEmailErrors::ACCOUNT_SUSPENDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointEmailErrorMapper
} // namespace PinpointEmail
} // namespace Aws
