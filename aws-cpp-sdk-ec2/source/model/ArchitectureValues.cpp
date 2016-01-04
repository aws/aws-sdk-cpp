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
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int i386_HASH = HashingUtils::HashString("i386");
static const int x86_64_HASH = HashingUtils::HashString("x86_64");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ArchitectureValuesMapper
{
ArchitectureValues GetArchitectureValuesForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == i386_HASH)
  {
    return ArchitectureValues::i386;
  }
  else if (hashCode == x86_64_HASH)
  {
    return ArchitectureValues::x86_64;
  }

  return ArchitectureValues::NOT_SET;
}

Aws::String GetNameForArchitectureValues(ArchitectureValues value)
{
  switch(value)
  {
  case ArchitectureValues::i386:
    return "i386";
  case ArchitectureValues::x86_64:
    return "x86_64";
  default:
    return "";
  }
}

} // namespace ArchitectureValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
