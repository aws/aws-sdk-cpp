/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutEventsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventsConfigurationRequest::PutEventsConfigurationRequest() : 
    m_accountIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_outboundEventsHTTPSEndpointHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false)
{
}

Aws::String PutEventsConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outboundEventsHTTPSEndpointHasBeenSet)
  {
   payload.WithString("OutboundEventsHTTPSEndpoint", m_outboundEventsHTTPSEndpoint);

  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("LambdaFunctionArn", m_lambdaFunctionArn);

  }

  return payload.View().WriteReadable();
}




