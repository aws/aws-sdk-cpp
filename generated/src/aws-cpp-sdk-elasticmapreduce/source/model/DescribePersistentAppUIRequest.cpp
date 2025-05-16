/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/DescribePersistentAppUIRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribePersistentAppUIRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_persistentAppUIIdHasBeenSet)
  {
   payload.WithString("PersistentAppUIId", m_persistentAppUIId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePersistentAppUIRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.DescribePersistentAppUI"));
  return headers;

}




