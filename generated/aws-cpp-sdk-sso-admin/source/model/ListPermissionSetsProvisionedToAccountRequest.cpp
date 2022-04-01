/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPermissionSetsProvisionedToAccountRequest::ListPermissionSetsProvisionedToAccountRequest() : 
    m_instanceArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_provisioningStatus(ProvisioningStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListPermissionSetsProvisionedToAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", ProvisioningStatusMapper::GetNameForProvisioningStatus(m_provisioningStatus));
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

Aws::Http::HeaderValueCollection ListPermissionSetsProvisionedToAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.ListPermissionSetsProvisionedToAccount"));
  return headers;

}




