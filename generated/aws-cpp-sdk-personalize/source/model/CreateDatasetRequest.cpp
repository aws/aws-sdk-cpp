﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetRequest::CreateDatasetRequest() : 
    m_nameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_datasetTypeHasBeenSet(false)
{
}

Aws::String CreateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("schemaArn", m_schemaArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("datasetType", m_datasetType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateDataset"));
  return headers;

}




