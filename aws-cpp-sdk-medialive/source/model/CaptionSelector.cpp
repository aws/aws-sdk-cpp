/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CaptionSelector.h>
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

CaptionSelector::CaptionSelector() : 
    m_languageCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_selectorSettingsHasBeenSet(false)
{
}

CaptionSelector::CaptionSelector(JsonView jsonValue) : 
    m_languageCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_selectorSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSelector& CaptionSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectorSettings"))
  {
    m_selectorSettings = jsonValue.GetObject("selectorSettings");

    m_selectorSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionSelector::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_selectorSettingsHasBeenSet)
  {
   payload.WithObject("selectorSettings", m_selectorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
