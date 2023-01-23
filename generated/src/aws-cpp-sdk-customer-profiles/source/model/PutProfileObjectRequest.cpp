/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutProfileObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutProfileObjectRequest::PutProfileObjectRequest() : 
    m_objectTypeNameHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String PutProfileObjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_objectHasBeenSet)
  {
   payload.WithString("Object", m_object);

  }

  return payload.View().WriteReadable();
}




