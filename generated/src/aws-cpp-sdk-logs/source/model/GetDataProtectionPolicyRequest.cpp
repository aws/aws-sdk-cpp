/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetDataProtectionPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataProtectionPolicyRequest::GetDataProtectionPolicyRequest() : 
    m_logGroupIdentifierHasBeenSet(false)
{
}

Aws::String GetDataProtectionPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDataProtectionPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetDataProtectionPolicy"));
  return headers;

}




