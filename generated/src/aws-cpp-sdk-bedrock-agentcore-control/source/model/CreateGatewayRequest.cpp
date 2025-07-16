/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("protocolType", GatewayProtocolTypeMapper::GetNameForGatewayProtocolType(m_protocolType));
  }

  if(m_protocolConfigurationHasBeenSet)
  {
   payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());

  }

  if(m_authorizerTypeHasBeenSet)
  {
   payload.WithString("authorizerType", AuthorizerTypeMapper::GetNameForAuthorizerType(m_authorizerType));
  }

  if(m_authorizerConfigurationHasBeenSet)
  {
   payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_exceptionLevelHasBeenSet)
  {
   payload.WithString("exceptionLevel", ExceptionLevelMapper::GetNameForExceptionLevel(m_exceptionLevel));
  }

  return payload.View().WriteReadable();
}




