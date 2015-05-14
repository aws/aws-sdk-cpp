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
#include <aws/dynamodb/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int HASH_HASH = HashingUtils::HashString("HASH");
static const int RANGE_HASH = HashingUtils::HashString("RANGE");

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
namespace KeyTypeMapper
{
KeyType GetKeyTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == HASH_HASH)
  {
    return KeyType::HASH;
  }
  else if (hashCode == RANGE_HASH)
  {
    return KeyType::RANGE;
  }

  return KeyType::HASH;
}

Aws::String GetNameForKeyType(KeyType value)
{
  switch(value)
  {
  case KeyType::HASH:
    return "HASH";
  case KeyType::RANGE:
    return "RANGE";
  default:
    return "HASH";
  }
}

} // namespace KeyTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
