/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/PutCaseEventConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutCaseEventConfigurationRequest::PutCaseEventConfigurationRequest() : 
    m_domainIdHasBeenSet(false),
    m_eventBridgeHasBeenSet(false)
{
}

Aws::String PutCaseEventConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventBridgeHasBeenSet)
  {
   payload.WithObject("eventBridge", m_eventBridge.Jsonize());

  }

  return payload.View().WriteReadable();
}




