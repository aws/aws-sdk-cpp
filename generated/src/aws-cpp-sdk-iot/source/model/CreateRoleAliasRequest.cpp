/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateRoleAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRoleAliasRequest::CreateRoleAliasRequest() : 
    m_roleAliasHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_credentialDurationSeconds(0),
    m_credentialDurationSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRoleAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_credentialDurationSecondsHasBeenSet)
  {
   payload.WithInteger("credentialDurationSeconds", m_credentialDurationSeconds);

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




