/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




