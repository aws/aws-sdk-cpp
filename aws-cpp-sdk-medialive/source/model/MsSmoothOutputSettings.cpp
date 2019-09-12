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

#include <aws/medialive/model/MsSmoothOutputSettings.h>
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

MsSmoothOutputSettings::MsSmoothOutputSettings() : 
    m_h265PackagingType(MsSmoothH265PackagingType::NOT_SET),
    m_h265PackagingTypeHasBeenSet(false),
    m_nameModifierHasBeenSet(false)
{
}

MsSmoothOutputSettings::MsSmoothOutputSettings(JsonView jsonValue) : 
    m_h265PackagingType(MsSmoothH265PackagingType::NOT_SET),
    m_h265PackagingTypeHasBeenSet(false),
    m_nameModifierHasBeenSet(false)
{
  *this = jsonValue;
}

MsSmoothOutputSettings& MsSmoothOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("h265PackagingType"))
  {
    m_h265PackagingType = MsSmoothH265PackagingTypeMapper::GetMsSmoothH265PackagingTypeForName(jsonValue.GetString("h265PackagingType"));

    m_h265PackagingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue MsSmoothOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_h265PackagingTypeHasBeenSet)
  {
   payload.WithString("h265PackagingType", MsSmoothH265PackagingTypeMapper::GetNameForMsSmoothH265PackagingType(m_h265PackagingType));
  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
