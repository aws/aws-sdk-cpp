/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListOrganizationInsightsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListOrganizationInsightsRequest::ListOrganizationInsightsRequest() : 
    m_statusFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListOrganizationInsightsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusFilterHasBeenSet)
  {
   payload.WithObject("StatusFilter", m_statusFilter.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("AccountIds", std::move(accountIdsJsonList));

  }

  if(m_organizationalUnitIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitIdsJsonList(m_organizationalUnitIds.size());
   for(unsigned organizationalUnitIdsIndex = 0; organizationalUnitIdsIndex < organizationalUnitIdsJsonList.GetLength(); ++organizationalUnitIdsIndex)
   {
     organizationalUnitIdsJsonList[organizationalUnitIdsIndex].AsString(m_organizationalUnitIds[organizationalUnitIdsIndex]);
   }
   payload.WithArray("OrganizationalUnitIds", std::move(organizationalUnitIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




