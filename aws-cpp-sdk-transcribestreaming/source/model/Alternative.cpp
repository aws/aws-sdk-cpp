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

#include <aws/transcribestreaming/model/Alternative.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

Alternative::Alternative() : 
    m_transcriptHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

Alternative::Alternative(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
  *this = jsonValue;
}

Alternative& Alternative::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetString("Transcript");

    m_transcriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Items"))
  {
    Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  return *this;
}

JsonValue Alternative::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithString("Transcript", m_transcript);

  }

  if(m_itemsHasBeenSet)
  {
   Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
