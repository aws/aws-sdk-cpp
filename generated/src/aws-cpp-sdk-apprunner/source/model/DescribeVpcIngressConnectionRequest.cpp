/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DescribeVpcIngressConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVpcIngressConnectionRequest::DescribeVpcIngressConnectionRequest() : 
    m_vpcIngressConnectionArnHasBeenSet(false)
{
}

Aws::String DescribeVpcIngressConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVpcIngressConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DescribeVpcIngressConnection"));
  return headers;

}




