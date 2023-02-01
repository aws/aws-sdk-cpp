/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/StartQueryPlanningRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryPlanningRequest::StartQueryPlanningRequest() : 
    m_queryPlanningContextHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

Aws::String StartQueryPlanningRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryPlanningContextHasBeenSet)
  {
   payload.WithObject("QueryPlanningContext", m_queryPlanningContext.Jsonize());

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  return payload.View().WriteReadable();
}




