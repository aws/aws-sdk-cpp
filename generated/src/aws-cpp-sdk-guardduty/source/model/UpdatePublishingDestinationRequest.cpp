/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdatePublishingDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePublishingDestinationRequest::UpdatePublishingDestinationRequest() : 
    m_detectorIdHasBeenSet(false),
    m_destinationIdHasBeenSet(false),
    m_destinationPropertiesHasBeenSet(false)
{
}

Aws::String UpdatePublishingDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationPropertiesHasBeenSet)
  {
   payload.WithObject("destinationProperties", m_destinationProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




