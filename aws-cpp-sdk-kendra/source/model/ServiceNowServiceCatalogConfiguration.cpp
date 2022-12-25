/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ServiceNowServiceCatalogConfiguration.h>
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

ServiceNowServiceCatalogConfiguration::ServiceNowServiceCatalogConfiguration() : 
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_includeAttachmentFilePatternsHasBeenSet(false),
    m_excludeAttachmentFilePatternsHasBeenSet(false),
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
}

ServiceNowServiceCatalogConfiguration::ServiceNowServiceCatalogConfiguration(JsonView jsonValue) : 
    m_crawlAttachments(false),
    m_crawlAttachmentsHasBeenSet(false),
    m_includeAttachmentFilePatternsHasBeenSet(false),
    m_excludeAttachmentFilePatternsHasBeenSet(false),
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNowServiceCatalogConfiguration& ServiceNowServiceCatalogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlAttachments"))
  {
    m_crawlAttachments = jsonValue.GetBool("CrawlAttachments");

    m_crawlAttachmentsHasBeenSet = true;
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

  if(jsonValue.ValueExists("DocumentDataFieldName"))
  {
    m_documentDataFieldName = jsonValue.GetString("DocumentDataFieldName");

    m_documentDataFieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentTitleFieldName"))
  {
    m_documentTitleFieldName = jsonValue.GetString("DocumentTitleFieldName");

    m_documentTitleFieldNameHasBeenSet = true;
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

  return *this;
}

JsonValue ServiceNowServiceCatalogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlAttachmentsHasBeenSet)
  {
   payload.WithBool("CrawlAttachments", m_crawlAttachments);

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

  if(m_documentDataFieldNameHasBeenSet)
  {
   payload.WithString("DocumentDataFieldName", m_documentDataFieldName);

  }

  if(m_documentTitleFieldNameHasBeenSet)
  {
   payload.WithString("DocumentTitleFieldName", m_documentTitleFieldName);

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

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
