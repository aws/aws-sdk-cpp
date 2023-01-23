/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/CreateAttendeeRequestItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

CreateAttendeeRequestItem::CreateAttendeeRequestItem() : 
    m_externalUserIdHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

CreateAttendeeRequestItem::CreateAttendeeRequestItem(JsonView jsonValue) : 
    m_externalUserIdHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAttendeeRequestItem& CreateAttendeeRequestItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExternalUserId"))
  {
    m_externalUserId = jsonValue.GetString("ExternalUserId");

    m_externalUserIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");

    m_capabilitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAttendeeRequestItem::Jsonize() const
{
  JsonValue payload;

  if(m_externalUserIdHasBeenSet)
  {
   payload.WithString("ExternalUserId", m_externalUserId);

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
