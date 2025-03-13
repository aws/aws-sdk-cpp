/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/CreateLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateLakeFormationIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_externalFilteringHasBeenSet)
  {
   payload.WithObject("ExternalFiltering", m_externalFiltering.Jsonize());

  }

  if(m_shareRecipientsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shareRecipientsJsonList(m_shareRecipients.size());
   for(unsigned shareRecipientsIndex = 0; shareRecipientsIndex < shareRecipientsJsonList.GetLength(); ++shareRecipientsIndex)
   {
     shareRecipientsJsonList[shareRecipientsIndex].AsObject(m_shareRecipients[shareRecipientsIndex].Jsonize());
   }
   payload.WithArray("ShareRecipients", std::move(shareRecipientsJsonList));

  }

  return payload.View().WriteReadable();
}




