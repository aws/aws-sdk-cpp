/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryConnectSettings.h>
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

DirectoryConnectSettings::DirectoryConnectSettings() : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customerDnsIpsHasBeenSet(false),
    m_customerUserNameHasBeenSet(false)
{
}

DirectoryConnectSettings::DirectoryConnectSettings(JsonView jsonValue) : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customerDnsIpsHasBeenSet(false),
    m_customerUserNameHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryConnectSettings& DirectoryConnectSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerDnsIps"))
  {
    Aws::Utils::Array<JsonView> customerDnsIpsJsonList = jsonValue.GetArray("CustomerDnsIps");
    for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
    {
      m_customerDnsIps.push_back(customerDnsIpsJsonList[customerDnsIpsIndex].AsString());
    }
    m_customerDnsIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerUserName"))
  {
    m_customerUserName = jsonValue.GetString("CustomerUserName");

    m_customerUserNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryConnectSettings::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_customerDnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerDnsIpsJsonList(m_customerDnsIps.size());
   for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
   {
     customerDnsIpsJsonList[customerDnsIpsIndex].AsString(m_customerDnsIps[customerDnsIpsIndex]);
   }
   payload.WithArray("CustomerDnsIps", std::move(customerDnsIpsJsonList));

  }

  if(m_customerUserNameHasBeenSet)
  {
   payload.WithString("CustomerUserName", m_customerUserName);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
