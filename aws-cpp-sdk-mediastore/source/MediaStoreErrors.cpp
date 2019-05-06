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
#include <aws/mediastore/MediaStoreErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaStore;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace MediaStoreErrorMapper
{

static const int CONTAINER_IN_USE_HASH = HashingUtils::HashString("ContainerInUseException");
static const int CORS_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("CorsPolicyNotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONTAINER_NOT_FOUND_HASH = HashingUtils::HashString("ContainerNotFoundException");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONTAINER_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::CONTAINER_IN_USE), false);
  }
  else if (hashCode == CORS_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::CORS_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONTAINER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::CONTAINER_NOT_FOUND), false);
  }
  else if (hashCode == POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::POLICY_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaStoreErrorMapper
} // namespace MediaStore
} // namespace Aws
