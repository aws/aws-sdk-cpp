/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/AssessmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

AssessmentConfiguration::AssessmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AssessmentConfiguration& AssessmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerDnsIps"))
  {
    Aws::Utils::Array<JsonView> customerDnsIpsJsonList = jsonValue.GetArray("CustomerDnsIps");
    for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
    {
      m_customerDnsIps.push_back(customerDnsIpsJsonList[customerDnsIpsIndex].AsString());
    }
    m_customerDnsIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcSettings"))
  {
    m_vpcSettings = jsonValue.GetObject("VpcSettings");
    m_vpcSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customerDnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerDnsIpsJsonList(m_customerDnsIps.size());
   for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
   {
     customerDnsIpsJsonList[customerDnsIpsIndex].AsString(m_customerDnsIps[customerDnsIpsIndex]);
   }
   payload.WithArray("CustomerDnsIps", std::move(customerDnsIpsJsonList));

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_vpcSettingsHasBeenSet)
  {
   payload.WithObject("VpcSettings", m_vpcSettings.Jsonize());

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
