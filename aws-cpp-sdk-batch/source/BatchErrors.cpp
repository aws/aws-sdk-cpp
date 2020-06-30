/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/batch/BatchErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Batch;

namespace Aws
{
namespace Batch
{
namespace BatchErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BatchErrors::CLIENT), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BatchErrors::SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BatchErrorMapper
} // namespace Batch
} // namespace Aws
