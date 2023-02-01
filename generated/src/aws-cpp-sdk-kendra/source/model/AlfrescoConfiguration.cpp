/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AlfrescoConfiguration.h>
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

AlfrescoConfiguration::AlfrescoConfiguration() : 
    m_siteUrlHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false),
    m_crawlSystemFolders(false),
    m_crawlSystemFoldersHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_entityFilterHasBeenSet(false),
    m_documentLibraryFieldMappingsHasBeenSet(false),
    m_blogFieldMappingsHasBeenSet(false),
    m_wikiFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

AlfrescoConfiguration::AlfrescoConfiguration(JsonView jsonValue) : 
    m_siteUrlHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false),
    m_crawlSystemFolders(false),
    m_crawlSystemFoldersHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_entityFilterHasBeenSet(false),
    m_documentLibraryFieldMappingsHasBeenSet(false),
    m_blogFieldMappingsHasBeenSet(false),
    m_wikiFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AlfrescoConfiguration& AlfrescoConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SiteUrl"))
  {
    m_siteUrl = jsonValue.GetString("SiteUrl");

    m_siteUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SiteId"))
  {
    m_siteId = jsonValue.GetString("SiteId");

    m_siteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslCertificateS3Path"))
  {
    m_sslCertificateS3Path = jsonValue.GetObject("SslCertificateS3Path");

    m_sslCertificateS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlSystemFolders"))
  {
    m_crawlSystemFolders = jsonValue.GetBool("CrawlSystemFolders");

    m_crawlSystemFoldersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlComments"))
  {
    m_crawlComments = jsonValue.GetBool("CrawlComments");

    m_crawlCommentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityFilter"))
  {
    Aws::Utils::Array<JsonView> entityFilterJsonList = jsonValue.GetArray("EntityFilter");
    for(unsigned entityFilterIndex = 0; entityFilterIndex < entityFilterJsonList.GetLength(); ++entityFilterIndex)
    {
      m_entityFilter.push_back(AlfrescoEntityMapper::GetAlfrescoEntityForName(entityFilterJsonList[entityFilterIndex].AsString()));
    }
    m_entityFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentLibraryFieldMappings"))
  {
    Aws::Utils::Array<JsonView> documentLibraryFieldMappingsJsonList = jsonValue.GetArray("DocumentLibraryFieldMappings");
    for(unsigned documentLibraryFieldMappingsIndex = 0; documentLibraryFieldMappingsIndex < documentLibraryFieldMappingsJsonList.GetLength(); ++documentLibraryFieldMappingsIndex)
    {
      m_documentLibraryFieldMappings.push_back(documentLibraryFieldMappingsJsonList[documentLibraryFieldMappingsIndex].AsObject());
    }
    m_documentLibraryFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlogFieldMappings"))
  {
    Aws::Utils::Array<JsonView> blogFieldMappingsJsonList = jsonValue.GetArray("BlogFieldMappings");
    for(unsigned blogFieldMappingsIndex = 0; blogFieldMappingsIndex < blogFieldMappingsJsonList.GetLength(); ++blogFieldMappingsIndex)
    {
      m_blogFieldMappings.push_back(blogFieldMappingsJsonList[blogFieldMappingsIndex].AsObject());
    }
    m_blogFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WikiFieldMappings"))
  {
    Aws::Utils::Array<JsonView> wikiFieldMappingsJsonList = jsonValue.GetArray("WikiFieldMappings");
    for(unsigned wikiFieldMappingsIndex = 0; wikiFieldMappingsIndex < wikiFieldMappingsJsonList.GetLength(); ++wikiFieldMappingsIndex)
    {
      m_wikiFieldMappings.push_back(wikiFieldMappingsJsonList[wikiFieldMappingsIndex].AsObject());
    }
    m_wikiFieldMappingsHasBeenSet = true;
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

  return *this;
}

JsonValue AlfrescoConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_siteUrlHasBeenSet)
  {
   payload.WithString("SiteUrl", m_siteUrl);

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_sslCertificateS3PathHasBeenSet)
  {
   payload.WithObject("SslCertificateS3Path", m_sslCertificateS3Path.Jsonize());

  }

  if(m_crawlSystemFoldersHasBeenSet)
  {
   payload.WithBool("CrawlSystemFolders", m_crawlSystemFolders);

  }

  if(m_crawlCommentsHasBeenSet)
  {
   payload.WithBool("CrawlComments", m_crawlComments);

  }

  if(m_entityFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityFilterJsonList(m_entityFilter.size());
   for(unsigned entityFilterIndex = 0; entityFilterIndex < entityFilterJsonList.GetLength(); ++entityFilterIndex)
   {
     entityFilterJsonList[entityFilterIndex].AsString(AlfrescoEntityMapper::GetNameForAlfrescoEntity(m_entityFilter[entityFilterIndex]));
   }
   payload.WithArray("EntityFilter", std::move(entityFilterJsonList));

  }

  if(m_documentLibraryFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentLibraryFieldMappingsJsonList(m_documentLibraryFieldMappings.size());
   for(unsigned documentLibraryFieldMappingsIndex = 0; documentLibraryFieldMappingsIndex < documentLibraryFieldMappingsJsonList.GetLength(); ++documentLibraryFieldMappingsIndex)
   {
     documentLibraryFieldMappingsJsonList[documentLibraryFieldMappingsIndex].AsObject(m_documentLibraryFieldMappings[documentLibraryFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("DocumentLibraryFieldMappings", std::move(documentLibraryFieldMappingsJsonList));

  }

  if(m_blogFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blogFieldMappingsJsonList(m_blogFieldMappings.size());
   for(unsigned blogFieldMappingsIndex = 0; blogFieldMappingsIndex < blogFieldMappingsJsonList.GetLength(); ++blogFieldMappingsIndex)
   {
     blogFieldMappingsJsonList[blogFieldMappingsIndex].AsObject(m_blogFieldMappings[blogFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("BlogFieldMappings", std::move(blogFieldMappingsJsonList));

  }

  if(m_wikiFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wikiFieldMappingsJsonList(m_wikiFieldMappings.size());
   for(unsigned wikiFieldMappingsIndex = 0; wikiFieldMappingsIndex < wikiFieldMappingsJsonList.GetLength(); ++wikiFieldMappingsIndex)
   {
     wikiFieldMappingsJsonList[wikiFieldMappingsIndex].AsObject(m_wikiFieldMappings[wikiFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("WikiFieldMappings", std::move(wikiFieldMappingsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
