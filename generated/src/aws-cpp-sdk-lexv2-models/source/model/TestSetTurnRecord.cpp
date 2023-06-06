/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetTurnRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetTurnRecord::TestSetTurnRecord() : 
    m_recordNumber(0),
    m_recordNumberHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_turnNumber(0),
    m_turnNumberHasBeenSet(false),
    m_turnSpecificationHasBeenSet(false)
{
}

TestSetTurnRecord::TestSetTurnRecord(JsonView jsonValue) : 
    m_recordNumber(0),
    m_recordNumberHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_turnNumber(0),
    m_turnNumberHasBeenSet(false),
    m_turnSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetTurnRecord& TestSetTurnRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordNumber"))
  {
    m_recordNumber = jsonValue.GetInt64("recordNumber");

    m_recordNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

    m_conversationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("turnNumber"))
  {
    m_turnNumber = jsonValue.GetInteger("turnNumber");

    m_turnNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("turnSpecification"))
  {
    m_turnSpecification = jsonValue.GetObject("turnSpecification");

    m_turnSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetTurnRecord::Jsonize() const
{
  JsonValue payload;

  if(m_recordNumberHasBeenSet)
  {
   payload.WithInt64("recordNumber", m_recordNumber);

  }

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_turnNumberHasBeenSet)
  {
   payload.WithInteger("turnNumber", m_turnNumber);

  }

  if(m_turnSpecificationHasBeenSet)
  {
   payload.WithObject("turnSpecification", m_turnSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
