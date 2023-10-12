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

static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t DISABLED_OPERATION_HASH = ConstExprHashingUtils::HashString("DisabledAction");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExists");
static constexpr uint32_t BASE_HASH = ConstExprHashingUtils::HashString("BaseException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
static constexpr uint32_t INVALID_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidType");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::INTERNAL), true);
  }
  else if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::RESOURCE_ALREADY_EXISTS), false);
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
