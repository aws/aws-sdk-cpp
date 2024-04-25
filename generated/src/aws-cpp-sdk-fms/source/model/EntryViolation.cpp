/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EntryViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

EntryViolation::EntryViolation() : 
    m_expectedEntryHasBeenSet(false),
    m_expectedEvaluationOrderHasBeenSet(false),
    m_actualEvaluationOrderHasBeenSet(false),
    m_entryAtExpectedEvaluationOrderHasBeenSet(false),
    m_entriesWithConflictsHasBeenSet(false),
    m_entryViolationReasonsHasBeenSet(false)
{
}

EntryViolation::EntryViolation(JsonView jsonValue) : 
    m_expectedEntryHasBeenSet(false),
    m_expectedEvaluationOrderHasBeenSet(false),
    m_actualEvaluationOrderHasBeenSet(false),
    m_entryAtExpectedEvaluationOrderHasBeenSet(false),
    m_entriesWithConflictsHasBeenSet(false),
    m_entryViolationReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

EntryViolation& EntryViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExpectedEntry"))
  {
    m_expectedEntry = jsonValue.GetObject("ExpectedEntry");

    m_expectedEntryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedEvaluationOrder"))
  {
    m_expectedEvaluationOrder = jsonValue.GetString("ExpectedEvaluationOrder");

    m_expectedEvaluationOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualEvaluationOrder"))
  {
    m_actualEvaluationOrder = jsonValue.GetString("ActualEvaluationOrder");

    m_actualEvaluationOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntryAtExpectedEvaluationOrder"))
  {
    m_entryAtExpectedEvaluationOrder = jsonValue.GetObject("EntryAtExpectedEvaluationOrder");

    m_entryAtExpectedEvaluationOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntriesWithConflicts"))
  {
    Aws::Utils::Array<JsonView> entriesWithConflictsJsonList = jsonValue.GetArray("EntriesWithConflicts");
    for(unsigned entriesWithConflictsIndex = 0; entriesWithConflictsIndex < entriesWithConflictsJsonList.GetLength(); ++entriesWithConflictsIndex)
    {
      m_entriesWithConflicts.push_back(entriesWithConflictsJsonList[entriesWithConflictsIndex].AsObject());
    }
    m_entriesWithConflictsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntryViolationReasons"))
  {
    Aws::Utils::Array<JsonView> entryViolationReasonsJsonList = jsonValue.GetArray("EntryViolationReasons");
    for(unsigned entryViolationReasonsIndex = 0; entryViolationReasonsIndex < entryViolationReasonsJsonList.GetLength(); ++entryViolationReasonsIndex)
    {
      m_entryViolationReasons.push_back(EntryViolationReasonMapper::GetEntryViolationReasonForName(entryViolationReasonsJsonList[entryViolationReasonsIndex].AsString()));
    }
    m_entryViolationReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntryViolation::Jsonize() const
{
  JsonValue payload;

  if(m_expectedEntryHasBeenSet)
  {
   payload.WithObject("ExpectedEntry", m_expectedEntry.Jsonize());

  }

  if(m_expectedEvaluationOrderHasBeenSet)
  {
   payload.WithString("ExpectedEvaluationOrder", m_expectedEvaluationOrder);

  }

  if(m_actualEvaluationOrderHasBeenSet)
  {
   payload.WithString("ActualEvaluationOrder", m_actualEvaluationOrder);

  }

  if(m_entryAtExpectedEvaluationOrderHasBeenSet)
  {
   payload.WithObject("EntryAtExpectedEvaluationOrder", m_entryAtExpectedEvaluationOrder.Jsonize());

  }

  if(m_entriesWithConflictsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesWithConflictsJsonList(m_entriesWithConflicts.size());
   for(unsigned entriesWithConflictsIndex = 0; entriesWithConflictsIndex < entriesWithConflictsJsonList.GetLength(); ++entriesWithConflictsIndex)
   {
     entriesWithConflictsJsonList[entriesWithConflictsIndex].AsObject(m_entriesWithConflicts[entriesWithConflictsIndex].Jsonize());
   }
   payload.WithArray("EntriesWithConflicts", std::move(entriesWithConflictsJsonList));

  }

  if(m_entryViolationReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryViolationReasonsJsonList(m_entryViolationReasons.size());
   for(unsigned entryViolationReasonsIndex = 0; entryViolationReasonsIndex < entryViolationReasonsJsonList.GetLength(); ++entryViolationReasonsIndex)
   {
     entryViolationReasonsJsonList[entryViolationReasonsIndex].AsString(EntryViolationReasonMapper::GetNameForEntryViolationReason(m_entryViolationReasons[entryViolationReasonsIndex]));
   }
   payload.WithArray("EntryViolationReasons", std::move(entryViolationReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
