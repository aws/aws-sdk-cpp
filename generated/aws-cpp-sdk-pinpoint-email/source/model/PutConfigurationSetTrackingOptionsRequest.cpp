/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfigurationSetTrackingOptionsRequest::PutConfigurationSetTrackingOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_customRedirectDomainHasBeenSet(false)
{
}

Aws::String PutConfigurationSetTrackingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customRedirectDomainHasBeenSet)
  {
   payload.WithString("CustomRedirectDomain", m_customRedirectDomain);

  }

  return payload.View().WriteReadable();
}




