/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetWorkUnitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkUnitsRequest::GetWorkUnitsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetWorkUnitsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  return payload.View().WriteReadable();
}




