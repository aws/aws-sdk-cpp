/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataSourceRequest::GetDataSourceRequest() : 
    m_dataSourceIdHasBeenSet(false),
    m_verbose(false),
    m_verboseHasBeenSet(false)
{
}

Aws::String GetDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_verboseHasBeenSet)
  {
   payload.WithBool("Verbose", m_verbose);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDataSourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.GetDataSource"));
  return headers;

}




