/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ChoiceUpdate::ChoiceUpdate() : 
    m_status(ChoiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reason(ChoiceReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_notesHasBeenSet(false)
{
}

ChoiceUpdate::ChoiceUpdate(JsonView jsonValue) : 
    m_status(ChoiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reason(ChoiceReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_notesHasBeenSet(false)
{
  *this = jsonValue;
}

ChoiceUpdate& ChoiceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChoiceStatusMapper::GetChoiceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ChoiceReasonMapper::GetChoiceReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
  }

  return *this;
}

JsonValue ChoiceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChoiceStatusMapper::GetNameForChoiceStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ChoiceReasonMapper::GetNameForChoiceReason(m_reason));
  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
