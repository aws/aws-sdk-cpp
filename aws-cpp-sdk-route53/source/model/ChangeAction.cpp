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
#include <aws/route53/model/ChangeAction.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CREATE_HASH = HashingUtils::HashString("CREATE");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");
static const int UPSERT_HASH = HashingUtils::HashString("UPSERT");

namespace Aws
{
namespace Route53
{
namespace Model
{
namespace ChangeActionMapper
{


ChangeAction GetChangeActionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_HASH)
  {
     return ChangeAction::CREATE;
  }
  else if (hashCode == DELETE__HASH)
  {
     return ChangeAction::DELETE_;
  }
  else if (hashCode == UPSERT_HASH)
  {
     return ChangeAction::UPSERT;
  }
  return ChangeAction::NOT_SET;
}

Aws::String GetNameForChangeAction(ChangeAction enumValue)
{
  switch(enumValue)
  {
  case ChangeAction::CREATE:
    return "CREATE";
  case ChangeAction::DELETE_:
    return "DELETE";
  case ChangeAction::UPSERT:
    return "UPSERT";
  default:
    return "";
  }
}

} // namespace ChangeActionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
