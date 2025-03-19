/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/UpdateDatasetEntriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDatasetEntriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_changesHasBeenSet)
  {
   payload.WithString("Changes", HashingUtils::Base64Encode(m_changes));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDatasetEntriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




