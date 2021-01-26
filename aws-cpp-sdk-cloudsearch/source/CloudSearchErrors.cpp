/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudsearch/CloudSearchErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudSearch;

namespace Aws
{
namespace CloudSearch
{
namespace CloudSearchErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int DISABLED_OPERATION_HASH = HashingUtils::HashString("DisabledAction");
static const int BASE_HASH = HashingUtils::HashString("BaseException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int INVALID_TYPE_HASH = HashingUtils::HashString("InvalidType");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::INTERNAL), true);
  }
  else if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::BASE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::INVALID_TYPE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudSearchErrorMapper
} // namespace CloudSearch
} // namespace Aws
