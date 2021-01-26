/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
