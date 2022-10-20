/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_replicationConfigurationTemplateIDsHasBeenSet(false)
{
}

Aws::String DescribeReplicationConfigurationTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_replicationConfigurationTemplateIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationConfigurationTemplateIDsJsonList(m_replicationConfigurationTemplateIDs.size());
   for(unsigned replicationConfigurationTemplateIDsIndex = 0; replicationConfigurationTemplateIDsIndex < replicationConfigurationTemplateIDsJsonList.GetLength(); ++replicationConfigurationTemplateIDsIndex)
   {
     replicationConfigurationTemplateIDsJsonList[replicationConfigurationTemplateIDsIndex].AsString(m_replicationConfigurationTemplateIDs[replicationConfigurationTemplateIDsIndex]);
   }
   payload.WithArray("replicationConfigurationTemplateIDs", std::move(replicationConfigurationTemplateIDsJsonList));

  }

  return payload.View().WriteReadable();
}




