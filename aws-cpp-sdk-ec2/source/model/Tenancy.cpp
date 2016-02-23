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
#include <aws/ec2/model/Tenancy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int default__HASH = HashingUtils::HashString("default");
static const int dedicated_HASH = HashingUtils::HashString("dedicated");
static const int host_HASH = HashingUtils::HashString("host");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace TenancyMapper
{


Tenancy GetTenancyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == default__HASH)
  {
     return Tenancy::default_;
  }
  else if (hashCode == dedicated_HASH)
  {
     return Tenancy::dedicated;
  }
  else if (hashCode == host_HASH)
  {
     return Tenancy::host;
  }
  return Tenancy::NOT_SET;
}

Aws::String GetNameForTenancy(Tenancy enumValue)
{
  switch(enumValue)
  {
  case Tenancy::default_:
    return "default";
  case Tenancy::dedicated:
    return "dedicated";
  case Tenancy::host:
    return "host";
  default:
    return "";
  }
}

} // namespace TenancyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
