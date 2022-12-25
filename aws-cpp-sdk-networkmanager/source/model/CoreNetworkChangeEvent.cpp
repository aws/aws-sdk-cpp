/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkChangeEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkChangeEvent::CoreNetworkChangeEvent() : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_identifierPathHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreNetworkChangeEvent::CoreNetworkChangeEvent(JsonView jsonValue) : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_identifierPathHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkChangeEvent& CoreNetworkChangeEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifierPath"))
  {
    m_identifierPath = jsonValue.GetString("IdentifierPath");

    m_identifierPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeStatusMapper::GetChangeStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    m_values = jsonValue.GetObject("Values");

    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkChangeEvent::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChangeTypeMapper::GetNameForChangeType(m_type));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_identifierPathHasBeenSet)
  {
   payload.WithString("IdentifierPath", m_identifierPath);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChangeStatusMapper::GetNameForChangeStatus(m_status));
  }

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
