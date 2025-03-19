/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/TaskProcessingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

TaskProcessingDetails::TaskProcessingDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskProcessingDetails& TaskProcessingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfCanceledThings"))
  {
    m_numberOfCanceledThings = jsonValue.GetInteger("NumberOfCanceledThings");
    m_numberOfCanceledThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfFailedThings"))
  {
    m_numberOfFailedThings = jsonValue.GetInteger("NumberOfFailedThings");
    m_numberOfFailedThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfInProgressThings"))
  {
    m_numberOfInProgressThings = jsonValue.GetInteger("NumberOfInProgressThings");
    m_numberOfInProgressThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfQueuedThings"))
  {
    m_numberOfQueuedThings = jsonValue.GetInteger("numberOfQueuedThings");
    m_numberOfQueuedThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfRejectedThings"))
  {
    m_numberOfRejectedThings = jsonValue.GetInteger("numberOfRejectedThings");
    m_numberOfRejectedThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfRemovedThings"))
  {
    m_numberOfRemovedThings = jsonValue.GetInteger("numberOfRemovedThings");
    m_numberOfRemovedThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfSucceededThings"))
  {
    m_numberOfSucceededThings = jsonValue.GetInteger("numberOfSucceededThings");
    m_numberOfSucceededThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfTimedOutThings"))
  {
    m_numberOfTimedOutThings = jsonValue.GetInteger("numberOfTimedOutThings");
    m_numberOfTimedOutThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processingTargets"))
  {
    Aws::Utils::Array<JsonView> processingTargetsJsonList = jsonValue.GetArray("processingTargets");
    for(unsigned processingTargetsIndex = 0; processingTargetsIndex < processingTargetsJsonList.GetLength(); ++processingTargetsIndex)
    {
      m_processingTargets.push_back(processingTargetsJsonList[processingTargetsIndex].AsString());
    }
    m_processingTargetsHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskProcessingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfCanceledThingsHasBeenSet)
  {
   payload.WithInteger("NumberOfCanceledThings", m_numberOfCanceledThings);

  }

  if(m_numberOfFailedThingsHasBeenSet)
  {
   payload.WithInteger("NumberOfFailedThings", m_numberOfFailedThings);

  }

  if(m_numberOfInProgressThingsHasBeenSet)
  {
   payload.WithInteger("NumberOfInProgressThings", m_numberOfInProgressThings);

  }

  if(m_numberOfQueuedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfQueuedThings", m_numberOfQueuedThings);

  }

  if(m_numberOfRejectedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfRejectedThings", m_numberOfRejectedThings);

  }

  if(m_numberOfRemovedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfRemovedThings", m_numberOfRemovedThings);

  }

  if(m_numberOfSucceededThingsHasBeenSet)
  {
   payload.WithInteger("numberOfSucceededThings", m_numberOfSucceededThings);

  }

  if(m_numberOfTimedOutThingsHasBeenSet)
  {
   payload.WithInteger("numberOfTimedOutThings", m_numberOfTimedOutThings);

  }

  if(m_processingTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processingTargetsJsonList(m_processingTargets.size());
   for(unsigned processingTargetsIndex = 0; processingTargetsIndex < processingTargetsJsonList.GetLength(); ++processingTargetsIndex)
   {
     processingTargetsJsonList[processingTargetsIndex].AsString(m_processingTargets[processingTargetsIndex]);
   }
   payload.WithArray("processingTargets", std::move(processingTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
