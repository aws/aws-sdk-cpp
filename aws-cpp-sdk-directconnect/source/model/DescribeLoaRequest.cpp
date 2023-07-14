/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeLoaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLoaRequest::DescribeLoaRequest() : 
    m_connectionIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_loaContentType(LoaContentType::NOT_SET),
    m_loaContentTypeHasBeenSet(false)
{
}

Aws::String DescribeLoaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_loaContentTypeHasBeenSet)
  {
   payload.WithString("loaContentType", LoaContentTypeMapper::GetNameForLoaContentType(m_loaContentType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLoaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeLoa"));
  return headers;

}




