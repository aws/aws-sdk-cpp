/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExportRequest::CreateExportRequest() : 
    m_resourceSpecificationHasBeenSet(false),
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_filePasswordHasBeenSet(false)
{
}

Aws::String CreateExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", ImportExportFileFormatMapper::GetNameForImportExportFileFormat(m_fileFormat));
  }

  if(m_filePasswordHasBeenSet)
  {
   payload.WithString("filePassword", m_filePassword);

  }

  return payload.View().WriteReadable();
}




