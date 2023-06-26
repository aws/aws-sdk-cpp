/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetRepositoryScanningConfigurationRequest::BatchGetRepositoryScanningConfigurationRequest() : 
    m_repositoryNamesHasBeenSet(false)
{
}

Aws::String BatchGetRepositoryScanningConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoryNamesJsonList(m_repositoryNames.size());
   for(unsigned repositoryNamesIndex = 0; repositoryNamesIndex < repositoryNamesJsonList.GetLength(); ++repositoryNamesIndex)
   {
     repositoryNamesJsonList[repositoryNamesIndex].AsString(m_repositoryNames[repositoryNamesIndex]);
   }
   payload.WithArray("repositoryNames", std::move(repositoryNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetRepositoryScanningConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.BatchGetRepositoryScanningConfiguration"));
  return headers;

}




