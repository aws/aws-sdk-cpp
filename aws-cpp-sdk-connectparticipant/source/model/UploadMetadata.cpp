/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/UploadMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

UploadMetadata::UploadMetadata() : 
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false),
    m_headersToIncludeHasBeenSet(false)
{
}

UploadMetadata::UploadMetadata(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false),
    m_headersToIncludeHasBeenSet(false)
{
  *this = jsonValue;
}

UploadMetadata& UploadMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UrlExpiry"))
  {
    m_urlExpiry = jsonValue.GetString("UrlExpiry");

    m_urlExpiryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeadersToInclude"))
  {
    Aws::Map<Aws::String, JsonView> headersToIncludeJsonMap = jsonValue.GetObject("HeadersToInclude").GetAllObjects();
    for(auto& headersToIncludeItem : headersToIncludeJsonMap)
    {
      m_headersToInclude[headersToIncludeItem.first] = headersToIncludeItem.second.AsString();
    }
    m_headersToIncludeHasBeenSet = true;
  }

  return *this;
}

JsonValue UploadMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_urlExpiryHasBeenSet)
  {
   payload.WithString("UrlExpiry", m_urlExpiry);

  }

  if(m_headersToIncludeHasBeenSet)
  {
   JsonValue headersToIncludeJsonMap;
   for(auto& headersToIncludeItem : m_headersToInclude)
   {
     headersToIncludeJsonMap.WithString(headersToIncludeItem.first, headersToIncludeItem.second);
   }
   payload.WithObject("HeadersToInclude", std::move(headersToIncludeJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
