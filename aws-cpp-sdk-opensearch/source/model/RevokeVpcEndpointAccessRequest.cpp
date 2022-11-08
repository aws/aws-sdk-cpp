/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeVpcEndpointAccessRequest::RevokeVpcEndpointAccessRequest() : 
    m_domainNameHasBeenSet(false),
    m_accountHasBeenSet(false)
{
}

Aws::String RevokeVpcEndpointAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  return payload.View().WriteReadable();
}




