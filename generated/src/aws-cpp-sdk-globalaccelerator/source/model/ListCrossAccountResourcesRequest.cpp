/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCrossAccountResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCrossAccountResourcesRequest::ListCrossAccountResourcesRequest() : 
    m_acceleratorArnHasBeenSet(false),
    m_resourceOwnerAwsAccountIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListCrossAccountResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceleratorArnHasBeenSet)
  {
   payload.WithString("AcceleratorArn", m_acceleratorArn);

  }

  if(m_resourceOwnerAwsAccountIdHasBeenSet)
  {
   payload.WithString("ResourceOwnerAwsAccountId", m_resourceOwnerAwsAccountId);

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

Aws::Http::HeaderValueCollection ListCrossAccountResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.ListCrossAccountResources"));
  return headers;

}




