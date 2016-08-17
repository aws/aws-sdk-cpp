/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/model/CreateDataSourceFromRedshiftRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest() : 
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_dataSpecHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_computeStatistics(false),
    m_computeStatisticsHasBeenSet(false)
{
}

Aws::String CreateDataSourceFromRedshiftRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("DataSourceName", m_dataSourceName);

  }

  if(m_dataSpecHasBeenSet)
  {
   payload.WithObject("DataSpec", m_dataSpec.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_computeStatisticsHasBeenSet)
  {
   payload.WithBool("ComputeStatistics", m_computeStatistics);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataSourceFromRedshiftRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateDataSourceFromRedshift"));
  return headers;

}



