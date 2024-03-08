/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/GetInvestigationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInvestigationRequest::GetInvestigationRequest() : 
    m_graphArnHasBeenSet(false),
    m_investigationIdHasBeenSet(false)
{
}

Aws::String GetInvestigationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_investigationIdHasBeenSet)
  {
   payload.WithString("InvestigationId", m_investigationId);

  }

  return payload.View().WriteReadable();
}




