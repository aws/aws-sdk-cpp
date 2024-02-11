/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppBlockBuilderAppBlockAssociationsRequest::DescribeAppBlockBuilderAppBlockAssociationsRequest() : 
    m_appBlockArnHasBeenSet(false),
    m_appBlockBuilderNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeAppBlockBuilderAppBlockAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_appBlockBuilderNameHasBeenSet)
  {
   payload.WithString("AppBlockBuilderName", m_appBlockBuilderName);

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

Aws::Http::HeaderValueCollection DescribeAppBlockBuilderAppBlockAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DescribeAppBlockBuilderAppBlockAssociations"));
  return headers;

}




