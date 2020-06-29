/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CaptionDescription::CaptionDescription(JsonView jsonValue) : 
    m_captionSelectorNameHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionDescription& CaptionDescription::operator =(JsonView jsonValue)
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
