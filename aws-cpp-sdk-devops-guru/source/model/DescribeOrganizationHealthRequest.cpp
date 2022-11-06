/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeOrganizationHealthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOrganizationHealthRequest::DescribeOrganizationHealthRequest() : 
    m_accountIdsHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false)
{
}

Aws::String DescribeOrganizationHealthRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




