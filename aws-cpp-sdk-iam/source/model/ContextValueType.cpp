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
#include <aws/iam/model/ContextValueType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int string_HASH = HashingUtils::HashString("string");
static const int stringList_HASH = HashingUtils::HashString("stringList");
static const int numeric_HASH = HashingUtils::HashString("numeric");
static const int numericList_HASH = HashingUtils::HashString("numericList");
static const int boolean_HASH = HashingUtils::HashString("boolean");
static const int booleanList_HASH = HashingUtils::HashString("booleanList");
static const int ip_HASH = HashingUtils::HashString("ip");
static const int ipList_HASH = HashingUtils::HashString("ipList");
static const int binary_HASH = HashingUtils::HashString("binary");
static const int binaryList_HASH = HashingUtils::HashString("binaryList");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace ContextValueTypeMapper
{
ContextValueType GetContextValueTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == string_HASH)
  {
    return ContextValueType::string;
  }
  else if (hashCode == stringList_HASH)
  {
    return ContextValueType::stringList;
  }
  else if (hashCode == numeric_HASH)
  {
    return ContextValueType::numeric;
  }
  else if (hashCode == numericList_HASH)
  {
    return ContextValueType::numericList;
  }
  else if (hashCode == boolean_HASH)
  {
    return ContextValueType::boolean;
  }
  else if (hashCode == booleanList_HASH)
  {
    return ContextValueType::booleanList;
  }
  else if (hashCode == ip_HASH)
  {
    return ContextValueType::ip;
  }
  else if (hashCode == ipList_HASH)
  {
    return ContextValueType::ipList;
  }
  else if (hashCode == binary_HASH)
  {
    return ContextValueType::binary;
  }
  else if (hashCode == binaryList_HASH)
  {
    return ContextValueType::binaryList;
  }

  return ContextValueType::NOT_SET;
}

Aws::String GetNameForContextValueType(ContextValueType value)
{
  switch(value)
  {
  case ContextValueType::string:
    return "string";
  case ContextValueType::stringList:
    return "stringList";
  case ContextValueType::numeric:
    return "numeric";
  case ContextValueType::numericList:
    return "numericList";
  case ContextValueType::boolean:
    return "boolean";
  case ContextValueType::booleanList:
    return "booleanList";
  case ContextValueType::ip:
    return "ip";
  case ContextValueType::ipList:
    return "ipList";
  case ContextValueType::binary:
    return "binary";
  case ContextValueType::binaryList:
    return "binaryList";
  default:
    return "";
  }
}

} // namespace ContextValueTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
