/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/MessageMetadata.h>
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

MessageMetadata::MessageMetadata() : 
    m_messageIdHasBeenSet(false),
    m_receiptsHasBeenSet(false)
{
}

MessageMetadata::MessageMetadata(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_receiptsHasBeenSet(false)
{
  *this = jsonValue;
}

MessageMetadata& MessageMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Receipts"))
  {
    Aws::Utils::Array<JsonView> receiptsJsonList = jsonValue.GetArray("Receipts");
    for(unsigned receiptsIndex = 0; receiptsIndex < receiptsJsonList.GetLength(); ++receiptsIndex)
    {
      m_receipts.push_back(receiptsJsonList[receiptsIndex].AsObject());
    }
    m_receiptsHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_receiptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receiptsJsonList(m_receipts.size());
   for(unsigned receiptsIndex = 0; receiptsIndex < receiptsJsonList.GetLength(); ++receiptsIndex)
   {
     receiptsJsonList[receiptsIndex].AsObject(m_receipts[receiptsIndex].Jsonize());
   }
   payload.WithArray("Receipts", std::move(receiptsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
