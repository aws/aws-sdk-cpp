/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ConfigureAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureAgentRequest::ConfigureAgentRequest() : 
    m_fleetInstanceIdHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false)
{
}

Aws::String ConfigureAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetInstanceIdHasBeenSet)
  {
   payload.WithString("fleetInstanceId", m_fleetInstanceId);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(MetadataFieldMapper::GetNameForMetadataField(metadataItem.first), metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  return payload.View().WriteReadable();
}




