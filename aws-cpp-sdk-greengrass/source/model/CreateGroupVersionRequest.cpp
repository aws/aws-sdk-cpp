/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateGroupVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGroupVersionRequest::CreateGroupVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_connectorDefinitionVersionArnHasBeenSet(false),
    m_coreDefinitionVersionArnHasBeenSet(false),
    m_deviceDefinitionVersionArnHasBeenSet(false),
    m_functionDefinitionVersionArnHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_loggerDefinitionVersionArnHasBeenSet(false),
    m_resourceDefinitionVersionArnHasBeenSet(false),
    m_subscriptionDefinitionVersionArnHasBeenSet(false)
{
}

Aws::String CreateGroupVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("ConnectorDefinitionVersionArn", m_connectorDefinitionVersionArn);

  }

  if(m_coreDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("CoreDefinitionVersionArn", m_coreDefinitionVersionArn);

  }

  if(m_deviceDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("DeviceDefinitionVersionArn", m_deviceDefinitionVersionArn);

  }

  if(m_functionDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("FunctionDefinitionVersionArn", m_functionDefinitionVersionArn);

  }

  if(m_loggerDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("LoggerDefinitionVersionArn", m_loggerDefinitionVersionArn);

  }

  if(m_resourceDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("ResourceDefinitionVersionArn", m_resourceDefinitionVersionArn);

  }

  if(m_subscriptionDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("SubscriptionDefinitionVersionArn", m_subscriptionDefinitionVersionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGroupVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




