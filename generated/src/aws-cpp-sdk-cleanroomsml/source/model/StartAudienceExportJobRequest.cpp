/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StartAudienceExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAudienceExportJobRequest::StartAudienceExportJobRequest() : 
    m_audienceGenerationJobArnHasBeenSet(false),
    m_audienceSizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String StartAudienceExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_audienceGenerationJobArnHasBeenSet)
  {
   payload.WithString("audienceGenerationJobArn", m_audienceGenerationJobArn);

  }

  if(m_audienceSizeHasBeenSet)
  {
   payload.WithObject("audienceSize", m_audienceSize.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




