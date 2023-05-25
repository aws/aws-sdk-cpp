/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SalesforceStandardKnowledgeArticleTypeConfiguration.h>
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

SalesforceStandardKnowledgeArticleTypeConfiguration::SalesforceStandardKnowledgeArticleTypeConfiguration() : 
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
}

SalesforceStandardKnowledgeArticleTypeConfiguration::SalesforceStandardKnowledgeArticleTypeConfiguration(JsonView jsonValue) : 
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceStandardKnowledgeArticleTypeConfiguration& SalesforceStandardKnowledgeArticleTypeConfiguration::operator =(JsonView jsonValue)
{
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

JsonValue SalesforceStandardKnowledgeArticleTypeConfiguration::Jsonize() const
{
  JsonValue payload;

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
