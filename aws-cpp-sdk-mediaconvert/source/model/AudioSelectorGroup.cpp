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

#include <aws/mediaconvert/model/AudioSelectorGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AudioSelectorGroup::AudioSelectorGroup() : 
    m_audioSelectorNamesHasBeenSet(false)
{
}

AudioSelectorGroup::AudioSelectorGroup(const JsonValue& jsonValue) : 
    m_audioSelectorNamesHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSelectorGroup& AudioSelectorGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioSelectorNames"))
  {
    Array<JsonValue> audioSelectorNamesJsonList = jsonValue.GetArray("audioSelectorNames");
    for(unsigned audioSelectorNamesIndex = 0; audioSelectorNamesIndex < audioSelectorNamesJsonList.GetLength(); ++audioSelectorNamesIndex)
    {
      m_audioSelectorNames.push_back(audioSelectorNamesJsonList[audioSelectorNamesIndex].AsString());
    }
    m_audioSelectorNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSelectorGroup::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorNamesHasBeenSet)
  {
   Array<JsonValue> audioSelectorNamesJsonList(m_audioSelectorNames.size());
   for(unsigned audioSelectorNamesIndex = 0; audioSelectorNamesIndex < audioSelectorNamesJsonList.GetLength(); ++audioSelectorNamesIndex)
   {
     audioSelectorNamesJsonList[audioSelectorNamesIndex].AsString(m_audioSelectorNames[audioSelectorNamesIndex]);
   }
   payload.WithArray("audioSelectorNames", std::move(audioSelectorNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
