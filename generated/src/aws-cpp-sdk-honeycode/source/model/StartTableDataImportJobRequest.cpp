/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/StartTableDataImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTableDataImportJobRequest::StartTableDataImportJobRequest() : 
    m_workbookIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_dataFormat(ImportSourceDataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_destinationTableIdHasBeenSet(false),
    m_importOptionsHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String StartTableDataImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("dataFormat", ImportSourceDataFormatMapper::GetNameForImportSourceDataFormat(m_dataFormat));
  }

  if(m_importOptionsHasBeenSet)
  {
   payload.WithObject("importOptions", m_importOptions.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




