/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DeleteProfileObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProfileObjectRequest::DeleteProfileObjectRequest() : 
    m_profileIdHasBeenSet(false),
    m_profileObjectUniqueKeyHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String DeleteProfileObjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_profileObjectUniqueKeyHasBeenSet)
  {
   payload.WithString("ProfileObjectUniqueKey", m_profileObjectUniqueKey);

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  return payload.View().WriteReadable();
}




