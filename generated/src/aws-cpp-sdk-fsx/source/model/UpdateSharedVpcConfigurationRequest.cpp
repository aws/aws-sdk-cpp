/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateSharedVpcConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSharedVpcConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet)
  {
   payload.WithString("EnableFsxRouteTableUpdatesFromParticipantAccounts", m_enableFsxRouteTableUpdatesFromParticipantAccounts);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSharedVpcConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateSharedVpcConfiguration"));
  return headers;

}




