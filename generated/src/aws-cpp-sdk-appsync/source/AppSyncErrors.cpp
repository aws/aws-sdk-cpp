/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appsync/AppSyncErrors.h>
#include <aws/appsync/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppSync;
using namespace Aws::AppSync::Model;

namespace Aws
{
namespace AppSync
{
template<> AWS_APPSYNC_API BadRequestException AppSyncError::GetModeledError()
{
  assert(this->GetErrorType() == AppSyncErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace AppSyncErrorMapper
{

static constexpr uint32_t GRAPH_Q_L_SCHEMA_HASH = ConstExprHashingUtils::HashString("GraphQLSchemaException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t API_KEY_VALIDITY_OUT_OF_BOUNDS_HASH = ConstExprHashingUtils::HashString("ApiKeyValidityOutOfBoundsException");
static constexpr uint32_t API_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ApiLimitExceededException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t API_KEY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ApiKeyLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == GRAPH_Q_L_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::GRAPH_Q_L_SCHEMA), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::NOT_FOUND), false);
  }
  else if (hashCode == API_KEY_VALIDITY_OUT_OF_BOUNDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_KEY_VALIDITY_OUT_OF_BOUNDS), false);
  }
  else if (hashCode == API_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::BAD_REQUEST), false);
  }
  else if (hashCode == API_KEY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_KEY_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppSyncErrorMapper
} // namespace AppSync
} // namespace Aws
