/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/EventParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

EventParameters::EventParameters() : 
    m_eventType(EventTypeValues::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_snapshotOwnerHasBeenSet(false),
    m_descriptionRegexHasBeenSet(false)
{
}

EventParameters::EventParameters(JsonView jsonValue) : 
    m_eventType(EventTypeValues::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_snapshotOwnerHasBeenSet(false),
    m_descriptionRegexHasBeenSet(false)
{
  *this = jsonValue;
}

EventParameters& EventParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = EventTypeValuesMapper::GetEventTypeValuesForName(jsonValue.GetString("EventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotOwner"))
  {
    Aws::Utils::Array<JsonView> snapshotOwnerJsonList = jsonValue.GetArray("SnapshotOwner");
    for(unsigned snapshotOwnerIndex = 0; snapshotOwnerIndex < snapshotOwnerJsonList.GetLength(); ++snapshotOwnerIndex)
    {
      m_snapshotOwner.push_back(snapshotOwnerJsonList[snapshotOwnerIndex].AsString());
    }
    m_snapshotOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DescriptionRegex"))
  {
    m_descriptionRegex = jsonValue.GetString("DescriptionRegex");

    m_descriptionRegexHasBeenSet = true;
  }

  return *this;
}

JsonValue EventParameters::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", EventTypeValuesMapper::GetNameForEventTypeValues(m_eventType));
  }

  if(m_snapshotOwnerHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotOwnerJsonList(m_snapshotOwner.size());
   for(unsigned snapshotOwnerIndex = 0; snapshotOwnerIndex < snapshotOwnerJsonList.GetLength(); ++snapshotOwnerIndex)
   {
     snapshotOwnerJsonList[snapshotOwnerIndex].AsString(m_snapshotOwner[snapshotOwnerIndex]);
   }
   payload.WithArray("SnapshotOwner", std::move(snapshotOwnerJsonList));

  }

  if(m_descriptionRegexHasBeenSet)
  {
   payload.WithString("DescriptionRegex", m_descriptionRegex);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
