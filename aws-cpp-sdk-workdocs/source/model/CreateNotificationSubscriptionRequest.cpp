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

#include <aws/workdocs/model/CreateNotificationSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNotificationSubscriptionRequest::CreateNotificationSubscriptionRequest() : 
    m_organizationIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false),
    m_subscriptionType(SubscriptionType::NOT_SET),
    m_subscriptionTypeHasBeenSet(false)
{
}

Aws::String CreateNotificationSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", SubscriptionProtocolTypeMapper::GetNameForSubscriptionProtocolType(m_protocol));
  }

  if(m_subscriptionTypeHasBeenSet)
  {
   payload.WithString("SubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  return payload.WriteReadable();
}




