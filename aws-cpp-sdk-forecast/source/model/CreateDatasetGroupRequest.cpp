/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/forecast/model/CreateDatasetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetGroupRequest::CreateDatasetGroupRequest() : 
    m_datasetGroupNameHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_datasetArnsHasBeenSet(false)
{
}

Aws::String CreateDatasetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetGroupNameHasBeenSet)
  {
   payload.WithString("DatasetGroupName", m_datasetGroupName);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_datasetArnsHasBeenSet)
  {
   Array<JsonValue> datasetArnsJsonList(m_datasetArns.size());
   for(unsigned datasetArnsIndex = 0; datasetArnsIndex < datasetArnsJsonList.GetLength(); ++datasetArnsIndex)
   {
     datasetArnsJsonList[datasetArnsIndex].AsString(m_datasetArns[datasetArnsIndex]);
   }
   payload.WithArray("DatasetArns", std::move(datasetArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateDatasetGroup"));
  return headers;

}




