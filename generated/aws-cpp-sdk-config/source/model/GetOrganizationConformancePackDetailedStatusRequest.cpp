﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetOrganizationConformancePackDetailedStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOrganizationConformancePackDetailedStatusRequest::GetOrganizationConformancePackDetailedStatusRequest() : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetOrganizationConformancePackDetailedStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConformancePackNameHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackName", m_organizationConformancePackName);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOrganizationConformancePackDetailedStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetOrganizationConformancePackDetailedStatus"));
  return headers;

}




