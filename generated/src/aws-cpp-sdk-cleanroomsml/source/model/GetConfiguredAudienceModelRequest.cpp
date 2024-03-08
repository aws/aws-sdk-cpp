/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetConfiguredAudienceModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfiguredAudienceModelRequest::GetConfiguredAudienceModelRequest() : 
    m_configuredAudienceModelArnHasBeenSet(false)
{
}

Aws::String GetConfiguredAudienceModelRequest::SerializePayload() const
{
  return {};
}




