/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAppImageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppImageConfigRequest::DescribeAppImageConfigRequest() : 
    m_appImageConfigNameHasBeenSet(false)
{
}

Aws::String DescribeAppImageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAppImageConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeAppImageConfig"));
  return headers;

}




