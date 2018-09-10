﻿/*
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

#include <aws/mediaconvert/model/AncillarySourceSettings.h>
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

AncillarySourceSettings::AncillarySourceSettings() : 
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false)
{
}

AncillarySourceSettings::AncillarySourceSettings(JsonView jsonValue) : 
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false)
{
  *this = jsonValue;
}

AncillarySourceSettings& AncillarySourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceAncillaryChannelNumber"))
  {
    m_sourceAncillaryChannelNumber = jsonValue.GetInteger("sourceAncillaryChannelNumber");

    m_sourceAncillaryChannelNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue AncillarySourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAncillaryChannelNumberHasBeenSet)
  {
   payload.WithInteger("sourceAncillaryChannelNumber", m_sourceAncillaryChannelNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
