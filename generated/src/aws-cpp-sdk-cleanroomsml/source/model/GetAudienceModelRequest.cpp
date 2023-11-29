/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetAudienceModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAudienceModelRequest::GetAudienceModelRequest() : 
    m_audienceModelArnHasBeenSet(false)
{
}

Aws::String GetAudienceModelRequest::SerializePayload() const
{
  return {};
}




