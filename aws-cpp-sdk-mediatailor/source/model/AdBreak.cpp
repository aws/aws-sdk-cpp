/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdBreak.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AdBreak::AdBreak() : 
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false),
    m_slateHasBeenSet(false),
    m_spliceInsertMessageHasBeenSet(false)
{
}

AdBreak::AdBreak(JsonView jsonValue) : 
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false),
    m_slateHasBeenSet(false),
    m_spliceInsertMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AdBreak& AdBreak::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OffsetMillis"))
  {
    m_offsetMillis = jsonValue.GetInt64("OffsetMillis");

    m_offsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Slate"))
  {
    m_slate = jsonValue.GetObject("Slate");

    m_slateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpliceInsertMessage"))
  {
    m_spliceInsertMessage = jsonValue.GetObject("SpliceInsertMessage");

    m_spliceInsertMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AdBreak::Jsonize() const
{
  JsonValue payload;

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_offsetMillisHasBeenSet)
  {
   payload.WithInt64("OffsetMillis", m_offsetMillis);

  }

  if(m_slateHasBeenSet)
  {
   payload.WithObject("Slate", m_slate.Jsonize());

  }

  if(m_spliceInsertMessageHasBeenSet)
  {
   payload.WithObject("SpliceInsertMessage", m_spliceInsertMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
