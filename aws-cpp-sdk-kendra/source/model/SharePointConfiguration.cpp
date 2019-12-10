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

#include <aws/kendra/model/SharePointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SharePointConfiguration::SharePointConfiguration() : 
    m_sharePointVersion(SharePointVersion::NOT_SET),
    m_sharePointVersionHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false)
{
}

SharePointConfiguration::SharePointConfiguration(JsonView jsonValue) : 
    m_sharePointVersion(SharePointVersion::NOT_SET),
    m_sharePointVersionHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

SharePointConfiguration& SharePointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharePointVersion"))
  {
    m_sharePointVersion = SharePointVersionMapper::GetSharePointVersionForName(jsonValue.GetString("SharePointVersion"));

    m_sharePointVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Urls"))
  {
    Array<JsonView> urlsJsonList = jsonValue.GetArray("Urls");
    for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
    {
      m_urls.push_back(urlsJsonList[urlsIndex].AsString());
    }
    m_urlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlAttachments"))
  {
    m_crawlAttachments = jsonValue.GetBool("CrawlAttachments");

    m_crawlAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldMappings"))
  {
    Array<JsonView> fieldMappingsJsonList = jsonValue.GetArray("FieldMappings");
    for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
    {
      m_fieldMappings.push_back(fieldMappingsJsonList[fieldMappingsIndex].AsObject());
    }
    m_fieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentTitleFieldName"))
  {
    m_documentTitleFieldName = jsonValue.GetString("DocumentTitleFieldName");

    m_documentTitleFieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SharePointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sharePointVersionHasBeenSet)
  {
   payload.WithString("SharePointVersion", SharePointVersionMapper::GetNameForSharePointVersion(m_sharePointVersion));
  }

  if(m_urlsHasBeenSet)
  {
   Array<JsonValue> urlsJsonList(m_urls.size());
   for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
   {
     urlsJsonList[urlsIndex].AsString(m_urls[urlsIndex]);
   }
   payload.WithArray("Urls", std::move(urlsJsonList));

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_crawlAttachmentsHasBeenSet)
  {
   payload.WithBool("CrawlAttachments", m_crawlAttachments);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_fieldMappingsHasBeenSet)
  {
   Array<JsonValue> fieldMappingsJsonList(m_fieldMappings.size());
   for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
   {
     fieldMappingsJsonList[fieldMappingsIndex].AsObject(m_fieldMappings[fieldMappingsIndex].Jsonize());
   }
   payload.WithArray("FieldMappings", std::move(fieldMappingsJsonList));

  }

  if(m_documentTitleFieldNameHasBeenSet)
  {
   payload.WithString("DocumentTitleFieldName", m_documentTitleFieldName);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
