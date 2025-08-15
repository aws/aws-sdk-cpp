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

Aws::String UpdateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("dataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_dataDeletionPolicyHasBeenSet)
  {
   payload.WithString("dataDeletionPolicy", DataDeletionPolicyMapper::GetNameForDataDeletionPolicy(m_dataDeletionPolicy));
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




