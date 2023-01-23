/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Audio.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Audio::Audio() : 
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Audio::Audio(JsonView jsonValue) : 
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

Audio& Audio::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = LocaleMapper::GetLocaleForName(jsonValue.GetString("Locale"));

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue Audio::Jsonize() const
{
  JsonValue payload;

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
