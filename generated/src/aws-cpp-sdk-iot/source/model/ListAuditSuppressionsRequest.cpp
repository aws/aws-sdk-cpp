/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListAuditSuppressionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAuditSuppressionsRequest::ListAuditSuppressionsRequest() : 
    m_checkNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_ascendingOrder(false),
    m_ascendingOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAuditSuppressionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checkNameHasBeenSet)
  {
   payload.WithString("checkName", m_checkName);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("resourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  if(m_ascendingOrderHasBeenSet)
  {
   payload.WithBool("ascendingOrder", m_ascendingOrder);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




