/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutSubscriptionFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSubscriptionFilterRequest::PutSubscriptionFilterRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_distribution(Distribution::NOT_SET),
    m_distributionHasBeenSet(false)
{
}

Aws::String PutSubscriptionFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", m_filterName);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_distributionHasBeenSet)
  {
   payload.WithString("distribution", DistributionMapper::GetNameForDistribution(m_distribution));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSubscriptionFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutSubscriptionFilter"));
  return headers;

}




