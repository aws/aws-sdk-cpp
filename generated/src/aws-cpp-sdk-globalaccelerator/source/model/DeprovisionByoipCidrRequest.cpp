/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/DeprovisionByoipCidrRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeprovisionByoipCidrRequest::DeprovisionByoipCidrRequest() : 
    m_cidrHasBeenSet(false)
{
}

Aws::String DeprovisionByoipCidrRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeprovisionByoipCidrRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.DeprovisionByoipCidr"));
  return headers;

}




