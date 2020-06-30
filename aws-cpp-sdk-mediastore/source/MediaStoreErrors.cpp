/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediastore/MediaStoreErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MediaStore;

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreErrors::LIMIT_EXCEEDED), true);
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
