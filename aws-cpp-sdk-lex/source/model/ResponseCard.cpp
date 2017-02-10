/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ResponseCard::ResponseCard(const JsonValue& jsonValue) : 
    m_versionHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_genericAttachmentsHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseCard& ResponseCard::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> genericAttachmentsJsonList = jsonValue.GetArray("genericAttachments");
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
   Array<JsonValue> genericAttachmentsJsonList(m_genericAttachments.size());
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