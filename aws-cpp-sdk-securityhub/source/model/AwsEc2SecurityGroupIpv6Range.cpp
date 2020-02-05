/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/securityhub/model/AwsEc2SecurityGroupIpv6Range.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2SecurityGroupIpv6Range::AwsEc2SecurityGroupIpv6Range() : 
    m_cidrIpv6HasBeenSet(false)
{
}

AwsEc2SecurityGroupIpv6Range::AwsEc2SecurityGroupIpv6Range(JsonView jsonValue) : 
    m_cidrIpv6HasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupIpv6Range& AwsEc2SecurityGroupIpv6Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrIpv6"))
  {
    m_cidrIpv6 = jsonValue.GetString("CidrIpv6");

    m_cidrIpv6HasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupIpv6Range::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpv6HasBeenSet)
  {
   payload.WithString("CidrIpv6", m_cidrIpv6);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
