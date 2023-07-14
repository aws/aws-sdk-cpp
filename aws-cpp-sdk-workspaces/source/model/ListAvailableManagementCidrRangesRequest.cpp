/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ListAvailableManagementCidrRangesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAvailableManagementCidrRangesRequest::ListAvailableManagementCidrRangesRequest() : 
    m_managementCidrRangeConstraintHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAvailableManagementCidrRangesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managementCidrRangeConstraintHasBeenSet)
  {
   payload.WithString("ManagementCidrRangeConstraint", m_managementCidrRangeConstraint);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAvailableManagementCidrRangesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ListAvailableManagementCidrRanges"));
  return headers;

}




