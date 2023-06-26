/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/ListRegionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRegionsRequest::ListRegionsRequest() : 
    m_accountIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_regionOptStatusContainsHasBeenSet(false)
{
}

Aws::String ListRegionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_regionOptStatusContainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionOptStatusContainsJsonList(m_regionOptStatusContains.size());
   for(unsigned regionOptStatusContainsIndex = 0; regionOptStatusContainsIndex < regionOptStatusContainsJsonList.GetLength(); ++regionOptStatusContainsIndex)
   {
     regionOptStatusContainsJsonList[regionOptStatusContainsIndex].AsString(RegionOptStatusMapper::GetNameForRegionOptStatus(m_regionOptStatusContains[regionOptStatusContainsIndex]));
   }
   payload.WithArray("RegionOptStatusContains", std::move(regionOptStatusContainsJsonList));

  }

  return payload.View().WriteReadable();
}




