/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreateVpcEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcEndpointRequest::CreateVpcEndpointRequest() : 
    m_domainArnHasBeenSet(false),
    m_vpcOptionsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateVpcEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("DomainArn", m_domainArn);

  }

  if(m_vpcOptionsHasBeenSet)
  {
   payload.WithObject("VpcOptions", m_vpcOptions.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




