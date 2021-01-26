/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeSubscribedWorkteamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSubscribedWorkteamRequest::DescribeSubscribedWorkteamRequest() : 
    m_workteamArnHasBeenSet(false)
{
}

Aws::String DescribeSubscribedWorkteamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSubscribedWorkteamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeSubscribedWorkteam"));
  return headers;

}




