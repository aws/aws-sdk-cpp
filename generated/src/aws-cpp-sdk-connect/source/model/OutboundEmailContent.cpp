/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundEmailContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

OutboundEmailContent::OutboundEmailContent(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundEmailContent& OutboundEmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageSourceType"))
  {
    m_messageSourceType = OutboundMessageSourceTypeMapper::GetOutboundMessageSourceTypeForName(jsonValue.GetString("MessageSourceType"));
    m_messageSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplatedMessageConfig"))
  {
    m_templatedMessageConfig = jsonValue.GetObject("TemplatedMessageConfig");
    m_templatedMessageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RawMessage"))
  {
    m_rawMessage = jsonValue.GetObject("RawMessage");
    m_rawMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundEmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_messageSourceTypeHasBeenSet)
  {
   payload.WithString("MessageSourceType", OutboundMessageSourceTypeMapper::GetNameForOutboundMessageSourceType(m_messageSourceType));
  }

  if(m_templatedMessageConfigHasBeenSet)
  {
   payload.WithObject("TemplatedMessageConfig", m_templatedMessageConfig.Jsonize());

  }

  if(m_rawMessageHasBeenSet)
  {
   payload.WithObject("RawMessage", m_rawMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
