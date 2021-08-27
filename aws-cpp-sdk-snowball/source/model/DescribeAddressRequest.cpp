/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DescribeAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAddressRequest::DescribeAddressRequest() : 
    m_addressIdHasBeenSet(false)
{
}

Aws::String DescribeAddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAddressRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.DescribeAddress"));
  return headers;

}




