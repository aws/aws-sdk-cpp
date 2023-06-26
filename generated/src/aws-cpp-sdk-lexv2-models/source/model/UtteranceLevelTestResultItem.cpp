/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceLevelTestResultItem.h>
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

UtteranceLevelTestResultItem::UtteranceLevelTestResultItem() : 
    m_recordNumber(0),
    m_recordNumberHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_turnResultHasBeenSet(false)
{
}

UtteranceLevelTestResultItem::UtteranceLevelTestResultItem(JsonView jsonValue) : 
    m_recordNumber(0),
    m_recordNumberHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_turnResultHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceLevelTestResultItem& UtteranceLevelTestResultItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("turnResult"))
  {
    m_turnResult = jsonValue.GetObject("turnResult");

    m_turnResultHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceLevelTestResultItem::Jsonize() const
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

  if(m_turnResultHasBeenSet)
  {
   payload.WithObject("turnResult", m_turnResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
