/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateProvisionedModelThroughputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProvisionedModelThroughputRequest::CreateProvisionedModelThroughputRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_modelUnits(0),
    m_modelUnitsHasBeenSet(false),
    m_provisionedModelNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_commitmentDuration(CommitmentDuration::NOT_SET),
    m_commitmentDurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProvisionedModelThroughputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_modelUnitsHasBeenSet)
  {
   payload.WithInteger("modelUnits", m_modelUnits);

  }

  if(m_provisionedModelNameHasBeenSet)
  {
   payload.WithString("provisionedModelName", m_provisionedModelName);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_commitmentDurationHasBeenSet)
  {
   payload.WithString("commitmentDuration", CommitmentDurationMapper::GetNameForCommitmentDuration(m_commitmentDuration));
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




