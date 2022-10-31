/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/SESV2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SESV2;

namespace Aws
{
namespace SESV2
{
namespace SESV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SENDING_PAUSED_HASH = HashingUtils::HashString("SendingPausedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");
static const int MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = HashingUtils::HashString("MailFromDomainNotVerifiedException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("AccountSuspendedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::CONFLICT), false);
  }
  else if (hashCode == SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::SENDING_PAUSED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::ALREADY_EXISTS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::NOT_FOUND), false);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::MESSAGE_REJECTED), false);
  }
  else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::MAIL_FROM_DOMAIN_NOT_VERIFIED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == ACCOUNT_SUSPENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESV2Errors::ACCOUNT_SUSPENDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SESV2ErrorMapper
} // namespace SESV2
} // namespace Aws
