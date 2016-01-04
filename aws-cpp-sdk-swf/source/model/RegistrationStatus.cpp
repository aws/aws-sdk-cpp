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
#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace RegistrationStatusMapper
{
RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == REGISTERED_HASH)
  {
    return RegistrationStatus::REGISTERED;
  }
  else if (hashCode == DEPRECATED_HASH)
  {
    return RegistrationStatus::DEPRECATED;
  }

  return RegistrationStatus::NOT_SET;
}

Aws::String GetNameForRegistrationStatus(RegistrationStatus value)
{
  switch(value)
  {
  case RegistrationStatus::REGISTERED:
    return "REGISTERED";
  case RegistrationStatus::DEPRECATED:
    return "DEPRECATED";
  default:
    return "";
  }
}

} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
