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

SMSChannelRequest::SMSChannelRequest(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_shortCodeHasBeenSet(false)
{
  *this = jsonValue;
}

SMSChannelRequest& SMSChannelRequest::operator =(const JsonValue& jsonValue)
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
