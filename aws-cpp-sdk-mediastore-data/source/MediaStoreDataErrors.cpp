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
#include <aws/mediastore-data/MediaStoreDataErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaStoreData;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStoreData
{
namespace MediaStoreDataErrorMapper
{

static const int REQUESTED_RANGE_NOT_SATISFIABLE_HASH = HashingUtils::HashString("RequestedRangeNotSatisfiableException");
static const int CONTAINER_NOT_FOUND_HASH = HashingUtils::HashString("ContainerNotFoundException");
static const int OBJECT_NOT_FOUND_HASH = HashingUtils::HashString("ObjectNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == REQUESTED_RANGE_NOT_SATISFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::REQUESTED_RANGE_NOT_SATISFIABLE), false);
  }
  else if (hashCode == CONTAINER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::CONTAINER_NOT_FOUND), false);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::OBJECT_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaStoreDataErrorMapper
} // namespace MediaStoreData
} // namespace Aws
