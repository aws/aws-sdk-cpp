/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateDatalakeExceptionsExpiryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatalakeExceptionsExpiryRequest::UpdateDatalakeExceptionsExpiryRequest() : 
    m_exceptionMessageExpiry(0),
    m_exceptionMessageExpiryHasBeenSet(false)
{
}

Aws::String UpdateDatalakeExceptionsExpiryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exceptionMessageExpiryHasBeenSet)
  {
   payload.WithInt64("exceptionMessageExpiry", m_exceptionMessageExpiry);

  }

  return payload.View().WriteReadable();
}




