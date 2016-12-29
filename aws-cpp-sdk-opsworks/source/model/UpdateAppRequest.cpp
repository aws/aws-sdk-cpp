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
#include <aws/opsworks/model/UpdateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppRequest::UpdateAppRequest() : 
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_type(AppType::NOT_SET),
    m_typeHasBeenSet(false),
    m_appSourceHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_enableSsl(false),
    m_enableSslHasBeenSet(false),
    m_sslConfigurationHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

Aws::String UpdateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("AppId", m_appId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dataSourcesHasBeenSet)
  {
   Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
   }
   payload.WithArray("DataSources", std::move(dataSourcesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AppTypeMapper::GetNameForAppType(m_type));
  }

  if(m_appSourceHasBeenSet)
  {
   payload.WithObject("AppSource", m_appSource.Jsonize());

  }

  if(m_domainsHasBeenSet)
  {
   Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  if(m_enableSslHasBeenSet)
  {
   payload.WithBool("EnableSsl", m_enableSsl);

  }

  if(m_sslConfigurationHasBeenSet)
  {
   payload.WithObject("SslConfiguration", m_sslConfiguration.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(AppAttributesKeysMapper::GetNameForAppAttributesKeys(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_environmentHasBeenSet)
  {
   Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("Environment", std::move(environmentJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateApp"));
  return headers;

}



