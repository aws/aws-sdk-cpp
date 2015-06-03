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
#include <aws/iam/model/policyScopeType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int All_HASH = HashingUtils::HashString("All");
static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Local_HASH = HashingUtils::HashString("Local");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace policyScopeTypeMapper
{
policyScopeType GetpolicyScopeTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == All_HASH)
  {
    return policyScopeType::All;
  }
  else if (hashCode == AWS_HASH)
  {
    return policyScopeType::AWS;
  }
  else if (hashCode == Local_HASH)
  {
    return policyScopeType::Local;
  }

  return policyScopeType::All;
}

Aws::String GetNameForpolicyScopeType(policyScopeType value)
{
  switch(value)
  {
  case policyScopeType::All:
    return "All";
  case policyScopeType::AWS:
    return "AWS";
  case policyScopeType::Local:
    return "Local";
  default:
    return "All";
  }
}

} // namespace policyScopeTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
