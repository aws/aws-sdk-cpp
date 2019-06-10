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

#include <aws/personalize/model/CreateSolutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSolutionRequest::CreateSolutionRequest() : 
    m_nameHasBeenSet(false),
    m_performHPO(false),
    m_performHPOHasBeenSet(false),
    m_performAutoML(false),
    m_performAutoMLHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_solutionConfigHasBeenSet(false)
{
}

Aws::String CreateSolutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_performHPOHasBeenSet)
  {
   payload.WithBool("performHPO", m_performHPO);

  }

  if(m_performAutoMLHasBeenSet)
  {
   payload.WithBool("performAutoML", m_performAutoML);

  }

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_solutionConfigHasBeenSet)
  {
   payload.WithObject("solutionConfig", m_solutionConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSolutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateSolution"));
  return headers;

}




