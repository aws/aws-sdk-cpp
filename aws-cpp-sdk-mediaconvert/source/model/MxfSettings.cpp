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

#include <aws/mediaconvert/model/MxfSettings.h>
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

MxfSettings::MxfSettings() : 
    m_afdSignaling(MxfAfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false)
{
}

MxfSettings::MxfSettings(JsonView jsonValue) : 
    m_afdSignaling(MxfAfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false)
{
  *this = jsonValue;
}

MxfSettings& MxfSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = MxfAfdSignalingMapper::GetMxfAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  return *this;
}

JsonValue MxfSettings::Jsonize() const
{
  JsonValue payload;

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", MxfAfdSignalingMapper::GetNameForMxfAfdSignaling(m_afdSignaling));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
