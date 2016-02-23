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
#include <aws/cloudformation/model/OnFailure.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int DO_NOTHING_HASH = HashingUtils::HashString("DO_NOTHING");
static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
namespace OnFailureMapper
{


OnFailure GetOnFailureForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DO_NOTHING_HASH)
  {
     return OnFailure::DO_NOTHING;
  }
  else if (hashCode == ROLLBACK_HASH)
  {
     return OnFailure::ROLLBACK;
  }
  else if (hashCode == DELETE__HASH)
  {
     return OnFailure::DELETE_;
  }
  return OnFailure::NOT_SET;
}

Aws::String GetNameForOnFailure(OnFailure enumValue)
{
  switch(value)
  {
  case OnFailure::DO_NOTHING:
    return "DO_NOTHING";
  case OnFailure::ROLLBACK:
    return "ROLLBACK";
  case OnFailure::DELETE_:
    return "DELETE";
  default:
    return "";
  }
}

} // namespace OnFailureMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
