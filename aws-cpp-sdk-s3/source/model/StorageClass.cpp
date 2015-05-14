/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/StorageClass.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int REDUCED_REDUNDANCY_HASH = HashingUtils::HashString("REDUCED_REDUNDANCY");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace StorageClassMapper
{
StorageClass GetStorageClassForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == STANDARD_HASH)
  {
    return StorageClass::STANDARD;
  }
  else if (hashCode == REDUCED_REDUNDANCY_HASH)
  {
    return StorageClass::REDUCED_REDUNDANCY;
  }

  return StorageClass::STANDARD;
}

Aws::String GetNameForStorageClass(StorageClass value)
{
  switch(value)
  {
  case StorageClass::STANDARD:
    return "STANDARD";
  case StorageClass::REDUCED_REDUNDANCY:
    return "REDUCED_REDUNDANCY";
  default:
    return "STANDARD";
  }
}

} // namespace StorageClassMapper
} // namespace Model
} // namespace S3
} // namespace Aws
