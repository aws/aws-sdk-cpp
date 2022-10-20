/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SalesforceChatterFeedConfiguration.h>
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

SalesforceChatterFeedConfiguration::SalesforceChatterFeedConfiguration() : 
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_includeFilterTypesHasBeenSet(false)
{
}

SalesforceChatterFeedConfiguration::SalesforceChatterFeedConfiguration(JsonView jsonValue) : 
    m_documentDataFieldNameHasBeenSet(false),
    m_documentTitleFieldNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_includeFilterTypesHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceChatterFeedConfiguration& SalesforceChatterFeedConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("IncludeFilterTypes"))
  {
    Aws::Utils::Array<JsonView> includeFilterTypesJsonList = jsonValue.GetArray("IncludeFilterTypes");
    for(unsigned includeFilterTypesIndex = 0; includeFilterTypesIndex < includeFilterTypesJsonList.GetLength(); ++includeFilterTypesIndex)
    {
      m_includeFilterTypes.push_back(SalesforceChatterFeedIncludeFilterTypeMapper::GetSalesforceChatterFeedIncludeFilterTypeForName(includeFilterTypesJsonList[includeFilterTypesIndex].AsString()));
    }
    m_includeFilterTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceChatterFeedConfiguration::Jsonize() const
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

  if(m_includeFilterTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeFilterTypesJsonList(m_includeFilterTypes.size());
   for(unsigned includeFilterTypesIndex = 0; includeFilterTypesIndex < includeFilterTypesJsonList.GetLength(); ++includeFilterTypesIndex)
   {
     includeFilterTypesJsonList[includeFilterTypesIndex].AsString(SalesforceChatterFeedIncludeFilterTypeMapper::GetNameForSalesforceChatterFeedIncludeFilterType(m_includeFilterTypes[includeFilterTypesIndex]));
   }
   payload.WithArray("IncludeFilterTypes", std::move(includeFilterTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
