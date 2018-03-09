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

#include <aws/mediaconvert/model/OutputGroup.h>
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

OutputGroup::OutputGroup() : 
    m_customNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputGroupSettingsHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

OutputGroup::OutputGroup(const JsonValue& jsonValue) : 
    m_customNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputGroupSettingsHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroup& OutputGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("customName"))
  {
    m_customName = jsonValue.GetString("customName");

    m_customNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputGroupSettings"))
  {
    m_outputGroupSettings = jsonValue.GetObject("outputGroupSettings");

    m_outputGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Array<JsonValue> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroup::Jsonize() const
{
  JsonValue payload;

  if(m_customNameHasBeenSet)
  {
   payload.WithString("customName", m_customName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputGroupSettingsHasBeenSet)
  {
   payload.WithObject("outputGroupSettings", m_outputGroupSettings.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
