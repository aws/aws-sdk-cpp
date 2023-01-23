/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCardinalityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCardinalityRequest::GetCardinalityRequest() : 
    m_indexNameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_aggregationFieldHasBeenSet(false),
    m_queryVersionHasBeenSet(false)
{
}

Aws::String GetCardinalityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_aggregationFieldHasBeenSet)
  {
   payload.WithString("aggregationField", m_aggregationField);

  }

  if(m_queryVersionHasBeenSet)
  {
   payload.WithString("queryVersion", m_queryVersion);

  }

  return payload.View().WriteReadable();
}




