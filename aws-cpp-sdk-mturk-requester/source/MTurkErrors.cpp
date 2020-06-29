/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mturk-requester/MTurkErrors.h>

using namespace Aws::Client;
using namespace Aws::MTurk;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace MTurkErrorMapper
{

static const int SERVICE_FAULT_HASH = HashingUtils::HashString("ServiceFault");
static const int REQUEST_HASH = HashingUtils::HashString("RequestError");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::SERVICE_FAULT), false);
  }
  else if (hashCode == REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MTurkErrorMapper
} // namespace MTurk
} // namespace Aws
