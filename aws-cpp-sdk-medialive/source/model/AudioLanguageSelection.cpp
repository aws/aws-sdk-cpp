/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioLanguageSelection.h>
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

AudioLanguageSelection::AudioLanguageSelection() : 
    m_languageCodeHasBeenSet(false),
    m_languageSelectionPolicy(AudioLanguageSelectionPolicy::NOT_SET),
    m_languageSelectionPolicyHasBeenSet(false)
{
}

AudioLanguageSelection::AudioLanguageSelection(JsonView jsonValue) : 
    m_languageCodeHasBeenSet(false),
    m_languageSelectionPolicy(AudioLanguageSelectionPolicy::NOT_SET),
    m_languageSelectionPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AudioLanguageSelection& AudioLanguageSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageSelectionPolicy"))
  {
    m_languageSelectionPolicy = AudioLanguageSelectionPolicyMapper::GetAudioLanguageSelectionPolicyForName(jsonValue.GetString("languageSelectionPolicy"));

    m_languageSelectionPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioLanguageSelection::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  if(m_languageSelectionPolicyHasBeenSet)
  {
   payload.WithString("languageSelectionPolicy", AudioLanguageSelectionPolicyMapper::GetNameForAudioLanguageSelectionPolicy(m_languageSelectionPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
