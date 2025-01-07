﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DescribeConnectionTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectionTypeRequest::DescribeConnectionTypeRequest() : 
    m_connectionTypeHasBeenSet(false)
{
}

Aws::String DescribeConnectionTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", m_connectionType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConnectionTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DescribeConnectionType"));
  return headers;

}




