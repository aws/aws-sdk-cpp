/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationAzureBlobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLocationAzureBlobRequest::DescribeLocationAzureBlobRequest() : 
    m_locationArnHasBeenSet(false)
{
}

Aws::String DescribeLocationAzureBlobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLocationAzureBlobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.DescribeLocationAzureBlob"));
  return headers;

}




