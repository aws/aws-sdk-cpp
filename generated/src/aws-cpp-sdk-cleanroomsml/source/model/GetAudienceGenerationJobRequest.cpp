/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetAudienceGenerationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAudienceGenerationJobRequest::GetAudienceGenerationJobRequest() : 
    m_audienceGenerationJobArnHasBeenSet(false)
{
}

Aws::String GetAudienceGenerationJobRequest::SerializePayload() const
{
  return {};
}




