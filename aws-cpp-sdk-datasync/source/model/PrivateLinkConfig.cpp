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

#include <aws/datasync/model/PrivateLinkConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

PrivateLinkConfig::PrivateLinkConfig() : 
    m_privateLinkEndpointHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false)
{
}

PrivateLinkConfig::PrivateLinkConfig(JsonView jsonValue) : 
    m_privateLinkEndpointHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateLinkConfig& PrivateLinkConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrivateLinkEndpoint"))
  {
    m_privateLinkEndpoint = jsonValue.GetString("PrivateLinkEndpoint");

    m_privateLinkEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetArns"))
  {
    Array<JsonView> subnetArnsJsonList = jsonValue.GetArray("SubnetArns");
    for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
    {
      m_subnetArns.push_back(subnetArnsJsonList[subnetArnsIndex].AsString());
    }
    m_subnetArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupArns"))
  {
    Array<JsonView> securityGroupArnsJsonList = jsonValue.GetArray("SecurityGroupArns");
    for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
    {
      m_securityGroupArns.push_back(securityGroupArnsJsonList[securityGroupArnsIndex].AsString());
    }
    m_securityGroupArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateLinkConfig::Jsonize() const
{
  JsonValue payload;

  if(m_privateLinkEndpointHasBeenSet)
  {
   payload.WithString("PrivateLinkEndpoint", m_privateLinkEndpoint);

  }

  if(m_subnetArnsHasBeenSet)
  {
   Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
   for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
   {
     subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
   }
   payload.WithArray("SubnetArns", std::move(subnetArnsJsonList));

  }

  if(m_securityGroupArnsHasBeenSet)
  {
   Array<JsonValue> securityGroupArnsJsonList(m_securityGroupArns.size());
   for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
   {
     securityGroupArnsJsonList[securityGroupArnsIndex].AsString(m_securityGroupArns[securityGroupArnsIndex]);
   }
   payload.WithArray("SecurityGroupArns", std::move(securityGroupArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
