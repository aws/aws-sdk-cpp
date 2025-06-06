﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateBulkImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBulkImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobRoleArnHasBeenSet)
  {
   payload.WithString("jobRoleArn", m_jobRoleArn);

  }

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("files", std::move(filesJsonList));

  }

  if(m_errorReportLocationHasBeenSet)
  {
   payload.WithObject("errorReportLocation", m_errorReportLocation.Jsonize());

  }

  if(m_jobConfigurationHasBeenSet)
  {
   payload.WithObject("jobConfiguration", m_jobConfiguration.Jsonize());

  }

  if(m_adaptiveIngestionHasBeenSet)
  {
   payload.WithBool("adaptiveIngestion", m_adaptiveIngestion);

  }

  if(m_deleteFilesAfterImportHasBeenSet)
  {
   payload.WithBool("deleteFilesAfterImport", m_deleteFilesAfterImport);

  }

  return payload.View().WriteReadable();
}




