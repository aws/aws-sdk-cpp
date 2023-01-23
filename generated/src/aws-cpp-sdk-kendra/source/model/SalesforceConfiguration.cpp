/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SalesforceConfiguration.h>
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

SalesforceConfiguration::SalesforceConfiguration() : 
    m_serverUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_standardObjectConfigurationsHasBeenSet(false),
    m_knowledgeArticleConfigurationHasBeenSet(false),
    m_chatterFeedConfigurationHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_standardObjectAttachmentConfigurationHasBeenSet(false),
    m_includeAttachmentFilePatternsHasBeenSet(false),
    m_excludeAttachmentFilePatternsHasBeenSet(false)
{
}

SalesforceConfiguration::SalesforceConfiguration(JsonView jsonValue) : 
    m_serverUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_standardObjectConfigurationsHasBeenSet(false),
    m_knowledgeArticleConfigurationHasBeenSet(false),
    m_chatterFeedConfigurationHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_standardObjectAttachmentConfigurationHasBeenSet(false),
    m_includeAttachmentFilePatternsHasBeenSet(false),
    m_excludeAttachmentFilePatternsHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceConfiguration& SalesforceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerUrl"))
  {
    m_serverUrl = jsonValue.GetString("ServerUrl");

    m_serverUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardObjectConfigurations"))
  {
    Aws::Utils::Array<JsonView> standardObjectConfigurationsJsonList = jsonValue.GetArray("StandardObjectConfigurations");
    for(unsigned standardObjectConfigurationsIndex = 0; standardObjectConfigurationsIndex < standardObjectConfigurationsJsonList.GetLength(); ++standardObjectConfigurationsIndex)
    {
      m_standardObjectConfigurations.push_back(standardObjectConfigurationsJsonList[standardObjectConfigurationsIndex].AsObject());
    }
    m_standardObjectConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KnowledgeArticleConfiguration"))
  {
    m_knowledgeArticleConfiguration = jsonValue.GetObject("KnowledgeArticleConfiguration");

    m_knowledgeArticleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChatterFeedConfiguration"))
  {
    m_chatterFeedConfiguration = jsonValue.GetObject("ChatterFeedConfiguration");

    m_chatterFeedConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlAttachments"))
  {
    m_crawlAttachments = jsonValue.GetBool("CrawlAttachments");

    m_crawlAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardObjectAttachmentConfiguration"))
  {
    m_standardObjectAttachmentConfiguration = jsonValue.GetObject("StandardObjectAttachmentConfiguration");

    m_standardObjectAttachmentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeAttachmentFilePatterns"))
  {
    Aws::Utils::Array<JsonView> includeAttachmentFilePatternsJsonList = jsonValue.GetArray("IncludeAttachmentFilePatterns");
    for(unsigned includeAttachmentFilePatternsIndex = 0; includeAttachmentFilePatternsIndex < includeAttachmentFilePatternsJsonList.GetLength(); ++includeAttachmentFilePatternsIndex)
    {
      m_includeAttachmentFilePatterns.push_back(includeAttachmentFilePatternsJsonList[includeAttachmentFilePatternsIndex].AsString());
    }
    m_includeAttachmentFilePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeAttachmentFilePatterns"))
  {
    Aws::Utils::Array<JsonView> excludeAttachmentFilePatternsJsonList = jsonValue.GetArray("ExcludeAttachmentFilePatterns");
    for(unsigned excludeAttachmentFilePatternsIndex = 0; excludeAttachmentFilePatternsIndex < excludeAttachmentFilePatternsJsonList.GetLength(); ++excludeAttachmentFilePatternsIndex)
    {
      m_excludeAttachmentFilePatterns.push_back(excludeAttachmentFilePatternsJsonList[excludeAttachmentFilePatternsIndex].AsString());
    }
    m_excludeAttachmentFilePatternsHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("ServerUrl", m_serverUrl);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_standardObjectConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardObjectConfigurationsJsonList(m_standardObjectConfigurations.size());
   for(unsigned standardObjectConfigurationsIndex = 0; standardObjectConfigurationsIndex < standardObjectConfigurationsJsonList.GetLength(); ++standardObjectConfigurationsIndex)
   {
     standardObjectConfigurationsJsonList[standardObjectConfigurationsIndex].AsObject(m_standardObjectConfigurations[standardObjectConfigurationsIndex].Jsonize());
   }
   payload.WithArray("StandardObjectConfigurations", std::move(standardObjectConfigurationsJsonList));

  }

  if(m_knowledgeArticleConfigurationHasBeenSet)
  {
   payload.WithObject("KnowledgeArticleConfiguration", m_knowledgeArticleConfiguration.Jsonize());

  }

  if(m_chatterFeedConfigurationHasBeenSet)
  {
   payload.WithObject("ChatterFeedConfiguration", m_chatterFeedConfiguration.Jsonize());

  }

  if(m_crawlAttachmentsHasBeenSet)
  {
   payload.WithBool("CrawlAttachments", m_crawlAttachments);

  }

  if(m_standardObjectAttachmentConfigurationHasBeenSet)
  {
   payload.WithObject("StandardObjectAttachmentConfiguration", m_standardObjectAttachmentConfiguration.Jsonize());

  }

  if(m_includeAttachmentFilePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeAttachmentFilePatternsJsonList(m_includeAttachmentFilePatterns.size());
   for(unsigned includeAttachmentFilePatternsIndex = 0; includeAttachmentFilePatternsIndex < includeAttachmentFilePatternsJsonList.GetLength(); ++includeAttachmentFilePatternsIndex)
   {
     includeAttachmentFilePatternsJsonList[includeAttachmentFilePatternsIndex].AsString(m_includeAttachmentFilePatterns[includeAttachmentFilePatternsIndex]);
   }
   payload.WithArray("IncludeAttachmentFilePatterns", std::move(includeAttachmentFilePatternsJsonList));

  }

  if(m_excludeAttachmentFilePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeAttachmentFilePatternsJsonList(m_excludeAttachmentFilePatterns.size());
   for(unsigned excludeAttachmentFilePatternsIndex = 0; excludeAttachmentFilePatternsIndex < excludeAttachmentFilePatternsJsonList.GetLength(); ++excludeAttachmentFilePatternsIndex)
   {
     excludeAttachmentFilePatternsJsonList[excludeAttachmentFilePatternsIndex].AsString(m_excludeAttachmentFilePatterns[excludeAttachmentFilePatternsIndex]);
   }
   payload.WithArray("ExcludeAttachmentFilePatterns", std::move(excludeAttachmentFilePatternsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
