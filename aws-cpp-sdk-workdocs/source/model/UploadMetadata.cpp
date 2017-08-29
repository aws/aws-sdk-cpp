/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

UploadMetadata::UploadMetadata(const JsonValue& jsonValue) : 
    m_uploadUrlHasBeenSet(false),
    m_signedHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

UploadMetadata& UploadMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UploadUrl"))
  {
    m_uploadUrl = jsonValue.GetString("UploadUrl");

    m_uploadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignedHeaders"))
  {
    Aws::Map<Aws::String, JsonValue> signedHeadersJsonMap = jsonValue.GetObject("SignedHeaders").GetAllObjects();
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
