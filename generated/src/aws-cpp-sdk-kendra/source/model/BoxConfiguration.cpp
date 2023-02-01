/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BoxConfiguration.h>
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

BoxConfiguration::BoxConfiguration() : 
    m_enterpriseIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_crawlTasks(false),
    m_crawlTasksHasBeenSet(false),
    m_crawlWebLinks(false),
    m_crawlWebLinksHasBeenSet(false),
    m_fileFieldMappingsHasBeenSet(false),
    m_taskFieldMappingsHasBeenSet(false),
    m_commentFieldMappingsHasBeenSet(false),
    m_webLinkFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

BoxConfiguration::BoxConfiguration(JsonView jsonValue) : 
    m_enterpriseIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_crawlTasks(false),
    m_crawlTasksHasBeenSet(false),
    m_crawlWebLinks(false),
    m_crawlWebLinksHasBeenSet(false),
    m_fileFieldMappingsHasBeenSet(false),
    m_taskFieldMappingsHasBeenSet(false),
    m_commentFieldMappingsHasBeenSet(false),
    m_webLinkFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

BoxConfiguration& BoxConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnterpriseId"))
  {
    m_enterpriseId = jsonValue.GetString("EnterpriseId");

    m_enterpriseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseChangeLog"))
  {
    m_useChangeLog = jsonValue.GetBool("UseChangeLog");

    m_useChangeLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlComments"))
  {
    m_crawlComments = jsonValue.GetBool("CrawlComments");

    m_crawlCommentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlTasks"))
  {
    m_crawlTasks = jsonValue.GetBool("CrawlTasks");

    m_crawlTasksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlWebLinks"))
  {
    m_crawlWebLinks = jsonValue.GetBool("CrawlWebLinks");

    m_crawlWebLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileFieldMappings"))
  {
    Aws::Utils::Array<JsonView> fileFieldMappingsJsonList = jsonValue.GetArray("FileFieldMappings");
    for(unsigned fileFieldMappingsIndex = 0; fileFieldMappingsIndex < fileFieldMappingsJsonList.GetLength(); ++fileFieldMappingsIndex)
    {
      m_fileFieldMappings.push_back(fileFieldMappingsJsonList[fileFieldMappingsIndex].AsObject());
    }
    m_fileFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskFieldMappings"))
  {
    Aws::Utils::Array<JsonView> taskFieldMappingsJsonList = jsonValue.GetArray("TaskFieldMappings");
    for(unsigned taskFieldMappingsIndex = 0; taskFieldMappingsIndex < taskFieldMappingsJsonList.GetLength(); ++taskFieldMappingsIndex)
    {
      m_taskFieldMappings.push_back(taskFieldMappingsJsonList[taskFieldMappingsIndex].AsObject());
    }
    m_taskFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommentFieldMappings"))
  {
    Aws::Utils::Array<JsonView> commentFieldMappingsJsonList = jsonValue.GetArray("CommentFieldMappings");
    for(unsigned commentFieldMappingsIndex = 0; commentFieldMappingsIndex < commentFieldMappingsJsonList.GetLength(); ++commentFieldMappingsIndex)
    {
      m_commentFieldMappings.push_back(commentFieldMappingsJsonList[commentFieldMappingsIndex].AsObject());
    }
    m_commentFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebLinkFieldMappings"))
  {
    Aws::Utils::Array<JsonView> webLinkFieldMappingsJsonList = jsonValue.GetArray("WebLinkFieldMappings");
    for(unsigned webLinkFieldMappingsIndex = 0; webLinkFieldMappingsIndex < webLinkFieldMappingsJsonList.GetLength(); ++webLinkFieldMappingsIndex)
    {
      m_webLinkFieldMappings.push_back(webLinkFieldMappingsJsonList[webLinkFieldMappingsIndex].AsObject());
    }
    m_webLinkFieldMappingsHasBeenSet = true;
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

JsonValue BoxConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enterpriseIdHasBeenSet)
  {
   payload.WithString("EnterpriseId", m_enterpriseId);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_useChangeLogHasBeenSet)
  {
   payload.WithBool("UseChangeLog", m_useChangeLog);

  }

  if(m_crawlCommentsHasBeenSet)
  {
   payload.WithBool("CrawlComments", m_crawlComments);

  }

  if(m_crawlTasksHasBeenSet)
  {
   payload.WithBool("CrawlTasks", m_crawlTasks);

  }

  if(m_crawlWebLinksHasBeenSet)
  {
   payload.WithBool("CrawlWebLinks", m_crawlWebLinks);

  }

  if(m_fileFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileFieldMappingsJsonList(m_fileFieldMappings.size());
   for(unsigned fileFieldMappingsIndex = 0; fileFieldMappingsIndex < fileFieldMappingsJsonList.GetLength(); ++fileFieldMappingsIndex)
   {
     fileFieldMappingsJsonList[fileFieldMappingsIndex].AsObject(m_fileFieldMappings[fileFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("FileFieldMappings", std::move(fileFieldMappingsJsonList));

  }

  if(m_taskFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskFieldMappingsJsonList(m_taskFieldMappings.size());
   for(unsigned taskFieldMappingsIndex = 0; taskFieldMappingsIndex < taskFieldMappingsJsonList.GetLength(); ++taskFieldMappingsIndex)
   {
     taskFieldMappingsJsonList[taskFieldMappingsIndex].AsObject(m_taskFieldMappings[taskFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("TaskFieldMappings", std::move(taskFieldMappingsJsonList));

  }

  if(m_commentFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commentFieldMappingsJsonList(m_commentFieldMappings.size());
   for(unsigned commentFieldMappingsIndex = 0; commentFieldMappingsIndex < commentFieldMappingsJsonList.GetLength(); ++commentFieldMappingsIndex)
   {
     commentFieldMappingsJsonList[commentFieldMappingsIndex].AsObject(m_commentFieldMappings[commentFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("CommentFieldMappings", std::move(commentFieldMappingsJsonList));

  }

  if(m_webLinkFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> webLinkFieldMappingsJsonList(m_webLinkFieldMappings.size());
   for(unsigned webLinkFieldMappingsIndex = 0; webLinkFieldMappingsIndex < webLinkFieldMappingsJsonList.GetLength(); ++webLinkFieldMappingsIndex)
   {
     webLinkFieldMappingsJsonList[webLinkFieldMappingsIndex].AsObject(m_webLinkFieldMappings[webLinkFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("WebLinkFieldMappings", std::move(webLinkFieldMappingsJsonList));

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
