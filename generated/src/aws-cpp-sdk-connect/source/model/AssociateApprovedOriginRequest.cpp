/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateApprovedOriginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateApprovedOriginRequest::AssociateApprovedOriginRequest() : 
    m_instanceIdHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

Aws::String AssociateApprovedOriginRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", m_origin);

  }

  return payload.View().WriteReadable();
}




