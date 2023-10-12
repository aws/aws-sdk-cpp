/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/es/ElasticsearchServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElasticsearchService;

namespace Aws
{
namespace ElasticsearchService
{
namespace ElasticsearchServiceErrorMapper
{

static constexpr uint32_t DISABLED_OPERATION_HASH = ConstExprHashingUtils::HashString("DisabledOperationException");
static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t BASE_HASH = ConstExprHashingUtils::HashString("BaseException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidTypeException");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::INTERNAL), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::CONFLICT), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::BASE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::INVALID_TYPE), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::INVALID_PAGINATION_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticsearchServiceErrorMapper
} // namespace ElasticsearchService
} // namespace Aws
