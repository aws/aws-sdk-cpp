/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedResultsItem.h>
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

FeaturedResultsItem::FeaturedResultsItem() : 
    m_idHasBeenSet(false),
    m_type(QueryResultType::NOT_SET),
    m_typeHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_documentTitleHasBeenSet(false),
    m_documentExcerptHasBeenSet(false),
    m_documentURIHasBeenSet(false),
    m_documentAttributesHasBeenSet(false),
    m_feedbackTokenHasBeenSet(false)
{
}

FeaturedResultsItem::FeaturedResultsItem(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(QueryResultType::NOT_SET),
    m_typeHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_documentTitleHasBeenSet(false),
    m_documentExcerptHasBeenSet(false),
    m_documentURIHasBeenSet(false),
    m_documentAttributesHasBeenSet(false),
    m_feedbackTokenHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturedResultsItem& FeaturedResultsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = QueryResultTypeMapper::GetQueryResultTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalAttributes"))
  {
    Aws::Utils::Array<JsonView> additionalAttributesJsonList = jsonValue.GetArray("AdditionalAttributes");
    for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
    {
      m_additionalAttributes.push_back(additionalAttributesJsonList[additionalAttributesIndex].AsObject());
    }
    m_additionalAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentTitle"))
  {
    m_documentTitle = jsonValue.GetObject("DocumentTitle");

    m_documentTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentExcerpt"))
  {
    m_documentExcerpt = jsonValue.GetObject("DocumentExcerpt");

    m_documentExcerptHasBeenSet = true;
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

  if(jsonValue.ValueExists("FeedbackToken"))
  {
    m_feedbackToken = jsonValue.GetString("FeedbackToken");

    m_feedbackTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturedResultsItem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", QueryResultTypeMapper::GetNameForQueryResultType(m_type));
  }

  if(m_additionalAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAttributesJsonList(m_additionalAttributes.size());
   for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
   {
     additionalAttributesJsonList[additionalAttributesIndex].AsObject(m_additionalAttributes[additionalAttributesIndex].Jsonize());
   }
   payload.WithArray("AdditionalAttributes", std::move(additionalAttributesJsonList));

  }

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_documentTitleHasBeenSet)
  {
   payload.WithObject("DocumentTitle", m_documentTitle.Jsonize());

  }

  if(m_documentExcerptHasBeenSet)
  {
   payload.WithObject("DocumentExcerpt", m_documentExcerpt.Jsonize());

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

  if(m_feedbackTokenHasBeenSet)
  {
   payload.WithString("FeedbackToken", m_feedbackToken);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
