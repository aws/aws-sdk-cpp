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

#include <aws/medialive/model/InputAttachment.h>
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

InputAttachment::InputAttachment() : 
    m_inputIdHasBeenSet(false),
    m_inputSettingsHasBeenSet(false)
{
}

InputAttachment::InputAttachment(const JsonValue& jsonValue) : 
    m_inputIdHasBeenSet(false),
    m_inputSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

InputAttachment& InputAttachment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("inputId"))
  {
    m_inputId = jsonValue.GetString("inputId");

    m_inputIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputSettings"))
  {
    m_inputSettings = jsonValue.GetObject("inputSettings");

    m_inputSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue InputAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("inputId", m_inputId);

  }

  if(m_inputSettingsHasBeenSet)
  {
   payload.WithObject("inputSettings", m_inputSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
