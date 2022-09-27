/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListObservabilityConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListObservabilityConfigurationsRequest::ListObservabilityConfigurationsRequest() : 
    m_observabilityConfigurationNameHasBeenSet(false),
    m_latestOnly(false),
    m_latestOnlyHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListObservabilityConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_observabilityConfigurationNameHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationName", m_observabilityConfigurationName);

  }

  if(m_latestOnlyHasBeenSet)
  {
   payload.WithBool("LatestOnly", m_latestOnly);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListObservabilityConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.ListObservabilityConfigurations"));
  return headers;

}




