/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/AssociateTrackerConsumerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateTrackerConsumerRequest::AssociateTrackerConsumerRequest() : 
    m_consumerArnHasBeenSet(false),
    m_trackerNameHasBeenSet(false)
{
}

Aws::String AssociateTrackerConsumerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumerArnHasBeenSet)
  {
   payload.WithString("ConsumerArn", m_consumerArn);

  }

  return payload.View().WriteReadable();
}




