/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DescribeObservabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeObservabilityConfigurationRequest::DescribeObservabilityConfigurationRequest() : 
    m_observabilityConfigurationArnHasBeenSet(false)
{
}

Aws::String DescribeObservabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_observabilityConfigurationArnHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationArn", m_observabilityConfigurationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeObservabilityConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DescribeObservabilityConfiguration"));
  return headers;

}




