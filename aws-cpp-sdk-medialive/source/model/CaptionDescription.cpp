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

#include <aws/medialive/model/CaptionDescription.h>
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

CaptionDescription::CaptionDescription() : 
    m_captionSelectorNameHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CaptionDescription::CaptionDescription(const JsonValue& jsonValue) : 
    m_captionSelectorNameHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionDescription& CaptionDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("captionSelectorName"))
  {
    m_captionSelectorName = jsonValue.GetString("captionSelectorName");

    m_captionSelectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageDescription"))
  {
    m_languageDescription = jsonValue.GetString("languageDescription");

    m_languageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_captionSelectorNameHasBeenSet)
  {
   payload.WithString("captionSelectorName", m_captionSelectorName);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  if(m_languageDescriptionHasBeenSet)
  {
   payload.WithString("languageDescription", m_languageDescription);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
