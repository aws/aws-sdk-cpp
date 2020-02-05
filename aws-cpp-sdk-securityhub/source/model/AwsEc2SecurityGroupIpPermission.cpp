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

#include <aws/securityhub/model/AwsEc2SecurityGroupIpPermission.h>
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

AwsEc2SecurityGroupIpPermission::AwsEc2SecurityGroupIpPermission() : 
    m_ipProtocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ipv6RangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false)
{
}

AwsEc2SecurityGroupIpPermission::AwsEc2SecurityGroupIpPermission(JsonView jsonValue) : 
    m_ipProtocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ipv6RangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SecurityGroupIpPermission& AwsEc2SecurityGroupIpPermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpProtocol"))
  {
    m_ipProtocol = jsonValue.GetString("IpProtocol");

    m_ipProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromPort"))
  {
    m_fromPort = jsonValue.GetInteger("FromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToPort"))
  {
    m_toPort = jsonValue.GetInteger("ToPort");

    m_toPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserIdGroupPairs"))
  {
    Array<JsonView> userIdGroupPairsJsonList = jsonValue.GetArray("UserIdGroupPairs");
    for(unsigned userIdGroupPairsIndex = 0; userIdGroupPairsIndex < userIdGroupPairsJsonList.GetLength(); ++userIdGroupPairsIndex)
    {
      m_userIdGroupPairs.push_back(userIdGroupPairsJsonList[userIdGroupPairsIndex].AsObject());
    }
    m_userIdGroupPairsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRanges"))
  {
    Array<JsonView> ipRangesJsonList = jsonValue.GetArray("IpRanges");
    for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
    {
      m_ipRanges.push_back(ipRangesJsonList[ipRangesIndex].AsObject());
    }
    m_ipRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6Ranges"))
  {
    Array<JsonView> ipv6RangesJsonList = jsonValue.GetArray("Ipv6Ranges");
    for(unsigned ipv6RangesIndex = 0; ipv6RangesIndex < ipv6RangesJsonList.GetLength(); ++ipv6RangesIndex)
    {
      m_ipv6Ranges.push_back(ipv6RangesJsonList[ipv6RangesIndex].AsObject());
    }
    m_ipv6RangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrefixListIds"))
  {
    Array<JsonView> prefixListIdsJsonList = jsonValue.GetArray("PrefixListIds");
    for(unsigned prefixListIdsIndex = 0; prefixListIdsIndex < prefixListIdsJsonList.GetLength(); ++prefixListIdsIndex)
    {
      m_prefixListIds.push_back(prefixListIdsJsonList[prefixListIdsIndex].AsObject());
    }
    m_prefixListIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SecurityGroupIpPermission::Jsonize() const
{
  JsonValue payload;

  if(m_ipProtocolHasBeenSet)
  {
   payload.WithString("IpProtocol", m_ipProtocol);

  }

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("FromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("ToPort", m_toPort);

  }

  if(m_userIdGroupPairsHasBeenSet)
  {
   Array<JsonValue> userIdGroupPairsJsonList(m_userIdGroupPairs.size());
   for(unsigned userIdGroupPairsIndex = 0; userIdGroupPairsIndex < userIdGroupPairsJsonList.GetLength(); ++userIdGroupPairsIndex)
   {
     userIdGroupPairsJsonList[userIdGroupPairsIndex].AsObject(m_userIdGroupPairs[userIdGroupPairsIndex].Jsonize());
   }
   payload.WithArray("UserIdGroupPairs", std::move(userIdGroupPairsJsonList));

  }

  if(m_ipRangesHasBeenSet)
  {
   Array<JsonValue> ipRangesJsonList(m_ipRanges.size());
   for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
   {
     ipRangesJsonList[ipRangesIndex].AsObject(m_ipRanges[ipRangesIndex].Jsonize());
   }
   payload.WithArray("IpRanges", std::move(ipRangesJsonList));

  }

  if(m_ipv6RangesHasBeenSet)
  {
   Array<JsonValue> ipv6RangesJsonList(m_ipv6Ranges.size());
   for(unsigned ipv6RangesIndex = 0; ipv6RangesIndex < ipv6RangesJsonList.GetLength(); ++ipv6RangesIndex)
   {
     ipv6RangesJsonList[ipv6RangesIndex].AsObject(m_ipv6Ranges[ipv6RangesIndex].Jsonize());
   }
   payload.WithArray("Ipv6Ranges", std::move(ipv6RangesJsonList));

  }

  if(m_prefixListIdsHasBeenSet)
  {
   Array<JsonValue> prefixListIdsJsonList(m_prefixListIds.size());
   for(unsigned prefixListIdsIndex = 0; prefixListIdsIndex < prefixListIdsJsonList.GetLength(); ++prefixListIdsIndex)
   {
     prefixListIdsJsonList[prefixListIdsIndex].AsObject(m_prefixListIds[prefixListIdsIndex].Jsonize());
   }
   payload.WithArray("PrefixListIds", std::move(prefixListIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
