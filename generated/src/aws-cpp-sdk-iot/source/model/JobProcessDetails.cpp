/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobProcessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobProcessDetails::JobProcessDetails() : 
    m_processingTargetsHasBeenSet(false),
    m_numberOfCanceledThings(0),
    m_numberOfCanceledThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false),
    m_numberOfFailedThings(0),
    m_numberOfFailedThingsHasBeenSet(false),
    m_numberOfRejectedThings(0),
    m_numberOfRejectedThingsHasBeenSet(false),
    m_numberOfQueuedThings(0),
    m_numberOfQueuedThingsHasBeenSet(false),
    m_numberOfInProgressThings(0),
    m_numberOfInProgressThingsHasBeenSet(false),
    m_numberOfRemovedThings(0),
    m_numberOfRemovedThingsHasBeenSet(false),
    m_numberOfTimedOutThings(0),
    m_numberOfTimedOutThingsHasBeenSet(false)
{
}

JobProcessDetails::JobProcessDetails(JsonView jsonValue) : 
    m_processingTargetsHasBeenSet(false),
    m_numberOfCanceledThings(0),
    m_numberOfCanceledThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false),
    m_numberOfFailedThings(0),
    m_numberOfFailedThingsHasBeenSet(false),
    m_numberOfRejectedThings(0),
    m_numberOfRejectedThingsHasBeenSet(false),
    m_numberOfQueuedThings(0),
    m_numberOfQueuedThingsHasBeenSet(false),
    m_numberOfInProgressThings(0),
    m_numberOfInProgressThingsHasBeenSet(false),
    m_numberOfRemovedThings(0),
    m_numberOfRemovedThingsHasBeenSet(false),
    m_numberOfTimedOutThings(0),
    m_numberOfTimedOutThingsHasBeenSet(false)
{
  *this = jsonValue;
}

JobProcessDetails& JobProcessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("processingTargets"))
  {
    Aws::Utils::Array<JsonView> processingTargetsJsonList = jsonValue.GetArray("processingTargets");
    for(unsigned processingTargetsIndex = 0; processingTargetsIndex < processingTargetsJsonList.GetLength(); ++processingTargetsIndex)
    {
      m_processingTargets.push_back(processingTargetsJsonList[processingTargetsIndex].AsString());
    }
    m_processingTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfCanceledThings"))
  {
    m_numberOfCanceledThings = jsonValue.GetInteger("numberOfCanceledThings");

    m_numberOfCanceledThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfSucceededThings"))
  {
    m_numberOfSucceededThings = jsonValue.GetInteger("numberOfSucceededThings");

    m_numberOfSucceededThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfFailedThings"))
  {
    m_numberOfFailedThings = jsonValue.GetInteger("numberOfFailedThings");

    m_numberOfFailedThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRejectedThings"))
  {
    m_numberOfRejectedThings = jsonValue.GetInteger("numberOfRejectedThings");

    m_numberOfRejectedThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfQueuedThings"))
  {
    m_numberOfQueuedThings = jsonValue.GetInteger("numberOfQueuedThings");

    m_numberOfQueuedThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfInProgressThings"))
  {
    m_numberOfInProgressThings = jsonValue.GetInteger("numberOfInProgressThings");

    m_numberOfInProgressThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRemovedThings"))
  {
    m_numberOfRemovedThings = jsonValue.GetInteger("numberOfRemovedThings");

    m_numberOfRemovedThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfTimedOutThings"))
  {
    m_numberOfTimedOutThings = jsonValue.GetInteger("numberOfTimedOutThings");

    m_numberOfTimedOutThingsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobProcessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_processingTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processingTargetsJsonList(m_processingTargets.size());
   for(unsigned processingTargetsIndex = 0; processingTargetsIndex < processingTargetsJsonList.GetLength(); ++processingTargetsIndex)
   {
     processingTargetsJsonList[processingTargetsIndex].AsString(m_processingTargets[processingTargetsIndex]);
   }
   payload.WithArray("processingTargets", std::move(processingTargetsJsonList));

  }

  if(m_numberOfCanceledThingsHasBeenSet)
  {
   payload.WithInteger("numberOfCanceledThings", m_numberOfCanceledThings);

  }

  if(m_numberOfSucceededThingsHasBeenSet)
  {
   payload.WithInteger("numberOfSucceededThings", m_numberOfSucceededThings);

  }

  if(m_numberOfFailedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfFailedThings", m_numberOfFailedThings);

  }

  if(m_numberOfRejectedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfRejectedThings", m_numberOfRejectedThings);

  }

  if(m_numberOfQueuedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfQueuedThings", m_numberOfQueuedThings);

  }

  if(m_numberOfInProgressThingsHasBeenSet)
  {
   payload.WithInteger("numberOfInProgressThings", m_numberOfInProgressThings);

  }

  if(m_numberOfRemovedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfRemovedThings", m_numberOfRemovedThings);

  }

  if(m_numberOfTimedOutThingsHasBeenSet)
  {
   payload.WithInteger("numberOfTimedOutThings", m_numberOfTimedOutThings);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
