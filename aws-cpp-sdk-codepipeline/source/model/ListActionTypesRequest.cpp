/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ListActionTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListActionTypesRequest::ListActionTypesRequest() : 
    m_actionOwnerFilter(ActionOwner::NOT_SET),
    m_actionOwnerFilterHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListActionTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionOwnerFilterHasBeenSet)
  {
   payload.WithString("actionOwnerFilter", ActionOwnerMapper::GetNameForActionOwner(m_actionOwnerFilter));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListActionTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.ListActionTypes"));
  return headers;

}




