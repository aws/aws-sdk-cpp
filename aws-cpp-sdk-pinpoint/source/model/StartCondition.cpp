/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/StartCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

StartCondition::StartCondition() : 
    m_descriptionHasBeenSet(false),
    m_eventStartConditionHasBeenSet(false),
    m_segmentStartConditionHasBeenSet(false)
{
}

StartCondition::StartCondition(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_eventStartConditionHasBeenSet(false),
    m_segmentStartConditionHasBeenSet(false)
{
  *this = jsonValue;
}

StartCondition& StartCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventStartCondition"))
  {
    m_eventStartCondition = jsonValue.GetObject("EventStartCondition");

    m_eventStartConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentStartCondition"))
  {
    m_segmentStartCondition = jsonValue.GetObject("SegmentStartCondition");

    m_segmentStartConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue StartCondition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eventStartConditionHasBeenSet)
  {
   payload.WithObject("EventStartCondition", m_eventStartCondition.Jsonize());

  }

  if(m_segmentStartConditionHasBeenSet)
  {
   payload.WithObject("SegmentStartCondition", m_segmentStartCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
