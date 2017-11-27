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

AudioLanguageSelection::AudioLanguageSelection(const JsonValue& jsonValue) : 
    m_languageCodeHasBeenSet(false),
    m_languageSelectionPolicy(AudioLanguageSelectionPolicy::NOT_SET),
    m_languageSelectionPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AudioLanguageSelection& AudioLanguageSelection::operator =(const JsonValue& jsonValue)
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
