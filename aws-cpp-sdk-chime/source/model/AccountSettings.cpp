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

#include <aws/chime/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AccountSettings::AccountSettings() : 
    m_disableRemoteControl(false),
    m_disableRemoteControlHasBeenSet(false),
    m_enableDialOut(false),
    m_enableDialOutHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_disableRemoteControl(false),
    m_disableRemoteControlHasBeenSet(false),
    m_enableDialOut(false),
    m_enableDialOutHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisableRemoteControl"))
  {
    m_disableRemoteControl = jsonValue.GetBool("DisableRemoteControl");

    m_disableRemoteControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDialOut"))
  {
    m_enableDialOut = jsonValue.GetBool("EnableDialOut");

    m_enableDialOutHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_disableRemoteControlHasBeenSet)
  {
   payload.WithBool("DisableRemoteControl", m_disableRemoteControl);

  }

  if(m_enableDialOutHasBeenSet)
  {
   payload.WithBool("EnableDialOut", m_enableDialOut);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
