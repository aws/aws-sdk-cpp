/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceAttachmentConfiguration.h>
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

ConfluenceAttachmentConfiguration::ConfluenceAttachmentConfiguration() : 
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false)
{
}

ConfluenceAttachmentConfiguration::ConfluenceAttachmentConfiguration(JsonView jsonValue) : 
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_attachmentFieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluenceAttachmentConfiguration& ConfluenceAttachmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlAttachments"))
  {
    m_crawlAttachments = jsonValue.GetBool("CrawlAttachments");

    m_crawlAttachmentsHasBeenSet = true;
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

  return *this;
}

JsonValue ConfluenceAttachmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlAttachmentsHasBeenSet)
  {
   payload.WithBool("CrawlAttachments", m_crawlAttachments);

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

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
