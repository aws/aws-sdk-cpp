/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/GetSampleDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSampleDataRequest::GetSampleDataRequest() : 
    m_s3SourceConfigHasBeenSet(false)
{
}

Aws::String GetSampleDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3SourceConfigHasBeenSet)
  {
   payload.WithObject("S3SourceConfig", m_s3SourceConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




