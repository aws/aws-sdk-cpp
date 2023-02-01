/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/ResponseCard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

ResponseCard::ResponseCard() : 
    m_versionHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_genericAttachmentsHasBeenSet(false)
{
}

ResponseCard::ResponseCard(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_genericAttachmentsHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseCard& ResponseCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("contentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("genericAttachments"))
  {
    Aws::Utils::Array<JsonView> genericAttachmentsJsonList = jsonValue.GetArray("genericAttachments");
    for(unsigned genericAttachmentsIndex = 0; genericAttachmentsIndex < genericAttachmentsJsonList.GetLength(); ++genericAttachmentsIndex)
    {
      m_genericAttachments.push_back(genericAttachmentsJsonList[genericAttachmentsIndex].AsObject());
    }
    m_genericAttachmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseCard::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if(m_genericAttachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> genericAttachmentsJsonList(m_genericAttachments.size());
   for(unsigned genericAttachmentsIndex = 0; genericAttachmentsIndex < genericAttachmentsJsonList.GetLength(); ++genericAttachmentsIndex)
   {
     genericAttachmentsJsonList[genericAttachmentsIndex].AsObject(m_genericAttachments[genericAttachmentsIndex].Jsonize());
   }
   payload.WithArray("genericAttachments", std::move(genericAttachmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
