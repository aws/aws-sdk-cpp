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

#include <aws/alexaforbusiness/model/Room.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Room::Room() : 
    m_roomArnHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_profileArnHasBeenSet(false)
{
}

Room::Room(const JsonValue& jsonValue) : 
    m_roomArnHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_profileArnHasBeenSet(false)
{
  *this = jsonValue;
}

Room& Room::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RoomArn"))
  {
    m_roomArn = jsonValue.GetString("RoomArn");

    m_roomArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoomName"))
  {
    m_roomName = jsonValue.GetString("RoomName");

    m_roomNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderCalendarId"))
  {
    m_providerCalendarId = jsonValue.GetString("ProviderCalendarId");

    m_providerCalendarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Room::Jsonize() const
{
  JsonValue payload;

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_roomNameHasBeenSet)
  {
   payload.WithString("RoomName", m_roomName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerCalendarIdHasBeenSet)
  {
   payload.WithString("ProviderCalendarId", m_providerCalendarId);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
