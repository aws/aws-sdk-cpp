/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetWorkUnitResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWorkUnitResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_workUnitIdHasBeenSet)
  {
   payload.WithInt64("WorkUnitId", m_workUnitId);

  }

  if(m_workUnitTokenHasBeenSet)
  {
   payload.WithString("WorkUnitToken", m_workUnitToken);

  }

  return payload.View().WriteReadable();
}




