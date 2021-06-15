/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateSourceLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSourceLocationRequest::UpdateSourceLocationRequest() : 
    m_accessConfigurationHasBeenSet(false),
    m_defaultSegmentDeliveryConfigurationHasBeenSet(false),
    m_httpConfigurationHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

Aws::String UpdateSourceLocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessConfigurationHasBeenSet)
  {
   payload.WithObject("AccessConfiguration", m_accessConfiguration.Jsonize());

  }

  if(m_defaultSegmentDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultSegmentDeliveryConfiguration", m_defaultSegmentDeliveryConfiguration.Jsonize());

  }

  if(m_httpConfigurationHasBeenSet)
  {
   payload.WithObject("HttpConfiguration", m_httpConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




