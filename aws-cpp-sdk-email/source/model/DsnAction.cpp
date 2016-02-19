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
#include <aws/email/model/DsnAction.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int failed_HASH = HashingUtils::HashString("failed");
static const int delayed_HASH = HashingUtils::HashString("delayed");
static const int delivered_HASH = HashingUtils::HashString("delivered");
static const int relayed_HASH = HashingUtils::HashString("relayed");
static const int expanded_HASH = HashingUtils::HashString("expanded");

namespace Aws
{
namespace SES
{
namespace Model
{
namespace DsnActionMapper
{
DsnAction GetDsnActionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == failed_HASH)
  {
    return DsnAction::failed;
  }
  else if (hashCode == delayed_HASH)
  {
    return DsnAction::delayed;
  }
  else if (hashCode == delivered_HASH)
  {
    return DsnAction::delivered;
  }
  else if (hashCode == relayed_HASH)
  {
    return DsnAction::relayed;
  }
  else if (hashCode == expanded_HASH)
  {
    return DsnAction::expanded;
  }

  return DsnAction::NOT_SET;
}

Aws::String GetNameForDsnAction(DsnAction value)
{
  switch(value)
  {
  case DsnAction::failed:
    return "failed";
  case DsnAction::delayed:
    return "delayed";
  case DsnAction::delivered:
    return "delivered";
  case DsnAction::relayed:
    return "relayed";
  case DsnAction::expanded:
    return "expanded";
  default:
    return "";
  }
}

} // namespace DsnActionMapper
} // namespace Model
} // namespace SES
} // namespace Aws
