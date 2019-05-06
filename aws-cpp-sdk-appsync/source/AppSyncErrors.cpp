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
#include <aws/appsync/AppSyncErrors.h>

using namespace Aws::Client;
using namespace Aws::AppSync;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace AppSyncErrorMapper
{

static const int GRAPH_Q_L_SCHEMA_HASH = HashingUtils::HashString("GraphQLSchemaException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int API_KEY_VALIDITY_OUT_OF_BOUNDS_HASH = HashingUtils::HashString("ApiKeyValidityOutOfBoundsException");
static const int API_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ApiLimitExceededException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int API_KEY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ApiKeyLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::LIMIT_EXCEEDED), false);
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
