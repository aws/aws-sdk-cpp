/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DeleteConfiguredAudienceModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfiguredAudienceModelRequest::DeleteConfiguredAudienceModelRequest() : 
    m_configuredAudienceModelArnHasBeenSet(false)
{
}

Aws::String DeleteConfiguredAudienceModelRequest::SerializePayload() const
{
  return {};
}




