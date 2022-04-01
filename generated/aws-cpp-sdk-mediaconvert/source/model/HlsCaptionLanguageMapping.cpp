/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_customLanguageCodeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
}

HlsCaptionLanguageMapping::HlsCaptionLanguageMapping(JsonView jsonValue) : 
    m_captionChannel(0),
    m_captionChannelHasBeenSet(false),
    m_customLanguageCodeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

HlsCaptionLanguageMapping& HlsCaptionLanguageMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captionChannel"))
  {
    m_captionChannel = jsonValue.GetInteger("captionChannel");

    m_captionChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customLanguageCode"))
  {
    m_customLanguageCode = jsonValue.GetString("customLanguageCode");

    m_customLanguageCodeHasBeenSet = true;
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

  if(m_customLanguageCodeHasBeenSet)
  {
   payload.WithString("customLanguageCode", m_customLanguageCode);

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
