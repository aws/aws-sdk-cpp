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

#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutExternalModelRequest::PutExternalModelRequest() : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false)
{
}

Aws::String PutExternalModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  if(m_modelSourceHasBeenSet)
  {
   payload.WithString("modelSource", ModelSourceMapper::GetNameForModelSource(m_modelSource));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithObject("role", m_role.Jsonize());

  }

  if(m_inputConfigurationHasBeenSet)
  {
   payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_modelEndpointStatusHasBeenSet)
  {
   payload.WithString("modelEndpointStatus", ModelEndpointStatusMapper::GetNameForModelEndpointStatus(m_modelEndpointStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutExternalModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.PutExternalModel"));
  return headers;

}




