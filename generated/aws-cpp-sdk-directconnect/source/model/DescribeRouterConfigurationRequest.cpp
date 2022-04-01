/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeRouterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRouterConfigurationRequest::DescribeRouterConfigurationRequest() : 
    m_virtualInterfaceIdHasBeenSet(false),
    m_routerTypeIdentifierHasBeenSet(false)
{
}

Aws::String DescribeRouterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_routerTypeIdentifierHasBeenSet)
  {
   payload.WithString("routerTypeIdentifier", m_routerTypeIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRouterConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeRouterConfiguration"));
  return headers;

}




