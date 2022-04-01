/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeWorkteamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkteamRequest::DescribeWorkteamRequest() : 
    m_workteamNameHasBeenSet(false)
{
}

Aws::String DescribeWorkteamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workteamNameHasBeenSet)
  {
   payload.WithString("WorkteamName", m_workteamName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkteamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeWorkteam"));
  return headers;

}




