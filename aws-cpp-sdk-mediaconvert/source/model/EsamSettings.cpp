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

#include <aws/mediaconvert/model/EsamSettings.h>
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

EsamSettings::EsamSettings() : 
    m_manifestConfirmConditionNotificationHasBeenSet(false),
    m_responseSignalPreroll(0),
    m_responseSignalPrerollHasBeenSet(false),
    m_signalProcessingNotificationHasBeenSet(false)
{
}

EsamSettings::EsamSettings(JsonView jsonValue) : 
    m_manifestConfirmConditionNotificationHasBeenSet(false),
    m_responseSignalPreroll(0),
    m_responseSignalPrerollHasBeenSet(false),
    m_signalProcessingNotificationHasBeenSet(false)
{
  *this = jsonValue;
}

EsamSettings& EsamSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("manifestConfirmConditionNotification"))
  {
    m_manifestConfirmConditionNotification = jsonValue.GetObject("manifestConfirmConditionNotification");

    m_manifestConfirmConditionNotificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseSignalPreroll"))
  {
    m_responseSignalPreroll = jsonValue.GetInteger("responseSignalPreroll");

    m_responseSignalPrerollHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalProcessingNotification"))
  {
    m_signalProcessingNotification = jsonValue.GetObject("signalProcessingNotification");

    m_signalProcessingNotificationHasBeenSet = true;
  }

  return *this;
}

JsonValue EsamSettings::Jsonize() const
{
  JsonValue payload;

  if(m_manifestConfirmConditionNotificationHasBeenSet)
  {
   payload.WithObject("manifestConfirmConditionNotification", m_manifestConfirmConditionNotification.Jsonize());

  }

  if(m_responseSignalPrerollHasBeenSet)
  {
   payload.WithInteger("responseSignalPreroll", m_responseSignalPreroll);

  }

  if(m_signalProcessingNotificationHasBeenSet)
  {
   payload.WithObject("signalProcessingNotification", m_signalProcessingNotification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
