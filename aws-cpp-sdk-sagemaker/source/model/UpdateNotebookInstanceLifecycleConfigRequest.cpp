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

#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotebookInstanceLifecycleConfigRequest::UpdateNotebookInstanceLifecycleConfigRequest() : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_onCreateHasBeenSet(false),
    m_onStartHasBeenSet(false)
{
}

Aws::String UpdateNotebookInstanceLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  if(m_onCreateHasBeenSet)
  {
   Array<JsonValue> onCreateJsonList(m_onCreate.size());
   for(unsigned onCreateIndex = 0; onCreateIndex < onCreateJsonList.GetLength(); ++onCreateIndex)
   {
     onCreateJsonList[onCreateIndex].AsObject(m_onCreate[onCreateIndex].Jsonize());
   }
   payload.WithArray("OnCreate", std::move(onCreateJsonList));

  }

  if(m_onStartHasBeenSet)
  {
   Array<JsonValue> onStartJsonList(m_onStart.size());
   for(unsigned onStartIndex = 0; onStartIndex < onStartJsonList.GetLength(); ++onStartIndex)
   {
     onStartJsonList[onStartIndex].AsObject(m_onStart[onStartIndex].Jsonize());
   }
   payload.WithArray("OnStart", std::move(onStartJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotebookInstanceLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateNotebookInstanceLifecycleConfig"));
  return headers;

}




