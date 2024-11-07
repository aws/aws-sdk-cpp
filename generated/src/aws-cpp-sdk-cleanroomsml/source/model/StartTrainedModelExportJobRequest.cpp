/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StartTrainedModelExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTrainedModelExportJobRequest::StartTrainedModelExportJobRequest() : 
    m_nameHasBeenSet(false),
    m_trainedModelArnHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String StartTrainedModelExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




