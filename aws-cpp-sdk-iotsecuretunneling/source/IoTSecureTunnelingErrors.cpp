/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTSecureTunneling;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace IoTSecureTunnelingErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSecureTunnelingErrors::LIMIT_EXCEEDED), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTSecureTunnelingErrorMapper
} // namespace IoTSecureTunneling
} // namespace Aws
