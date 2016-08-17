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
#include <aws/machinelearning/model/PredictRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PredictRequest::PredictRequest() : 
    m_mLModelIdHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_predictEndpointHasBeenSet(false)
{
}

Aws::String PredictRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_recordHasBeenSet)
  {
   JsonValue recordJsonMap;
   for(auto& recordItem : m_record)
   {
     recordJsonMap.WithString(recordItem.first, recordItem.second);
   }
   payload.WithObject("Record", std::move(recordJsonMap));

  }

  if(m_predictEndpointHasBeenSet)
  {
   payload.WithString("PredictEndpoint", m_predictEndpoint);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PredictRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.Predict"));
  return headers;

}



