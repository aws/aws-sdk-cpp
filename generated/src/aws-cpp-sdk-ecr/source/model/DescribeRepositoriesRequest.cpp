/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRepositoriesRequest::DescribeRepositoriesRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeRepositoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoryNamesJsonList(m_repositoryNames.size());
   for(unsigned repositoryNamesIndex = 0; repositoryNamesIndex < repositoryNamesJsonList.GetLength(); ++repositoryNamesIndex)
   {
     repositoryNamesJsonList[repositoryNamesIndex].AsString(m_repositoryNames[repositoryNamesIndex]);
   }
   payload.WithArray("repositoryNames", std::move(repositoryNamesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRepositoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DescribeRepositories"));
  return headers;

}




