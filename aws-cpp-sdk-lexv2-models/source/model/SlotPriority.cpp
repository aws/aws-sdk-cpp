/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotPriority.h>
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

SlotPriority::SlotPriority() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_slotIdHasBeenSet(false)
{
}

SlotPriority::SlotPriority(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_slotIdHasBeenSet(false)
{
  *this = jsonValue;
}

SlotPriority& SlotPriority::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotId"))
  {
    m_slotId = jsonValue.GetString("slotId");

    m_slotIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotPriority::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_slotIdHasBeenSet)
  {
   payload.WithString("slotId", m_slotId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
