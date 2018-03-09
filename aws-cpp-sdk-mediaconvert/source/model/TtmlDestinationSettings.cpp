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

#include <aws/mediaconvert/model/TtmlDestinationSettings.h>
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

TtmlDestinationSettings::TtmlDestinationSettings() : 
    m_stylePassthrough(TtmlStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
}

TtmlDestinationSettings::TtmlDestinationSettings(const JsonValue& jsonValue) : 
    m_stylePassthrough(TtmlStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
  *this = jsonValue;
}

TtmlDestinationSettings& TtmlDestinationSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = TtmlStylePassthroughMapper::GetTtmlStylePassthroughForName(jsonValue.GetString("stylePassthrough"));

    m_stylePassthroughHasBeenSet = true;
  }

  return *this;
}

JsonValue TtmlDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", TtmlStylePassthroughMapper::GetNameForTtmlStylePassthrough(m_stylePassthrough));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
