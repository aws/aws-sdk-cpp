/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListLicenseConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLicenseConfigurationsRequest::ListLicenseConfigurationsRequest() : 
    m_licenseConfigurationArnsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String ListLicenseConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseConfigurationArnsJsonList(m_licenseConfigurationArns.size());
   for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
   {
     licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString(m_licenseConfigurationArns[licenseConfigurationArnsIndex]);
   }
   payload.WithArray("LicenseConfigurationArns", std::move(licenseConfigurationArnsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListLicenseConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.ListLicenseConfigurations"));
  return headers;

}




