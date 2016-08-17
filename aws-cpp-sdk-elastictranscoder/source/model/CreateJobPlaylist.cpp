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
#include <aws/elastictranscoder/model/CreateJobPlaylist.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

CreateJobPlaylist::CreateJobPlaylist() : 
    m_nameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_outputKeysHasBeenSet(false),
    m_hlsContentProtectionHasBeenSet(false),
    m_playReadyDrmHasBeenSet(false)
{
}

CreateJobPlaylist::CreateJobPlaylist(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_outputKeysHasBeenSet(false),
    m_hlsContentProtectionHasBeenSet(false),
    m_playReadyDrmHasBeenSet(false)
{
  *this = jsonValue;
}

CreateJobPlaylist& CreateJobPlaylist::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputKeys"))
  {
    Array<JsonValue> outputKeysJsonList = jsonValue.GetArray("OutputKeys");
    for(unsigned outputKeysIndex = 0; outputKeysIndex < outputKeysJsonList.GetLength(); ++outputKeysIndex)
    {
      m_outputKeys.push_back(outputKeysJsonList[outputKeysIndex].AsString());
    }
    m_outputKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HlsContentProtection"))
  {
    m_hlsContentProtection = jsonValue.GetObject("HlsContentProtection");

    m_hlsContentProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayReadyDrm"))
  {
    m_playReadyDrm = jsonValue.GetObject("PlayReadyDrm");

    m_playReadyDrmHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateJobPlaylist::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_outputKeysHasBeenSet)
  {
   Array<JsonValue> outputKeysJsonList(m_outputKeys.size());
   for(unsigned outputKeysIndex = 0; outputKeysIndex < outputKeysJsonList.GetLength(); ++outputKeysIndex)
   {
     outputKeysJsonList[outputKeysIndex].AsString(m_outputKeys[outputKeysIndex]);
   }
   payload.WithArray("OutputKeys", std::move(outputKeysJsonList));

  }

  if(m_hlsContentProtectionHasBeenSet)
  {
   payload.WithObject("HlsContentProtection", m_hlsContentProtection.Jsonize());

  }

  if(m_playReadyDrmHasBeenSet)
  {
   payload.WithObject("PlayReadyDrm", m_playReadyDrm.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws