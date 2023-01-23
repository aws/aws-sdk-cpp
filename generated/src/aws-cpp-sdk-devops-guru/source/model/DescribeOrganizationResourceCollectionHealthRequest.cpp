/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOrganizationResourceCollectionHealthRequest::DescribeOrganizationResourceCollectionHealthRequest() : 
    m_organizationResourceCollectionType(OrganizationResourceCollectionType::NOT_SET),
    m_organizationResourceCollectionTypeHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeOrganizationResourceCollectionHealthRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationResourceCollectionTypeHasBeenSet)
  {
   payload.WithString("OrganizationResourceCollectionType", OrganizationResourceCollectionTypeMapper::GetNameForOrganizationResourceCollectionType(m_organizationResourceCollectionType));
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

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




