/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGroupVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.insert(Aws::Http::HeaderValuePair("x-amzn-client-token", ss.str()));
    ss.str("");
  }

  return headers;

}




