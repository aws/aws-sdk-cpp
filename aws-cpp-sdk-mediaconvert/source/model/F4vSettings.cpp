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

#include <aws/mediaconvert/model/F4vSettings.h>
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

F4vSettings::F4vSettings() : 
    m_moovPlacement(F4vMoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false)
{
}

F4vSettings::F4vSettings(const JsonValue& jsonValue) : 
    m_moovPlacement(F4vMoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false)
{
  *this = jsonValue;
}

F4vSettings& F4vSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("moovPlacement"))
  {
    m_moovPlacement = F4vMoovPlacementMapper::GetF4vMoovPlacementForName(jsonValue.GetString("moovPlacement"));

    m_moovPlacementHasBeenSet = true;
  }

  return *this;
}

JsonValue F4vSettings::Jsonize() const
{
  JsonValue payload;

  if(m_moovPlacementHasBeenSet)
  {
   payload.WithString("moovPlacement", F4vMoovPlacementMapper::GetNameForF4vMoovPlacement(m_moovPlacement));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
