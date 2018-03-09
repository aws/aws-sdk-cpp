﻿/*
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

#include <aws/mediaconvert/model/Input.h>
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

Input::Input() : 
    m_audioSelectorGroupsHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_fileInputHasBeenSet(false),
    m_filterEnable(InputFilterEnable::NOT_SET),
    m_filterEnableHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_psiControl(InputPsiControl::NOT_SET),
    m_psiControlHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
}

Input::Input(const JsonValue& jsonValue) : 
    m_audioSelectorGroupsHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_fileInputHasBeenSet(false),
    m_filterEnable(InputFilterEnable::NOT_SET),
    m_filterEnableHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_psiControl(InputPsiControl::NOT_SET),
    m_psiControlHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioSelectorGroups"))
  {
    Aws::Map<Aws::String, JsonValue> audioSelectorGroupsJsonMap = jsonValue.GetObject("audioSelectorGroups").GetAllObjects();
    for(auto& audioSelectorGroupsItem : audioSelectorGroupsJsonMap)
    {
      m_audioSelectorGroups[audioSelectorGroupsItem.first] = audioSelectorGroupsItem.second.AsObject();
    }
    m_audioSelectorGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSelectors"))
  {
    Aws::Map<Aws::String, JsonValue> audioSelectorsJsonMap = jsonValue.GetObject("audioSelectors").GetAllObjects();
    for(auto& audioSelectorsItem : audioSelectorsJsonMap)
    {
      m_audioSelectors[audioSelectorsItem.first] = audioSelectorsItem.second.AsObject();
    }
    m_audioSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionSelectors"))
  {
    Aws::Map<Aws::String, JsonValue> captionSelectorsJsonMap = jsonValue.GetObject("captionSelectors").GetAllObjects();
    for(auto& captionSelectorsItem : captionSelectorsJsonMap)
    {
      m_captionSelectors[captionSelectorsItem.first] = captionSelectorsItem.second.AsObject();
    }
    m_captionSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deblockFilter"))
  {
    m_deblockFilter = InputDeblockFilterMapper::GetInputDeblockFilterForName(jsonValue.GetString("deblockFilter"));

    m_deblockFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("denoiseFilter"))
  {
    m_denoiseFilter = InputDenoiseFilterMapper::GetInputDenoiseFilterForName(jsonValue.GetString("denoiseFilter"));

    m_denoiseFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileInput"))
  {
    m_fileInput = jsonValue.GetString("fileInput");

    m_fileInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterEnable"))
  {
    m_filterEnable = InputFilterEnableMapper::GetInputFilterEnableForName(jsonValue.GetString("filterEnable"));

    m_filterEnableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterStrength"))
  {
    m_filterStrength = jsonValue.GetInteger("filterStrength");

    m_filterStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputClippings"))
  {
    Array<JsonValue> inputClippingsJsonList = jsonValue.GetArray("inputClippings");
    for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
    {
      m_inputClippings.push_back(inputClippingsJsonList[inputClippingsIndex].AsObject());
    }
    m_inputClippingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("psiControl"))
  {
    m_psiControl = InputPsiControlMapper::GetInputPsiControlForName(jsonValue.GetString("psiControl"));

    m_psiControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeSource"))
  {
    m_timecodeSource = InputTimecodeSourceMapper::GetInputTimecodeSourceForName(jsonValue.GetString("timecodeSource"));

    m_timecodeSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSelector"))
  {
    m_videoSelector = jsonValue.GetObject("videoSelector");

    m_videoSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorGroupsHasBeenSet)
  {
   JsonValue audioSelectorGroupsJsonMap;
   for(auto& audioSelectorGroupsItem : m_audioSelectorGroups)
   {
     audioSelectorGroupsJsonMap.WithObject(audioSelectorGroupsItem.first, audioSelectorGroupsItem.second.Jsonize());
   }
   payload.WithObject("audioSelectorGroups", std::move(audioSelectorGroupsJsonMap));

  }

  if(m_audioSelectorsHasBeenSet)
  {
   JsonValue audioSelectorsJsonMap;
   for(auto& audioSelectorsItem : m_audioSelectors)
   {
     audioSelectorsJsonMap.WithObject(audioSelectorsItem.first, audioSelectorsItem.second.Jsonize());
   }
   payload.WithObject("audioSelectors", std::move(audioSelectorsJsonMap));

  }

  if(m_captionSelectorsHasBeenSet)
  {
   JsonValue captionSelectorsJsonMap;
   for(auto& captionSelectorsItem : m_captionSelectors)
   {
     captionSelectorsJsonMap.WithObject(captionSelectorsItem.first, captionSelectorsItem.second.Jsonize());
   }
   payload.WithObject("captionSelectors", std::move(captionSelectorsJsonMap));

  }

  if(m_deblockFilterHasBeenSet)
  {
   payload.WithString("deblockFilter", InputDeblockFilterMapper::GetNameForInputDeblockFilter(m_deblockFilter));
  }

  if(m_denoiseFilterHasBeenSet)
  {
   payload.WithString("denoiseFilter", InputDenoiseFilterMapper::GetNameForInputDenoiseFilter(m_denoiseFilter));
  }

  if(m_fileInputHasBeenSet)
  {
   payload.WithString("fileInput", m_fileInput);

  }

  if(m_filterEnableHasBeenSet)
  {
   payload.WithString("filterEnable", InputFilterEnableMapper::GetNameForInputFilterEnable(m_filterEnable));
  }

  if(m_filterStrengthHasBeenSet)
  {
   payload.WithInteger("filterStrength", m_filterStrength);

  }

  if(m_inputClippingsHasBeenSet)
  {
   Array<JsonValue> inputClippingsJsonList(m_inputClippings.size());
   for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
   {
     inputClippingsJsonList[inputClippingsIndex].AsObject(m_inputClippings[inputClippingsIndex].Jsonize());
   }
   payload.WithArray("inputClippings", std::move(inputClippingsJsonList));

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_psiControlHasBeenSet)
  {
   payload.WithString("psiControl", InputPsiControlMapper::GetNameForInputPsiControl(m_psiControl));
  }

  if(m_timecodeSourceHasBeenSet)
  {
   payload.WithString("timecodeSource", InputTimecodeSourceMapper::GetNameForInputTimecodeSource(m_timecodeSource));
  }

  if(m_videoSelectorHasBeenSet)
  {
   payload.WithObject("videoSelector", m_videoSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
