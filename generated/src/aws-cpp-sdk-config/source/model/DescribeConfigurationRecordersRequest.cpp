/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeConfigurationRecordersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationRecorderNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationRecorderNamesJsonList(m_configurationRecorderNames.size());
   for(unsigned configurationRecorderNamesIndex = 0; configurationRecorderNamesIndex < configurationRecorderNamesJsonList.GetLength(); ++configurationRecorderNamesIndex)
   {
     configurationRecorderNamesJsonList[configurationRecorderNamesIndex].AsString(m_configurationRecorderNames[configurationRecorderNamesIndex]);
   }
   payload.WithArray("ConfigurationRecorderNames", std::move(configurationRecorderNamesJsonList));

  }

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConfigurationRecordersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeConfigurationRecorders"));
  return headers;

}




