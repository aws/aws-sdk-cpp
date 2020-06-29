/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dataexchange/DataExchangeErrors.h>

using namespace Aws::Client;
using namespace Aws::DataExchange;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace DataExchangeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DataExchangeErrorMapper
} // namespace DataExchange
} // namespace Aws
