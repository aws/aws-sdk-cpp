/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateMLInputChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMLInputChannelRequest::CreateMLInputChannelRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_configuredModelAlgorithmAssociationsHasBeenSet(false),
    m_inputChannelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_retentionInDays(0),
    m_retentionInDaysHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMLInputChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configuredModelAlgorithmAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configuredModelAlgorithmAssociationsJsonList(m_configuredModelAlgorithmAssociations.size());
   for(unsigned configuredModelAlgorithmAssociationsIndex = 0; configuredModelAlgorithmAssociationsIndex < configuredModelAlgorithmAssociationsJsonList.GetLength(); ++configuredModelAlgorithmAssociationsIndex)
   {
     configuredModelAlgorithmAssociationsJsonList[configuredModelAlgorithmAssociationsIndex].AsString(m_configuredModelAlgorithmAssociations[configuredModelAlgorithmAssociationsIndex]);
   }
   payload.WithArray("configuredModelAlgorithmAssociations", std::move(configuredModelAlgorithmAssociationsJsonList));

  }

  if(m_inputChannelHasBeenSet)
  {
   payload.WithObject("inputChannel", m_inputChannel.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_retentionInDaysHasBeenSet)
  {
   payload.WithInteger("retentionInDays", m_retentionInDays);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




