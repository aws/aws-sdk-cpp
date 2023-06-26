/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/UpdatePipelineNotificationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineNotificationsRequest::UpdatePipelineNotificationsRequest() : 
    m_idHasBeenSet(false),
    m_notificationsHasBeenSet(false)
{
}

Aws::String UpdatePipelineNotificationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationsHasBeenSet)
  {
   payload.WithObject("Notifications", m_notifications.Jsonize());

  }

  return payload.View().WriteReadable();
}




