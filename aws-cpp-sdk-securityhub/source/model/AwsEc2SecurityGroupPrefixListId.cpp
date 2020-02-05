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

#include <aws/securityhub/model/AwsEc2SecurityGroupPrefixListId.h>
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

AwsEc2SecurityGroupPrefixListId::AwsEc2SecurityGroupPrefixListId() : 
    m_prefixListIdHasBeenSet(false)
{
}

AwsEc2SecurityGroupPrefixListId::AwsEc2SecurityGroupPrefixListId(JsonView jsonValue) : 
    m_prefixListIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupPrefixListId& AwsEc2SecurityGroupPrefixListId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrefixListId"))
  {
    m_prefixListId = jsonValue.GetString("PrefixListId");

    m_prefixListIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupPrefixListId::Jsonize() const
{
  JsonValue payload;

  if(m_prefixListIdHasBeenSet)
  {
   payload.WithString("PrefixListId", m_prefixListId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
