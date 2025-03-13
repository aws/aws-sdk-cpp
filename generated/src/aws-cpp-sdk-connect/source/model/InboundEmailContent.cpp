/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InboundEmailContent.h>
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

InboundEmailContent::InboundEmailContent(JsonView jsonValue)
{
  *this = jsonValue;
}

InboundEmailContent& InboundEmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageSourceType"))
  {
    m_messageSourceType = InboundMessageSourceTypeMapper::GetInboundMessageSourceTypeForName(jsonValue.GetString("MessageSourceType"));
    m_messageSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RawMessage"))
  {
    m_rawMessage = jsonValue.GetObject("RawMessage");
    m_rawMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundEmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_messageSourceTypeHasBeenSet)
  {
   payload.WithString("MessageSourceType", InboundMessageSourceTypeMapper::GetNameForInboundMessageSourceType(m_messageSourceType));
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
