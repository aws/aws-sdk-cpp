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

#include <aws/mediaconvert/model/HlsCaptionLanguageMapping.h>
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

HlsCaptionLanguageMapping::HlsCaptionLanguageMapping() : 
    m_captionChannel(0),
    m_captionChannelHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
}

HlsCaptionLanguageMapping::HlsCaptionLanguageMapping(const JsonValue& jsonValue) : 
    m_captionChannel(0),
    m_captionChannelHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

HlsCaptionLanguageMapping& HlsCaptionLanguageMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("captionChannel"))
  {
    m_captionChannel = jsonValue.GetInteger("captionChannel");

    m_captionChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageDescription"))
  {
    m_languageDescription = jsonValue.GetString("languageDescription");

    m_languageDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsCaptionLanguageMapping::Jsonize() const
{
  JsonValue payload;

  if(m_captionChannelHasBeenSet)
  {
   payload.WithInteger("captionChannel", m_captionChannel);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_languageDescriptionHasBeenSet)
  {
   payload.WithString("languageDescription", m_languageDescription);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
