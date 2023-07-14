/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImportJobRequest::CreateImportJobRequest() : 
    m_importDestinationHasBeenSet(false),
    m_importDataSourceHasBeenSet(false)
{
}

Aws::String CreateImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importDestinationHasBeenSet)
  {
   payload.WithObject("ImportDestination", m_importDestination.Jsonize());

  }

  if(m_importDataSourceHasBeenSet)
  {
   payload.WithObject("ImportDataSource", m_importDataSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




