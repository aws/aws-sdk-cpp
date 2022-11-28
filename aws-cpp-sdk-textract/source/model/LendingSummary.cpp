/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LendingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

LendingSummary::LendingSummary() : 
    m_documentGroupsHasBeenSet(false),
    m_undetectedDocumentTypesHasBeenSet(false)
{
}

LendingSummary::LendingSummary(JsonView jsonValue) : 
    m_documentGroupsHasBeenSet(false),
    m_undetectedDocumentTypesHasBeenSet(false)
{
  *this = jsonValue;
}

LendingSummary& LendingSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentGroups"))
  {
    Aws::Utils::Array<JsonView> documentGroupsJsonList = jsonValue.GetArray("DocumentGroups");
    for(unsigned documentGroupsIndex = 0; documentGroupsIndex < documentGroupsJsonList.GetLength(); ++documentGroupsIndex)
    {
      m_documentGroups.push_back(documentGroupsJsonList[documentGroupsIndex].AsObject());
    }
    m_documentGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UndetectedDocumentTypes"))
  {
    Aws::Utils::Array<JsonView> undetectedDocumentTypesJsonList = jsonValue.GetArray("UndetectedDocumentTypes");
    for(unsigned undetectedDocumentTypesIndex = 0; undetectedDocumentTypesIndex < undetectedDocumentTypesJsonList.GetLength(); ++undetectedDocumentTypesIndex)
    {
      m_undetectedDocumentTypes.push_back(undetectedDocumentTypesJsonList[undetectedDocumentTypesIndex].AsString());
    }
    m_undetectedDocumentTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue LendingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_documentGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentGroupsJsonList(m_documentGroups.size());
   for(unsigned documentGroupsIndex = 0; documentGroupsIndex < documentGroupsJsonList.GetLength(); ++documentGroupsIndex)
   {
     documentGroupsJsonList[documentGroupsIndex].AsObject(m_documentGroups[documentGroupsIndex].Jsonize());
   }
   payload.WithArray("DocumentGroups", std::move(documentGroupsJsonList));

  }

  if(m_undetectedDocumentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> undetectedDocumentTypesJsonList(m_undetectedDocumentTypes.size());
   for(unsigned undetectedDocumentTypesIndex = 0; undetectedDocumentTypesIndex < undetectedDocumentTypesJsonList.GetLength(); ++undetectedDocumentTypesIndex)
   {
     undetectedDocumentTypesJsonList[undetectedDocumentTypesIndex].AsString(m_undetectedDocumentTypes[undetectedDocumentTypesIndex]);
   }
   payload.WithArray("UndetectedDocumentTypes", std::move(undetectedDocumentTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
