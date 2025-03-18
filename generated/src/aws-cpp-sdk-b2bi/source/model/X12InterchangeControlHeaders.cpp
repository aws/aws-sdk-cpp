/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12InterchangeControlHeaders.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12InterchangeControlHeaders::X12InterchangeControlHeaders(JsonView jsonValue)
{
  *this = jsonValue;
}

X12InterchangeControlHeaders& X12InterchangeControlHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("senderIdQualifier"))
  {
    m_senderIdQualifier = jsonValue.GetString("senderIdQualifier");
    m_senderIdQualifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("senderId"))
  {
    m_senderId = jsonValue.GetString("senderId");
    m_senderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("receiverIdQualifier"))
  {
    m_receiverIdQualifier = jsonValue.GetString("receiverIdQualifier");
    m_receiverIdQualifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("receiverId"))
  {
    m_receiverId = jsonValue.GetString("receiverId");
    m_receiverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repetitionSeparator"))
  {
    m_repetitionSeparator = jsonValue.GetString("repetitionSeparator");
    m_repetitionSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acknowledgmentRequestedCode"))
  {
    m_acknowledgmentRequestedCode = jsonValue.GetString("acknowledgmentRequestedCode");
    m_acknowledgmentRequestedCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageIndicatorCode"))
  {
    m_usageIndicatorCode = jsonValue.GetString("usageIndicatorCode");
    m_usageIndicatorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue X12InterchangeControlHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_senderIdQualifierHasBeenSet)
  {
   payload.WithString("senderIdQualifier", m_senderIdQualifier);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("senderId", m_senderId);

  }

  if(m_receiverIdQualifierHasBeenSet)
  {
   payload.WithString("receiverIdQualifier", m_receiverIdQualifier);

  }

  if(m_receiverIdHasBeenSet)
  {
   payload.WithString("receiverId", m_receiverId);

  }

  if(m_repetitionSeparatorHasBeenSet)
  {
   payload.WithString("repetitionSeparator", m_repetitionSeparator);

  }

  if(m_acknowledgmentRequestedCodeHasBeenSet)
  {
   payload.WithString("acknowledgmentRequestedCode", m_acknowledgmentRequestedCode);

  }

  if(m_usageIndicatorCodeHasBeenSet)
  {
   payload.WithString("usageIndicatorCode", m_usageIndicatorCode);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
