/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/EventSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

EventSource::EventSource() : 
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(EventSourceState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

EventSource::EventSource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(EventSourceState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

EventSource& EventSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EventSourceStateMapper::GetEventSourceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EventSourceStateMapper::GetNameForEventSourceState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
