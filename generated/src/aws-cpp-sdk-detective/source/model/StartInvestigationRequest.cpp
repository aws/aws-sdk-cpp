/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/StartInvestigationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartInvestigationRequest::StartInvestigationRequest() : 
    m_graphArnHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_scopeStartTimeHasBeenSet(false),
    m_scopeEndTimeHasBeenSet(false)
{
}

Aws::String StartInvestigationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("EntityArn", m_entityArn);

  }

  if(m_scopeStartTimeHasBeenSet)
  {
   payload.WithString("ScopeStartTime", m_scopeStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_scopeEndTimeHasBeenSet)
  {
   payload.WithString("ScopeEndTime", m_scopeEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload.View().WriteReadable();
}




