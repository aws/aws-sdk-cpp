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

#include <aws/rekognition/model/PersonMatch.h>
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

PersonMatch::PersonMatch() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_personHasBeenSet(false),
    m_faceMatchesHasBeenSet(false)
{
}

PersonMatch::PersonMatch(const JsonValue& jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_personHasBeenSet(false),
    m_faceMatchesHasBeenSet(false)
{
  *this = jsonValue;
}

PersonMatch& PersonMatch::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Person"))
  {
    m_person = jsonValue.GetObject("Person");

    m_personHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceMatches"))
  {
    Array<JsonValue> faceMatchesJsonList = jsonValue.GetArray("FaceMatches");
    for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
    {
      m_faceMatches.push_back(faceMatchesJsonList[faceMatchesIndex].AsObject());
    }
    m_faceMatchesHasBeenSet = true;
  }

  return *this;
}

JsonValue PersonMatch::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_personHasBeenSet)
  {
   payload.WithObject("Person", m_person.Jsonize());

  }

  if(m_faceMatchesHasBeenSet)
  {
   Array<JsonValue> faceMatchesJsonList(m_faceMatches.size());
   for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
   {
     faceMatchesJsonList[faceMatchesIndex].AsObject(m_faceMatches[faceMatchesIndex].Jsonize());
   }
   payload.WithArray("FaceMatches", std::move(faceMatchesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
