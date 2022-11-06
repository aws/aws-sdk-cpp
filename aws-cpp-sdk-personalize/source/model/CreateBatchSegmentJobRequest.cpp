/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateBatchSegmentJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBatchSegmentJobRequest::CreateBatchSegmentJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_solutionVersionArnHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_numResults(0),
    m_numResultsHasBeenSet(false),
    m_jobInputHasBeenSet(false),
    m_jobOutputHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBatchSegmentJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_filterArnHasBeenSet)
  {
   payload.WithString("filterArn", m_filterArn);

  }

  if(m_numResultsHasBeenSet)
  {
   payload.WithInteger("numResults", m_numResults);

  }

  if(m_jobInputHasBeenSet)
  {
   payload.WithObject("jobInput", m_jobInput.Jsonize());

  }

  if(m_jobOutputHasBeenSet)
  {
   payload.WithObject("jobOutput", m_jobOutput.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBatchSegmentJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateBatchSegmentJob"));
  return headers;

}




