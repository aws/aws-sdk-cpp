/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetRequest::DescribeDatasetRequest() : 
    m_datasetNameHasBeenSet(false)
{
}

Aws::String DescribeDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.DescribeDataset"));
  return headers;

}




