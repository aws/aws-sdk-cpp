/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotResolutionTestResultItem.h>
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

SlotResolutionTestResultItem::SlotResolutionTestResultItem() : 
    m_slotNameHasBeenSet(false),
    m_resultCountsHasBeenSet(false)
{
}

SlotResolutionTestResultItem::SlotResolutionTestResultItem(JsonView jsonValue) : 
    m_slotNameHasBeenSet(false),
    m_resultCountsHasBeenSet(false)
{
  *this = jsonValue;
}

SlotResolutionTestResultItem& SlotResolutionTestResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotName"))
  {
    m_slotName = jsonValue.GetString("slotName");

    m_slotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultCounts"))
  {
    m_resultCounts = jsonValue.GetObject("resultCounts");

    m_resultCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotResolutionTestResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("slotName", m_slotName);

  }

  if(m_resultCountsHasBeenSet)
  {
   payload.WithObject("resultCounts", m_resultCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
