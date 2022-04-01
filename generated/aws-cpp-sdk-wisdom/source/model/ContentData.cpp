/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ContentData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

ContentData::ContentData() : 
    m_contentArnHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_linkOutUriHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_status(ContentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false)
{
}

ContentData::ContentData(JsonView jsonValue) : 
    m_contentArnHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_linkOutUriHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_status(ContentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false)
{
  *this = jsonValue;
}

ContentData& ContentData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentArn"))
  {
    m_contentArn = jsonValue.GetString("contentArn");

    m_contentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentId"))
  {
    m_contentId = jsonValue.GetString("contentId");

    m_contentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linkOutUri"))
  {
    m_linkOutUri = jsonValue.GetString("linkOutUri");

    m_linkOutUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ContentStatusMapper::GetContentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("urlExpiry"))
  {
    m_urlExpiry = jsonValue.GetDouble("urlExpiry");

    m_urlExpiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentData::Jsonize() const
{
  JsonValue payload;

  if(m_contentArnHasBeenSet)
  {
   payload.WithString("contentArn", m_contentArn);

  }

  if(m_contentIdHasBeenSet)
  {
   payload.WithString("contentId", m_contentId);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_linkOutUriHasBeenSet)
  {
   payload.WithString("linkOutUri", m_linkOutUri);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ContentStatusMapper::GetNameForContentStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_urlExpiryHasBeenSet)
  {
   payload.WithDouble("urlExpiry", m_urlExpiry.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
