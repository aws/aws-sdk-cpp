/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PhonemeTranscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

PhonemeTranscription::PhonemeTranscription(JsonView jsonValue)
{
  *this = jsonValue;
}

PhonemeTranscription& PhonemeTranscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Preferred"))
  {
    m_preferred = jsonValue.GetBool("Preferred");
    m_preferredHasBeenSet = true;
  }
  return *this;
}

JsonValue PhonemeTranscription::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_preferredHasBeenSet)
  {
   payload.WithBool("Preferred", m_preferred);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
