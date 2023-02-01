/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListReceivedLicensesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReceivedLicensesRequest::ListReceivedLicensesRequest() : 
    m_licenseArnsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListReceivedLicensesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseArnsJsonList(m_licenseArns.size());
   for(unsigned licenseArnsIndex = 0; licenseArnsIndex < licenseArnsJsonList.GetLength(); ++licenseArnsIndex)
   {
     licenseArnsJsonList[licenseArnsIndex].AsString(m_licenseArns[licenseArnsIndex]);
   }
   payload.WithArray("LicenseArns", std::move(licenseArnsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

Aws::Http::HeaderValueCollection ListReceivedLicensesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.ListReceivedLicenses"));
  return headers;

}




