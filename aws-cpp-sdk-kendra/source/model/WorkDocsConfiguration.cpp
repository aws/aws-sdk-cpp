/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/WorkDocsConfiguration.h>
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

WorkDocsConfiguration::WorkDocsConfiguration() : 
    m_organizationIdHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
}

WorkDocsConfiguration::WorkDocsConfiguration(JsonView jsonValue) : 
    m_organizationIdHasBeenSet(false),
    m_crawlComments(false),
    m_crawlCommentsHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkDocsConfiguration& WorkDocsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

    m_organizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlComments"))
  {
    m_crawlComments = jsonValue.GetBool("CrawlComments");

    m_crawlCommentsHasBeenSet = true;
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

JsonValue WorkDocsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_crawlCommentsHasBeenSet)
  {
   payload.WithBool("CrawlComments", m_crawlComments);

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
