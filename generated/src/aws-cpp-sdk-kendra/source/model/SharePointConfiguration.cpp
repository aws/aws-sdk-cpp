/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_disableLocalGroups(false),
    m_disableLocalGroupsHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false),
    m_authenticationType(SharePointOnlineAuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false)
{
}

SharePointConfiguration::SharePointConfiguration(JsonView jsonValue) : 
    m_sharePointVersion(SharePointVersion::NOT_SET),
    m_sharePointVersionHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_disableLocalGroups(false),
    m_disableLocalGroupsHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false),
    m_authenticationType(SharePointOnlineAuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> urlsJsonList = jsonValue.GetArray("Urls");
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

  if(jsonValue.ValueExists("UseChangeLog"))
  {
    m_useChangeLog = jsonValue.GetBool("UseChangeLog");

    m_useChangeLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionPatternsJsonList = jsonValue.GetArray("InclusionPatterns");
    for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
    {
      m_inclusionPatterns.push_back(inclusionPatternsJsonList[inclusionPatternsIndex].AsString());
    }
    m_inclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
    for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
    {
      m_exclusionPatterns.push_back(exclusionPatternsJsonList[exclusionPatternsIndex].AsString());
    }
    m_exclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldMappings"))
  {
    Aws::Utils::Array<JsonView> fieldMappingsJsonList = jsonValue.GetArray("FieldMappings");
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

  if(jsonValue.ValueExists("DisableLocalGroups"))
  {
    m_disableLocalGroups = jsonValue.GetBool("DisableLocalGroups");

    m_disableLocalGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslCertificateS3Path"))
  {
    m_sslCertificateS3Path = jsonValue.GetObject("SslCertificateS3Path");

    m_sslCertificateS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = SharePointOnlineAuthenticationTypeMapper::GetSharePointOnlineAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyConfiguration"))
  {
    m_proxyConfiguration = jsonValue.GetObject("ProxyConfiguration");

    m_proxyConfigurationHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> urlsJsonList(m_urls.size());
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

  if(m_useChangeLogHasBeenSet)
  {
   payload.WithBool("UseChangeLog", m_useChangeLog);

  }

  if(m_inclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionPatternsJsonList(m_inclusionPatterns.size());
   for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
   {
     inclusionPatternsJsonList[inclusionPatternsIndex].AsString(m_inclusionPatterns[inclusionPatternsIndex]);
   }
   payload.WithArray("InclusionPatterns", std::move(inclusionPatternsJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
   for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
   {
     exclusionPatternsJsonList[exclusionPatternsIndex].AsString(m_exclusionPatterns[exclusionPatternsIndex]);
   }
   payload.WithArray("ExclusionPatterns", std::move(exclusionPatternsJsonList));

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_fieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldMappingsJsonList(m_fieldMappings.size());
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

  if(m_disableLocalGroupsHasBeenSet)
  {
   payload.WithBool("DisableLocalGroups", m_disableLocalGroups);

  }

  if(m_sslCertificateS3PathHasBeenSet)
  {
   payload.WithObject("SslCertificateS3Path", m_sslCertificateS3Path.Jsonize());

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", SharePointOnlineAuthenticationTypeMapper::GetNameForSharePointOnlineAuthenticationType(m_authenticationType));
  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("ProxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
