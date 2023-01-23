/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QuipConfiguration.h>
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

QuipConfiguration::QuipConfiguration() : 
    m_domainHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_crawlFileComments(false),
    m_crawlFileCommentsHasBeenSet(false),
    m_crawlChatRooms(false),
    m_crawlChatRoomsHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_folderIdsHasBeenSet(false),
    m_threadFieldMappingsHasBeenSet(false),
    m_messageFieldMappingsHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

QuipConfiguration::QuipConfiguration(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_crawlFileComments(false),
    m_crawlFileCommentsHasBeenSet(false),
    m_crawlChatRooms(false),
    m_crawlChatRoomsHasBeenSet(false),
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_folderIdsHasBeenSet(false),
    m_threadFieldMappingsHasBeenSet(false),
    m_messageFieldMappingsHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

QuipConfiguration& QuipConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlFileComments"))
  {
    m_crawlFileComments = jsonValue.GetBool("CrawlFileComments");

    m_crawlFileCommentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlChatRooms"))
  {
    m_crawlChatRooms = jsonValue.GetBool("CrawlChatRooms");

    m_crawlChatRoomsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlAttachments"))
  {
    m_crawlAttachments = jsonValue.GetBool("CrawlAttachments");

    m_crawlAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FolderIds"))
  {
    Aws::Utils::Array<JsonView> folderIdsJsonList = jsonValue.GetArray("FolderIds");
    for(unsigned folderIdsIndex = 0; folderIdsIndex < folderIdsJsonList.GetLength(); ++folderIdsIndex)
    {
      m_folderIds.push_back(folderIdsJsonList[folderIdsIndex].AsString());
    }
    m_folderIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadFieldMappings"))
  {
    Aws::Utils::Array<JsonView> threadFieldMappingsJsonList = jsonValue.GetArray("ThreadFieldMappings");
    for(unsigned threadFieldMappingsIndex = 0; threadFieldMappingsIndex < threadFieldMappingsJsonList.GetLength(); ++threadFieldMappingsIndex)
    {
      m_threadFieldMappings.push_back(threadFieldMappingsJsonList[threadFieldMappingsIndex].AsObject());
    }
    m_threadFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageFieldMappings"))
  {
    Aws::Utils::Array<JsonView> messageFieldMappingsJsonList = jsonValue.GetArray("MessageFieldMappings");
    for(unsigned messageFieldMappingsIndex = 0; messageFieldMappingsIndex < messageFieldMappingsJsonList.GetLength(); ++messageFieldMappingsIndex)
    {
      m_messageFieldMappings.push_back(messageFieldMappingsJsonList[messageFieldMappingsIndex].AsObject());
    }
    m_messageFieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentFieldMappings"))
  {
    Aws::Utils::Array<JsonView> attachmentFieldMappingsJsonList = jsonValue.GetArray("AttachmentFieldMappings");
    for(unsigned attachmentFieldMappingsIndex = 0; attachmentFieldMappingsIndex < attachmentFieldMappingsJsonList.GetLength(); ++attachmentFieldMappingsIndex)
    {
      m_attachmentFieldMappings.push_back(attachmentFieldMappingsJsonList[attachmentFieldMappingsIndex].AsObject());
    }
    m_attachmentFieldMappingsHasBeenSet = true;
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

JsonValue QuipConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_crawlFileCommentsHasBeenSet)
  {
   payload.WithBool("CrawlFileComments", m_crawlFileComments);

  }

  if(m_crawlChatRoomsHasBeenSet)
  {
   payload.WithBool("CrawlChatRooms", m_crawlChatRooms);

  }

  if(m_crawlAttachmentsHasBeenSet)
  {
   payload.WithBool("CrawlAttachments", m_crawlAttachments);

  }

  if(m_folderIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderIdsJsonList(m_folderIds.size());
   for(unsigned folderIdsIndex = 0; folderIdsIndex < folderIdsJsonList.GetLength(); ++folderIdsIndex)
   {
     folderIdsJsonList[folderIdsIndex].AsString(m_folderIds[folderIdsIndex]);
   }
   payload.WithArray("FolderIds", std::move(folderIdsJsonList));

  }

  if(m_threadFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threadFieldMappingsJsonList(m_threadFieldMappings.size());
   for(unsigned threadFieldMappingsIndex = 0; threadFieldMappingsIndex < threadFieldMappingsJsonList.GetLength(); ++threadFieldMappingsIndex)
   {
     threadFieldMappingsJsonList[threadFieldMappingsIndex].AsObject(m_threadFieldMappings[threadFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("ThreadFieldMappings", std::move(threadFieldMappingsJsonList));

  }

  if(m_messageFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageFieldMappingsJsonList(m_messageFieldMappings.size());
   for(unsigned messageFieldMappingsIndex = 0; messageFieldMappingsIndex < messageFieldMappingsJsonList.GetLength(); ++messageFieldMappingsIndex)
   {
     messageFieldMappingsJsonList[messageFieldMappingsIndex].AsObject(m_messageFieldMappings[messageFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("MessageFieldMappings", std::move(messageFieldMappingsJsonList));

  }

  if(m_attachmentFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentFieldMappingsJsonList(m_attachmentFieldMappings.size());
   for(unsigned attachmentFieldMappingsIndex = 0; attachmentFieldMappingsIndex < attachmentFieldMappingsJsonList.GetLength(); ++attachmentFieldMappingsIndex)
   {
     attachmentFieldMappingsJsonList[attachmentFieldMappingsIndex].AsObject(m_attachmentFieldMappings[attachmentFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("AttachmentFieldMappings", std::move(attachmentFieldMappingsJsonList));

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
