/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRetentionConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRetentionConfigurationsRequest::DescribeRetentionConfigurationsRequest() : 
    m_retentionConfigurationNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeRetentionConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionConfigurationNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> retentionConfigurationNamesJsonList(m_retentionConfigurationNames.size());
   for(unsigned retentionConfigurationNamesIndex = 0; retentionConfigurationNamesIndex < retentionConfigurationNamesJsonList.GetLength(); ++retentionConfigurationNamesIndex)
   {
     retentionConfigurationNamesJsonList[retentionConfigurationNamesIndex].AsString(m_retentionConfigurationNames[retentionConfigurationNamesIndex]);
   }
   payload.WithArray("RetentionConfigurationNames", std::move(retentionConfigurationNamesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRetentionConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeRetentionConfigurations"));
  return headers;

}




