/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/ImportApplicationUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportApplicationUsageRequest::ImportApplicationUsageRequest() : 
    m_sourceS3LocationHasBeenSet(false)
{
}

Aws::String ImportApplicationUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceS3LocationHasBeenSet)
  {
   payload.WithObject("sourceS3Location", m_sourceS3Location.Jsonize());

  }

  return payload.View().WriteReadable();
}




