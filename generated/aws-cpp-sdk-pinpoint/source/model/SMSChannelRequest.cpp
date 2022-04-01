/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SMSChannelRequest.h>
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

SMSChannelRequest::SMSChannelRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_shortCodeHasBeenSet(false)
{
}

SMSChannelRequest::SMSChannelRequest(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_shortCodeHasBeenSet(false)
{
  *this = jsonValue;
}

SMSChannelRequest& SMSChannelRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

    m_senderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShortCode"))
  {
    m_shortCode = jsonValue.GetString("ShortCode");

    m_shortCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue SMSChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  if(m_shortCodeHasBeenSet)
  {
   payload.WithString("ShortCode", m_shortCode);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
