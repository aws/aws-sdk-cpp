/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetQueryStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryStateRequest::GetQueryStateRequest() : 
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetQueryStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  return payload.View().WriteReadable();
}




