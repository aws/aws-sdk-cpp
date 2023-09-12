/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/RetrieveResultItem.h>
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

RetrieveResultItem::RetrieveResultItem() : 
    m_idHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_documentTitleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_documentURIHasBeenSet(false),
    m_documentAttributesHasBeenSet(false),
    m_scoreAttributesHasBeenSet(false)
{
}

RetrieveResultItem::RetrieveResultItem(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_documentTitleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_documentURIHasBeenSet(false),
    m_documentAttributesHasBeenSet(false),
    m_scoreAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

RetrieveResultItem& RetrieveResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentTitle"))
  {
    m_documentTitle = jsonValue.GetString("DocumentTitle");

    m_documentTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentURI"))
  {
    m_documentURI = jsonValue.GetString("DocumentURI");

    m_documentURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentAttributes"))
  {
    Aws::Utils::Array<JsonView> documentAttributesJsonList = jsonValue.GetArray("DocumentAttributes");
    for(unsigned documentAttributesIndex = 0; documentAttributesIndex < documentAttributesJsonList.GetLength(); ++documentAttributesIndex)
    {
      m_documentAttributes.push_back(documentAttributesJsonList[documentAttributesIndex].AsObject());
    }
    m_documentAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScoreAttributes"))
  {
    m_scoreAttributes = jsonValue.GetObject("ScoreAttributes");

    m_scoreAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrieveResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_documentTitleHasBeenSet)
  {
   payload.WithString("DocumentTitle", m_documentTitle);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_documentURIHasBeenSet)
  {
   payload.WithString("DocumentURI", m_documentURI);

  }

  if(m_documentAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentAttributesJsonList(m_documentAttributes.size());
   for(unsigned documentAttributesIndex = 0; documentAttributesIndex < documentAttributesJsonList.GetLength(); ++documentAttributesIndex)
   {
     documentAttributesJsonList[documentAttributesIndex].AsObject(m_documentAttributes[documentAttributesIndex].Jsonize());
   }
   payload.WithArray("DocumentAttributes", std::move(documentAttributesJsonList));

  }

  if(m_scoreAttributesHasBeenSet)
  {
   payload.WithObject("ScoreAttributes", m_scoreAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
