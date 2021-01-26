/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetInventorySchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInventorySchemaRequest::GetInventorySchemaRequest() : 
    m_typeNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_aggregator(false),
    m_aggregatorHasBeenSet(false),
    m_subType(false),
    m_subTypeHasBeenSet(false)
{
}

Aws::String GetInventorySchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_aggregatorHasBeenSet)
  {
   payload.WithBool("Aggregator", m_aggregator);

  }

  if(m_subTypeHasBeenSet)
  {
   payload.WithBool("SubType", m_subType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInventorySchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetInventorySchema"));
  return headers;

}




