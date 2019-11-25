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

#include <aws/kinesisanalyticsv2/model/VpcConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

VpcConfigurationUpdate::VpcConfigurationUpdate() : 
    m_vpcConfigurationIdHasBeenSet(false),
    m_subnetIdUpdatesHasBeenSet(false),
    m_securityGroupIdUpdatesHasBeenSet(false)
{
}

VpcConfigurationUpdate::VpcConfigurationUpdate(JsonView jsonValue) : 
    m_vpcConfigurationIdHasBeenSet(false),
    m_subnetIdUpdatesHasBeenSet(false),
    m_securityGroupIdUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConfigurationUpdate& VpcConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcConfigurationId"))
  {
    m_vpcConfigurationId = jsonValue.GetString("VpcConfigurationId");

    m_vpcConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIdUpdates"))
  {
    Array<JsonView> subnetIdUpdatesJsonList = jsonValue.GetArray("SubnetIdUpdates");
    for(unsigned subnetIdUpdatesIndex = 0; subnetIdUpdatesIndex < subnetIdUpdatesJsonList.GetLength(); ++subnetIdUpdatesIndex)
    {
      m_subnetIdUpdates.push_back(subnetIdUpdatesJsonList[subnetIdUpdatesIndex].AsString());
    }
    m_subnetIdUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIdUpdates"))
  {
    Array<JsonView> securityGroupIdUpdatesJsonList = jsonValue.GetArray("SecurityGroupIdUpdates");
    for(unsigned securityGroupIdUpdatesIndex = 0; securityGroupIdUpdatesIndex < securityGroupIdUpdatesJsonList.GetLength(); ++securityGroupIdUpdatesIndex)
    {
      m_securityGroupIdUpdates.push_back(securityGroupIdUpdatesJsonList[securityGroupIdUpdatesIndex].AsString());
    }
    m_securityGroupIdUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConfigurationIdHasBeenSet)
  {
   payload.WithString("VpcConfigurationId", m_vpcConfigurationId);

  }

  if(m_subnetIdUpdatesHasBeenSet)
  {
   Array<JsonValue> subnetIdUpdatesJsonList(m_subnetIdUpdates.size());
   for(unsigned subnetIdUpdatesIndex = 0; subnetIdUpdatesIndex < subnetIdUpdatesJsonList.GetLength(); ++subnetIdUpdatesIndex)
   {
     subnetIdUpdatesJsonList[subnetIdUpdatesIndex].AsString(m_subnetIdUpdates[subnetIdUpdatesIndex]);
   }
   payload.WithArray("SubnetIdUpdates", std::move(subnetIdUpdatesJsonList));

  }

  if(m_securityGroupIdUpdatesHasBeenSet)
  {
   Array<JsonValue> securityGroupIdUpdatesJsonList(m_securityGroupIdUpdates.size());
   for(unsigned securityGroupIdUpdatesIndex = 0; securityGroupIdUpdatesIndex < securityGroupIdUpdatesJsonList.GetLength(); ++securityGroupIdUpdatesIndex)
   {
     securityGroupIdUpdatesJsonList[securityGroupIdUpdatesIndex].AsString(m_securityGroupIdUpdates[securityGroupIdUpdatesIndex]);
   }
   payload.WithArray("SecurityGroupIdUpdates", std::move(securityGroupIdUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
