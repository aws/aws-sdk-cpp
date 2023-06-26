/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DeleteVpcConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVpcConnectorRequest::DeleteVpcConnectorRequest() : 
    m_vpcConnectorArnHasBeenSet(false)
{
}

Aws::String DeleteVpcConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcConnectorArnHasBeenSet)
  {
   payload.WithString("VpcConnectorArn", m_vpcConnectorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVpcConnectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DeleteVpcConnector"));
  return headers;

}




