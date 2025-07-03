/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateUploadJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateUploadJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
   }
   payload.WithObject("Fields", std::move(fieldsJsonMap));

  }

  if(m_uniqueKeyHasBeenSet)
  {
   payload.WithString("UniqueKey", m_uniqueKey);

  }

  if(m_dataExpiryHasBeenSet)
  {
   payload.WithInteger("DataExpiry", m_dataExpiry);

  }

  return payload.View().WriteReadable();
}




