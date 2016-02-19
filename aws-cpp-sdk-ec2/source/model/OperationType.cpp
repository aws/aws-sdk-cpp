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
#include <aws/ec2/model/OperationType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int add_HASH = HashingUtils::HashString("add");
static const int remove_HASH = HashingUtils::HashString("remove");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace OperationTypeMapper
{
OperationType GetOperationTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == add_HASH)
  {
    return OperationType::add;
  }
  else if (hashCode == remove_HASH)
  {
    return OperationType::remove;
  }

  return OperationType::NOT_SET;
}

Aws::String GetNameForOperationType(OperationType value)
{
  switch(value)
  {
  case OperationType::add:
    return "add";
  case OperationType::remove:
    return "remove";
  default:
    return "";
  }
}

} // namespace OperationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
