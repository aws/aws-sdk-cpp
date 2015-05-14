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
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int None_HASH = HashingUtils::HashString("None");
static const int Tail_HASH = HashingUtils::HashString("Tail");

namespace Aws
{
namespace Lambda
{
namespace Model
{
namespace LogTypeMapper
{
LogType GetLogTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == None_HASH)
  {
    return LogType::None;
  }
  else if (hashCode == Tail_HASH)
  {
    return LogType::Tail;
  }

  return LogType::None;
}

Aws::String GetNameForLogType(LogType value)
{
  switch(value)
  {
  case LogType::None:
    return "None";
  case LogType::Tail:
    return "Tail";
  default:
    return "None";
  }
}

} // namespace LogTypeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
