/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CancelImageCreationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelImageCreationRequest::CancelImageCreationRequest() : 
    m_imageBuildVersionArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CancelImageCreationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




