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
#include <aws/email/model/IdentityType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int EmailAddress_HASH = HashingUtils::HashString("EmailAddress");
static const int Domain_HASH = HashingUtils::HashString("Domain");

namespace Aws
{
namespace SES
{
namespace Model
{
namespace IdentityTypeMapper
{
IdentityType GetIdentityTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == EmailAddress_HASH)
  {
    return IdentityType::EmailAddress;
  }
  else if (hashCode == Domain_HASH)
  {
    return IdentityType::Domain;
  }

  return IdentityType::EmailAddress;
}

Aws::String GetNameForIdentityType(IdentityType value)
{
  switch(value)
  {
  case IdentityType::EmailAddress:
    return "EmailAddress";
  case IdentityType::Domain:
    return "Domain";
  default:
    return "EmailAddress";
  }
}

} // namespace IdentityTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
