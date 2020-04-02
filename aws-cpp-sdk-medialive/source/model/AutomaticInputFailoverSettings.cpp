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

#include <aws/medialive/model/AutomaticInputFailoverSettings.h>
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

AutomaticInputFailoverSettings::AutomaticInputFailoverSettings() : 
    m_inputPreference(InputPreference::NOT_SET),
    m_inputPreferenceHasBeenSet(false),
    m_secondaryInputIdHasBeenSet(false)
{
}

AutomaticInputFailoverSettings::AutomaticInputFailoverSettings(JsonView jsonValue) : 
    m_inputPreference(InputPreference::NOT_SET),
    m_inputPreferenceHasBeenSet(false),
    m_secondaryInputIdHasBeenSet(false)
{
  *this = jsonValue;
}

AutomaticInputFailoverSettings& AutomaticInputFailoverSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputPreference"))
  {
    m_inputPreference = InputPreferenceMapper::GetInputPreferenceForName(jsonValue.GetString("inputPreference"));

    m_inputPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryInputId"))
  {
    m_secondaryInputId = jsonValue.GetString("secondaryInputId");

    m_secondaryInputIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomaticInputFailoverSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputPreferenceHasBeenSet)
  {
   payload.WithString("inputPreference", InputPreferenceMapper::GetNameForInputPreference(m_inputPreference));
  }

  if(m_secondaryInputIdHasBeenSet)
  {
   payload.WithString("secondaryInputId", m_secondaryInputId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
