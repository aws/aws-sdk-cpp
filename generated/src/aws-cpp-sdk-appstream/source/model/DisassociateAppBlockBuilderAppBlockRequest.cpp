/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DisassociateAppBlockBuilderAppBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateAppBlockBuilderAppBlockRequest::DisassociateAppBlockBuilderAppBlockRequest() : 
    m_appBlockArnHasBeenSet(false),
    m_appBlockBuilderNameHasBeenSet(false)
{
}

Aws::String DisassociateAppBlockBuilderAppBlockRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_appBlockBuilderNameHasBeenSet)
  {
   payload.WithString("AppBlockBuilderName", m_appBlockBuilderName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateAppBlockBuilderAppBlockRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DisassociateAppBlockBuilderAppBlock"));
  return headers;

}




