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

#include <aws/sagemaker/model/Workteam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Workteam::Workteam() : 
    m_workteamNameHasBeenSet(false),
    m_memberDefinitionsHasBeenSet(false),
    m_workteamArnHasBeenSet(false),
    m_productListingIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false)
{
}

Workteam::Workteam(JsonView jsonValue) : 
    m_workteamNameHasBeenSet(false),
    m_memberDefinitionsHasBeenSet(false),
    m_workteamArnHasBeenSet(false),
    m_productListingIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Workteam& Workteam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkteamName"))
  {
    m_workteamName = jsonValue.GetString("WorkteamName");

    m_workteamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberDefinitions"))
  {
    Array<JsonView> memberDefinitionsJsonList = jsonValue.GetArray("MemberDefinitions");
    for(unsigned memberDefinitionsIndex = 0; memberDefinitionsIndex < memberDefinitionsJsonList.GetLength(); ++memberDefinitionsIndex)
    {
      m_memberDefinitions.push_back(memberDefinitionsJsonList[memberDefinitionsIndex].AsObject());
    }
    m_memberDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkteamArn"))
  {
    m_workteamArn = jsonValue.GetString("WorkteamArn");

    m_workteamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductListingIds"))
  {
    Array<JsonView> productListingIdsJsonList = jsonValue.GetArray("ProductListingIds");
    for(unsigned productListingIdsIndex = 0; productListingIdsIndex < productListingIdsJsonList.GetLength(); ++productListingIdsIndex)
    {
      m_productListingIds.push_back(productListingIdsJsonList[productListingIdsIndex].AsString());
    }
    m_productListingIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubDomain"))
  {
    m_subDomain = jsonValue.GetString("SubDomain");

    m_subDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfiguration"))
  {
    m_notificationConfiguration = jsonValue.GetObject("NotificationConfiguration");

    m_notificationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Workteam::Jsonize() const
{
  JsonValue payload;

  if(m_workteamNameHasBeenSet)
  {
   payload.WithString("WorkteamName", m_workteamName);

  }

  if(m_memberDefinitionsHasBeenSet)
  {
   Array<JsonValue> memberDefinitionsJsonList(m_memberDefinitions.size());
   for(unsigned memberDefinitionsIndex = 0; memberDefinitionsIndex < memberDefinitionsJsonList.GetLength(); ++memberDefinitionsIndex)
   {
     memberDefinitionsJsonList[memberDefinitionsIndex].AsObject(m_memberDefinitions[memberDefinitionsIndex].Jsonize());
   }
   payload.WithArray("MemberDefinitions", std::move(memberDefinitionsJsonList));

  }

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_productListingIdsHasBeenSet)
  {
   Array<JsonValue> productListingIdsJsonList(m_productListingIds.size());
   for(unsigned productListingIdsIndex = 0; productListingIdsIndex < productListingIdsJsonList.GetLength(); ++productListingIdsIndex)
   {
     productListingIdsJsonList[productListingIdsIndex].AsString(m_productListingIds[productListingIdsIndex]);
   }
   payload.WithArray("ProductListingIds", std::move(productListingIdsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_subDomainHasBeenSet)
  {
   payload.WithString("SubDomain", m_subDomain);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
