/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/Runtime.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int nodejs_HASH = HashingUtils::HashString("nodejs");
static const int java8_HASH = HashingUtils::HashString("java8");

namespace Aws
{
namespace Lambda
{
namespace Model
{
namespace RuntimeMapper
{
Runtime GetRuntimeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == nodejs_HASH)
  {
    return Runtime::nodejs;
  }
  else if (hashCode == java8_HASH)
  {
    return Runtime::java8;
  }

  return Runtime::NOT_SET;
}

Aws::String GetNameForRuntime(Runtime value)
{
  switch(value)
  {
  case Runtime::nodejs:
    return "nodejs";
  case Runtime::java8:
    return "java8";
  default:
    return "";
  }
}

} // namespace RuntimeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
