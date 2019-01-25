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

#include <aws/medialive/model/FrameCaptureSettings.h>
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

FrameCaptureSettings::FrameCaptureSettings() : 
    m_captureInterval(0),
    m_captureIntervalHasBeenSet(false)
{
}

FrameCaptureSettings::FrameCaptureSettings(JsonView jsonValue) : 
    m_captureInterval(0),
    m_captureIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureSettings& FrameCaptureSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captureInterval"))
  {
    m_captureInterval = jsonValue.GetInteger("captureInterval");

    m_captureIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureSettings::Jsonize() const
{
  JsonValue payload;

  if(m_captureIntervalHasBeenSet)
  {
   payload.WithInteger("captureInterval", m_captureInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
