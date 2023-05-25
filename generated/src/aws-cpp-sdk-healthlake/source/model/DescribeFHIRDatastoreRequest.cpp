/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFHIRDatastoreRequest::DescribeFHIRDatastoreRequest() : 
    m_datastoreIdHasBeenSet(false)
{
}

Aws::String DescribeFHIRDatastoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("DatastoreId", m_datastoreId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFHIRDatastoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.DescribeFHIRDatastore"));
  return headers;

}




