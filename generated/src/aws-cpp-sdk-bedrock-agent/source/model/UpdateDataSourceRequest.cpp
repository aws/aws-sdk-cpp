/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSourceRequest::UpdateDataSourceRequest() : 
    m_dataDeletionPolicy(DataDeletionPolicy::NOT_SET),
    m_dataDeletionPolicyHasBeenSet(false),
    m_dataSourceConfigurationHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_vectorIngestionConfigurationHasBeenSet(false)
{
}

Aws::String UpdateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataDeletionPolicyHasBeenSet)
  {
   payload.WithString("dataDeletionPolicy", DataDeletionPolicyMapper::GetNameForDataDeletionPolicy(m_dataDeletionPolicy));
  }

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("dataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("serverSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_vectorIngestionConfigurationHasBeenSet)
  {
   payload.WithObject("vectorIngestionConfiguration", m_vectorIngestionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




