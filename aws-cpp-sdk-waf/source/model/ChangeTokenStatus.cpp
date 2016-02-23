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
#include <aws/waf/model/ChangeTokenStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int INSYNC_HASH = HashingUtils::HashString("INSYNC");

namespace Aws
{
namespace WAF
{
namespace Model
{
namespace ChangeTokenStatusMapper
{
ChangeTokenStatus GetChangeTokenStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == PROVISIONED_HASH)
  {
    return ChangeTokenStatus::PROVISIONED;
  }
  else if (hashCode == PENDING_HASH)
  {
    return ChangeTokenStatus::PENDING;
  }
  else if (hashCode == INSYNC_HASH)
  {
    return ChangeTokenStatus::INSYNC;
  }

  return ChangeTokenStatus::NOT_SET;
}

Aws::String GetNameForChangeTokenStatus(ChangeTokenStatus value)
{
  switch(value)
  {
  case ChangeTokenStatus::PROVISIONED:
    return "PROVISIONED";
  case ChangeTokenStatus::PENDING:
    return "PENDING";
  case ChangeTokenStatus::INSYNC:
    return "INSYNC";
  default:
    return "";
  }
}

} // namespace ChangeTokenStatusMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
