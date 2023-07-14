/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateLogPatternRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLogPatternRequest::UpdateLogPatternRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_patternSetNameHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false)
{
}

Aws::String UpdateLogPatternRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_patternSetNameHasBeenSet)
  {
   payload.WithString("PatternSetName", m_patternSetName);

  }

  if(m_patternNameHasBeenSet)
  {
   payload.WithString("PatternName", m_patternName);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", m_pattern);

  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("Rank", m_rank);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLogPatternRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateLogPattern"));
  return headers;

}




