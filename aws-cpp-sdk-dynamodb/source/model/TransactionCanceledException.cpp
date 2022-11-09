/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactionCanceledException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

TransactionCanceledException::TransactionCanceledException() : 
    m_messageHasBeenSet(false),
    m_cancellationReasonsHasBeenSet(false)
{
}

TransactionCanceledException::TransactionCanceledException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_cancellationReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

TransactionCanceledException& TransactionCanceledException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CancellationReasons"))
  {
    Aws::Utils::Array<JsonView> cancellationReasonsJsonList = jsonValue.GetArray("CancellationReasons");
    for(unsigned cancellationReasonsIndex = 0; cancellationReasonsIndex < cancellationReasonsJsonList.GetLength(); ++cancellationReasonsIndex)
    {
      m_cancellationReasons.push_back(cancellationReasonsJsonList[cancellationReasonsIndex].AsObject());
    }
    m_cancellationReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactionCanceledException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_cancellationReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cancellationReasonsJsonList(m_cancellationReasons.size());
   for(unsigned cancellationReasonsIndex = 0; cancellationReasonsIndex < cancellationReasonsJsonList.GetLength(); ++cancellationReasonsIndex)
   {
     cancellationReasonsJsonList[cancellationReasonsIndex].AsObject(m_cancellationReasons[cancellationReasonsIndex].Jsonize());
   }
   payload.WithArray("CancellationReasons", std::move(cancellationReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
