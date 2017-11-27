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

#include <aws/mediaconvert/model/DvbNitSettings.h>
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

DvbNitSettings::DvbNitSettings() : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_nitInterval(0),
    m_nitIntervalHasBeenSet(false)
{
}

DvbNitSettings::DvbNitSettings(const JsonValue& jsonValue) : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_nitInterval(0),
    m_nitIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

DvbNitSettings& DvbNitSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("networkId"))
  {
    m_networkId = jsonValue.GetInteger("networkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkName"))
  {
    m_networkName = jsonValue.GetString("networkName");

    m_networkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nitInterval"))
  {
    m_nitInterval = jsonValue.GetInteger("nitInterval");

    m_nitIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbNitSettings::Jsonize() const
{
  JsonValue payload;

  if(m_networkIdHasBeenSet)
  {
   payload.WithInteger("networkId", m_networkId);

  }

  if(m_networkNameHasBeenSet)
  {
   payload.WithString("networkName", m_networkName);

  }

  if(m_nitIntervalHasBeenSet)
  {
   payload.WithInteger("nitInterval", m_nitInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
