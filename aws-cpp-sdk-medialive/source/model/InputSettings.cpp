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

#include <aws/medialive/model/InputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputSettings::InputSettings() : 
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputFilter(InputFilter::NOT_SET),
    m_inputFilterHasBeenSet(false),
    m_networkInputSettingsHasBeenSet(false),
    m_sourceEndBehavior(InputSourceEndBehavior::NOT_SET),
    m_sourceEndBehaviorHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
}

InputSettings::InputSettings(const JsonValue& jsonValue) : 
    m_audioSelectorsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false),
    m_deblockFilter(InputDeblockFilter::NOT_SET),
    m_deblockFilterHasBeenSet(false),
    m_denoiseFilter(InputDenoiseFilter::NOT_SET),
    m_denoiseFilterHasBeenSet(false),
    m_filterStrength(0),
    m_filterStrengthHasBeenSet(false),
    m_inputFilter(InputFilter::NOT_SET),
    m_inputFilterHasBeenSet(false),
    m_networkInputSettingsHasBeenSet(false),
    m_sourceEndBehavior(InputSourceEndBehavior::NOT_SET),
    m_sourceEndBehaviorHasBeenSet(false),
    m_videoSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

InputSettings& InputSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioSelectors"))
  {
    Array<JsonValue> audioSelectorsJsonList = jsonValue.GetArray("audioSelectors");
    for(unsigned audioSelectorsIndex = 0; audioSelectorsIndex < audioSelectorsJsonList.GetLength(); ++audioSelectorsIndex)
    {
      m_audioSelectors.push_back(audioSelectorsJsonList[audioSelectorsIndex].AsObject());
    }
    m_audioSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionSelectors"))
  {
    Array<JsonValue> captionSelectorsJsonList = jsonValue.GetArray("captionSelectors");
    for(unsigned captionSelectorsIndex = 0; captionSelectorsIndex < captionSelectorsJsonList.GetLength(); ++captionSelectorsIndex)
    {
      m_captionSelectors.push_back(captionSelectorsJsonList[captionSelectorsIndex].AsObject());
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

  if(jsonValue.ValueExists("filterStrength"))
  {
    m_filterStrength = jsonValue.GetInteger("filterStrength");

    m_filterStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputFilter"))
  {
    m_inputFilter = InputFilterMapper::GetInputFilterForName(jsonValue.GetString("inputFilter"));

    m_inputFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInputSettings"))
  {
    m_networkInputSettings = jsonValue.GetObject("networkInputSettings");

    m_networkInputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceEndBehavior"))
  {
    m_sourceEndBehavior = InputSourceEndBehaviorMapper::GetInputSourceEndBehaviorForName(jsonValue.GetString("sourceEndBehavior"));

    m_sourceEndBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSelector"))
  {
    m_videoSelector = jsonValue.GetObject("videoSelector");

    m_videoSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorsHasBeenSet)
  {
   Array<JsonValue> audioSelectorsJsonList(m_audioSelectors.size());
   for(unsigned audioSelectorsIndex = 0; audioSelectorsIndex < audioSelectorsJsonList.GetLength(); ++audioSelectorsIndex)
   {
     audioSelectorsJsonList[audioSelectorsIndex].AsObject(m_audioSelectors[audioSelectorsIndex].Jsonize());
   }
   payload.WithArray("audioSelectors", std::move(audioSelectorsJsonList));

  }

  if(m_captionSelectorsHasBeenSet)
  {
   Array<JsonValue> captionSelectorsJsonList(m_captionSelectors.size());
   for(unsigned captionSelectorsIndex = 0; captionSelectorsIndex < captionSelectorsJsonList.GetLength(); ++captionSelectorsIndex)
   {
     captionSelectorsJsonList[captionSelectorsIndex].AsObject(m_captionSelectors[captionSelectorsIndex].Jsonize());
   }
   payload.WithArray("captionSelectors", std::move(captionSelectorsJsonList));

  }

  if(m_deblockFilterHasBeenSet)
  {
   payload.WithString("deblockFilter", InputDeblockFilterMapper::GetNameForInputDeblockFilter(m_deblockFilter));
  }

  if(m_denoiseFilterHasBeenSet)
  {
   payload.WithString("denoiseFilter", InputDenoiseFilterMapper::GetNameForInputDenoiseFilter(m_denoiseFilter));
  }

  if(m_filterStrengthHasBeenSet)
  {
   payload.WithInteger("filterStrength", m_filterStrength);

  }

  if(m_inputFilterHasBeenSet)
  {
   payload.WithString("inputFilter", InputFilterMapper::GetNameForInputFilter(m_inputFilter));
  }

  if(m_networkInputSettingsHasBeenSet)
  {
   payload.WithObject("networkInputSettings", m_networkInputSettings.Jsonize());

  }

  if(m_sourceEndBehaviorHasBeenSet)
  {
   payload.WithString("sourceEndBehavior", InputSourceEndBehaviorMapper::GetNameForInputSourceEndBehavior(m_sourceEndBehavior));
  }

  if(m_videoSelectorHasBeenSet)
  {
   payload.WithObject("videoSelector", m_videoSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
