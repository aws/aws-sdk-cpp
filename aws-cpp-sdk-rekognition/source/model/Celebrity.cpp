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

#include <aws/rekognition/model/Celebrity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Celebrity::Celebrity() : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_matchConfidence(0.0),
    m_matchConfidenceHasBeenSet(false)
{
}

Celebrity::Celebrity(const JsonValue& jsonValue) : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_matchConfidence(0.0),
    m_matchConfidenceHasBeenSet(false)
{
  *this = jsonValue;
}

Celebrity& Celebrity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Urls"))
  {
    Array<JsonValue> urlsJsonList = jsonValue.GetArray("Urls");
    for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
    {
      m_urls.push_back(urlsJsonList[urlsIndex].AsString());
    }
    m_urlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchConfidence"))
  {
    m_matchConfidence = jsonValue.GetDouble("MatchConfidence");

    m_matchConfidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Celebrity::Jsonize() const
{
  JsonValue payload;

  if(m_urlsHasBeenSet)
  {
   Array<JsonValue> urlsJsonList(m_urls.size());
   for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
   {
     urlsJsonList[urlsIndex].AsString(m_urls[urlsIndex]);
   }
   payload.WithArray("Urls", std::move(urlsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  if(m_matchConfidenceHasBeenSet)
  {
   payload.WithDouble("MatchConfidence", m_matchConfidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
