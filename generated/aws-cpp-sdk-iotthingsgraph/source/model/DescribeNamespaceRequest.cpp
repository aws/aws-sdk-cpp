/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DescribeNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeNamespaceRequest::DescribeNamespaceRequest() : 
    m_namespaceNameHasBeenSet(false)
{
}

Aws::String DescribeNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeNamespaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.DescribeNamespace"));
  return headers;

}




