﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CreateSbomExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSbomExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceFilterCriteriaHasBeenSet)
  {
   payload.WithObject("resourceFilterCriteria", m_resourceFilterCriteria.Jsonize());

  }

  if(m_reportFormatHasBeenSet)
  {
   payload.WithString("reportFormat", SbomReportFormatMapper::GetNameForSbomReportFormat(m_reportFormat));
  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload.View().WriteReadable();
}




