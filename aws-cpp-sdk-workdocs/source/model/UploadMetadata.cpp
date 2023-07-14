/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UploadMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

UploadMetadata::UploadMetadata() : 
    m_uploadUrlHasBeenSet(false),
    m_signedHeadersHasBeenSet(false)
{
}

UploadMetadata::UploadMetadata(JsonView jsonValue) : 
    m_uploadUrlHasBeenSet(false),
    m_signedHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

UploadMetadata& UploadMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UploadUrl"))
  {
    m_uploadUrl = jsonValue.GetString("UploadUrl");

    m_uploadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignedHeaders"))
  {
    Aws::Map<Aws::String, JsonView> signedHeadersJsonMap = jsonValue.GetObject("SignedHeaders").GetAllObjects();
    for(auto& signedHeadersItem : signedHeadersJsonMap)
    {
      m_signedHeaders[signedHeadersItem.first] = signedHeadersItem.second.AsString();
    }
    m_signedHeadersHasBeenSet = true;
  }

  return *this;
}

JsonValue UploadMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_uploadUrlHasBeenSet)
  {
   payload.WithString("UploadUrl", m_uploadUrl);

  }

  if(m_signedHeadersHasBeenSet)
  {
   JsonValue signedHeadersJsonMap;
   for(auto& signedHeadersItem : m_signedHeaders)
   {
     signedHeadersJsonMap.WithString(signedHeadersItem.first, signedHeadersItem.second);
   }
   payload.WithObject("SignedHeaders", std::move(signedHeadersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
