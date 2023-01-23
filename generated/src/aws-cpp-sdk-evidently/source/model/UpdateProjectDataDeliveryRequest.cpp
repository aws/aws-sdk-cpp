/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/UpdateProjectDataDeliveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectDataDeliveryRequest::UpdateProjectDataDeliveryRequest() : 
    m_cloudWatchLogsHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_s3DestinationHasBeenSet(false)
{
}

Aws::String UpdateProjectDataDeliveryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload.View().WriteReadable();
}




