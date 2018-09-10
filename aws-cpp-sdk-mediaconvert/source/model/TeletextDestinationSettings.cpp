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

#include <aws/mediaconvert/model/TeletextDestinationSettings.h>
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

TeletextDestinationSettings::TeletextDestinationSettings() : 
    m_pageNumberHasBeenSet(false)
{
}

TeletextDestinationSettings::TeletextDestinationSettings(JsonView jsonValue) : 
    m_pageNumberHasBeenSet(false)
{
  *this = jsonValue;
}

TeletextDestinationSettings& TeletextDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pageNumber"))
  {
    m_pageNumber = jsonValue.GetString("pageNumber");

    m_pageNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue TeletextDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pageNumberHasBeenSet)
  {
   payload.WithString("pageNumber", m_pageNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
