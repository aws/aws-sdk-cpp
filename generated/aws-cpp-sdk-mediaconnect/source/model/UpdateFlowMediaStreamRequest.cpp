/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowMediaStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowMediaStreamRequest::UpdateFlowMediaStreamRequest() : 
    m_attributesHasBeenSet(false),
    m_clockRate(0),
    m_clockRateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false),
    m_mediaStreamType(MediaStreamType::NOT_SET),
    m_mediaStreamTypeHasBeenSet(false),
    m_videoFormatHasBeenSet(false)
{
}

Aws::String UpdateFlowMediaStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_clockRateHasBeenSet)
  {
   payload.WithInteger("clockRate", m_clockRate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_mediaStreamTypeHasBeenSet)
  {
   payload.WithString("mediaStreamType", MediaStreamTypeMapper::GetNameForMediaStreamType(m_mediaStreamType));
  }

  if(m_videoFormatHasBeenSet)
  {
   payload.WithString("videoFormat", m_videoFormat);

  }

  return payload.View().WriteReadable();
}




