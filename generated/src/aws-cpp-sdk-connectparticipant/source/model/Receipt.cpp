/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/Receipt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

Receipt::Receipt() : 
    m_deliveredTimestampHasBeenSet(false),
    m_readTimestampHasBeenSet(false),
    m_recipientParticipantIdHasBeenSet(false)
{
}

Receipt::Receipt(JsonView jsonValue) : 
    m_deliveredTimestampHasBeenSet(false),
    m_readTimestampHasBeenSet(false),
    m_recipientParticipantIdHasBeenSet(false)
{
  *this = jsonValue;
}

Receipt& Receipt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveredTimestamp"))
  {
    m_deliveredTimestamp = jsonValue.GetString("DeliveredTimestamp");

    m_deliveredTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadTimestamp"))
  {
    m_readTimestamp = jsonValue.GetString("ReadTimestamp");

    m_readTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecipientParticipantId"))
  {
    m_recipientParticipantId = jsonValue.GetString("RecipientParticipantId");

    m_recipientParticipantIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Receipt::Jsonize() const
{
  JsonValue payload;

  if(m_deliveredTimestampHasBeenSet)
  {
   payload.WithString("DeliveredTimestamp", m_deliveredTimestamp);

  }

  if(m_readTimestampHasBeenSet)
  {
   payload.WithString("ReadTimestamp", m_readTimestamp);

  }

  if(m_recipientParticipantIdHasBeenSet)
  {
   payload.WithString("RecipientParticipantId", m_recipientParticipantId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
