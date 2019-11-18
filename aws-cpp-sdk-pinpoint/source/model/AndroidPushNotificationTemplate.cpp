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

#include <aws/pinpoint/model/AndroidPushNotificationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

AndroidPushNotificationTemplate::AndroidPushNotificationTemplate() : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_imageIconUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_smallImageIconUrlHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

AndroidPushNotificationTemplate::AndroidPushNotificationTemplate(JsonView jsonValue) : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_imageIconUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_smallImageIconUrlHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

AndroidPushNotificationTemplate& AndroidPushNotificationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageIconUrl"))
  {
    m_imageIconUrl = jsonValue.GetString("ImageIconUrl");

    m_imageIconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawContent"))
  {
    m_rawContent = jsonValue.GetString("RawContent");

    m_rawContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallImageIconUrl"))
  {
    m_smallImageIconUrl = jsonValue.GetString("SmallImageIconUrl");

    m_smallImageIconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sound"))
  {
    m_sound = jsonValue.GetString("Sound");

    m_soundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue AndroidPushNotificationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_imageIconUrlHasBeenSet)
  {
   payload.WithString("ImageIconUrl", m_imageIconUrl);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", m_rawContent);

  }

  if(m_smallImageIconUrlHasBeenSet)
  {
   payload.WithString("SmallImageIconUrl", m_smallImageIconUrl);

  }

  if(m_soundHasBeenSet)
  {
   payload.WithString("Sound", m_sound);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
